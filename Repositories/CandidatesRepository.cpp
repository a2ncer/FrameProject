//
// Created by alex on 9/20/17.
//

#include "CandidatesRepository.h"

CandidatesRepository::CandidatesRepository(IDataReader &dataReader) {
    std::vector<std::vector<std::string>> data = dataReader.exportData();
    for (auto &line : data) {

        if(line.size() == 7) {
            Candidate candidate;

            candidate.setFrameNumber(strtol(line[0]));
            candidate.setClassName(line[1]);
            candidate.setConfidence(strtod(line[2]));
            candidate.setTop(strtod(line[3]));
            candidate.setLeft();

        }



    }

}

void CandidatesRepository::save(Candidate &candidate) {

    this->repository.push_back(candidate);
}

Candidate & CandidatesRepository::findByFrameAndClass(int frameId, std::string className) {

    for (auto &item : this->repository) {
        if(item.getFrameNumber() == frameId && item.getClassName() == className)
            return item;
    }

    return (Candidate &) NULL;
}
