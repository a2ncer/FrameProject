

#ifndef FRAMEPROJECT_GROUNDTRUTHREPOSITORY_H
#define FRAMEPROJECT_GROUNDTRUTHREPOSITORY_H

#include <iostream>
#include <map>
#include "../CSV/IDataReader.h"
#include "Models/GroundTruth.h"


class GroundTruthRepository {
public:
    GroundTruthRepository(IDataReader &dataReader);
    void save(GroundTruth &groundTruth);
    std::vector<GroundTruth> findByFrameAndClass(int frameId, std::string className);
    std::vector<GroundTruth> findAll();
    std::map<int ,std::map<std::string,std::vector<GroundTruth>>> groupByFrameAndClass();

private:
    std::vector<GroundTruth> repository;
    static bool comparator(GroundTruth,GroundTruth);
};


#endif //FRAMEPROJECT_GROUNDTRUTHREPOSITORY_H
