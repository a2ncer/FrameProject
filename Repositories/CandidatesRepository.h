//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_CANDIDATESREPOSITORY_H
#define FRAMEPROJECT_CANDIDATESREPOSITORY_H


#include "../CSV/IDataReader.h"

class CandidatesRepository {
public:
    CandidatesRepository(IDataReader &dataReader);
};


#endif //FRAMEPROJECT_CANDIDATESREPOSITORY_H
