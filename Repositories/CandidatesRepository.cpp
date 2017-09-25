//
// Created by alex on 9/20/17.
//

#include <algorithm>
#include "CandidatesRepository.h"

CandidatesRepository::CandidatesRepository(IDataReader &dataReader) {
    std::vector<std::vector<std::string>> data = dataReader.exportData();
    for (auto &line : data) {

        if (line.size() == 7) {

            Candidate candidate;

            candidate.setFrameNumber(std::stoi(line[0]));
            candidate.setClassName(line[1]);
            candidate.setConfidence(std::stod(line[2]));

            Rectangle rectangle;


            rectangle.setLeft(std::stoi(line[3]));
            rectangle.setTop(std::stoi(line[4]));
            rectangle.setWidth(std::stoi(line[5]));
            rectangle.setHeight(std::stoi(line[6]));

            candidate.setRectangle(rectangle);


            this->save(candidate);

        }


    }

}

void CandidatesRepository::save(Candidate &candidate) {

    this->repository.push_back(candidate);
}

std::vector<Candidate> CandidatesRepository::findByFrameAndClass(int frameId, std::string className) {

    std::vector<Candidate> finded;

    for (auto &item : this->repository) {
        if (item.getFrameNumber() == frameId && item.getClassName().compare(className)==0)
            finded.push_back(item);
    }

    return finded;


}

std::vector<Candidate> CandidatesRepository::findAll() {
    return this->repository;
}

bool CandidatesRepository::comparator(Candidate first, Candidate second) {
    return first.getConfidence()>second.getConfidence();
}

std::map<int, std::map<std::string, std::vector<Candidate>>> CandidatesRepository::groupByFrameAndClass() {
    std::map<int, std::map<std::string, std::vector<Candidate>>> founded;

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
