//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_GROUNDTRUTHREPOSITORY_H
#define FRAMEPROJECT_GROUNDTRUTHREPOSITORY_H

#include <iostream>
#include "../CSV/IDataReader.h"
#include "Models/GroundTruth.h"


class GroundTruthRepository {
public:
    GroundTruthRepository(IDataReader &dataReader);
    void save(GroundTruth &groundTruth);
    GroundTruth & findByFrameAndClass(int frameId, std::string className);
private:
    std::vector<GroundTruth> repository;
};


#endif //FRAMEPROJECT_GROUNDTRUTHREPOSITORY_H
