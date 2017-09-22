#ifndef FRAMEPROJECT_CANDIDATESREPOSITORY_H
#define FRAMEPROJECT_CANDIDATESREPOSITORY_H


#include "../CSV/IDataReader.h"
#include "Models/Candidate.h"

class CandidatesRepository {
public:
    CandidatesRepository(IDataReader &dataReader);
    void save(Candidate &candidate);
    std::vector<Candidate> findByFrameAndClass(long int frameId, std::string);
    std::vector<Candidate> findAll();
private:
    std::vector<Candidate> repository;
};


#endif //FRAMEPROJECT_CANDIDATESREPOSITORY_H
