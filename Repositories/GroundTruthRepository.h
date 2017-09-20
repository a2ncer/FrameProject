//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_GROUNDTRUTHREPOSITORY_H
#define FRAMEPROJECT_GROUNDTRUTHREPOSITORY_H

#include <iostream>
#include "../CSV/IDataReader.h"

class GroundTruthRepository {
public:
    GroundTruthRepository(IDataReader &dataReader);
};


#endif //FRAMEPROJECT_GROUNDTRUTHREPOSITORY_H
