//
// Created by alex on 9/20/17.
//

#include "CandidatesRepository.h"

CandidatesRepository::CandidatesRepository(IDataReader &dataReader) {
    std::vector<std::vector<std::string>> data = dataReader.exportData();
    for (auto &line : data) {

        if (line.size() == 7) {
            Candidate candidate;

            candidate.setFrameNumber(std::stoi(line[0]));
            candidate.setClassName(line[1]);
            candidate.setConfidence(std::stod(line[2]));
            candidate.setLeft(std::stoi(line[3]));
            candidate.setTop(std::stoi(line[4]));
            candidate.setWidth(std::stoi(line[5]));
            candidate.setHeight(std::stoi(line[6]));


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
