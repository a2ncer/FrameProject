#ifndef FRAMEPROJECT_CANDIDATESREPOSITORY_H
#define FRAMEPROJECT_CANDIDATESREPOSITORY_H


#include <map>
#include "../CSV/IDataReader.h"
#include "Models/Candidate.h"

class CandidatesRepository {
public:
    CandidatesRepository(IDataReader &dataReader);
    void save(Candidate &candidate);
    std::vector<Candidate> findByFrameAndClass(int frameId, std::string);
    std::vector<Candidate> findAll();
    std::map<int ,std::map<std::string,std::vector<Candidate>>> groupByFrameAndClass();

private:
    std::vector<Candidate> repository;
    static bool comparator(Candidate,Candidate);
};


#endif //FRAMEPROJECT_CANDIDATESREPOSITORY_H
