
#include "GroundTruthRepository.h"


GroundTruthRepository::GroundTruthRepository(IDataReader &dataReader) {

    std::vector<std::vector<std::string>> data = dataReader.exportData();
    for (auto &line : data) {

        if (line.size() == 6) {
            GroundTruth groundTruth;

            groundTruth.setFrameNumber(std::stol(line[0]));
            groundTruth.setClassName(line[1]);
            groundTruth.setLeft(std::stol(line[2]));
            groundTruth.setTop(std::stol(line[3]));
            groundTruth.setWidth(std::stol(line[4]));
            groundTruth.setHeight(std::stol(line[5]));

            this->save(groundTruth);

        }


    }


}

void GroundTruthRepository::save(GroundTruth &groundTruth) {

    this->repository.push_back(groundTruth);
}

std::vector<GroundTruth> GroundTruthRepository::findByFrameAndClass(long int frameId, std::string className) {

    std::vector<GroundTruth> finded;
    for (auto &item : this->repository) {
        if (item.getFrameNumber() == frameId /*&& item.getClassName().compare(className)==0*/)
            finded.push_back(item);
    }

    return finded;
}

std::vector<GroundTruth> GroundTruthRepository::findAll() {
    return this->repository;
}




