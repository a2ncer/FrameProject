//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_CANDIDATESREPOSITORY_H
#define FRAMEPROJECT_CANDIDATESREPOSITORY_H


#include "../CSV/IDataReader.h"
#include "Models/Candidate.h"

class CandidatesRepository {
public:
    CandidatesRepository(IDataReader &dataReader);
    void save(Candidate &candidate);
    Candidate & findByFrameAndClass(int frameId, std::string);
private:
    std::vector<Candidate> repository;
};


#endif //FRAMEPROJECT_CANDIDATESREPOSITORY_H
