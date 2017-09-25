
#include <algorithm>
#include "GroundTruthRepository.h"
#include "../Math/Rectangle.h"


GroundTruthRepository::GroundTruthRepository(IDataReader &dataReader) {

    std::vector<std::vector<std::string>> data = dataReader.exportData();
    for (auto &line : data) {

        if (line.size() == 6) {
            GroundTruth groundTruth;

            groundTruth.setFrameNumber(std::stoi(line[0]));
            groundTruth.setClassName(line[1]);

            Rectangle rectangle;
            rectangle.setLeft(std::stoi(line[2]));
            rectangle.setTop(std::stoi(line[3]));
            rectangle.setWidth(std::stoi(line[4]));
            rectangle.setHeight(std::stoi(line[5]));

            groundTruth.setRectangle(rectangle);

            this->save(groundTruth);

        }


    }


}

void GroundTruthRepository::save(GroundTruth &groundTruth) {

    this->repository.push_back(groundTruth);
}

std::vector<GroundTruth> GroundTruthRepository::findByFrameAndClass(int frameId, std::string className) {

    std::vector<GroundTruth> founded;
    for (auto &item : this->repository) {
        if (item.getFrameNumber() == frameId /*&& item.getClassName().compare(className)==0*/)
            founded.push_back(item);
    }

    return founded;
}

std::vector<GroundTruth> GroundTruthRepository::findAll() {
    return this->repository;
}

std::map<int, std::map<std::string, std::vector<GroundTruth>>> GroundTruthRepository::groupByFrameAndClass() {
    std::map<int, std::map<std::string, std::vector<GroundTruth>>> founded;

    for (auto &item : this->repository) {
        founded[item.getFrameNumber()][item.getClassName()].push_back(item);
    }

    for(auto &item: founded)
    {
       for(auto &byClass: item.second)
        {
            std::sort (byClass.second.begin(), byClass.second.end(), comparator);
        }
    }



    return founded;
}

bool GroundTruthRepository::comparator(GroundTruth first, GroundTruth second) {

    return first.getRectangle().Area() > second.getRectangle().Area();
}






