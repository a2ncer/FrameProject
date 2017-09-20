//
// Created by alex on 9/20/17.
//


#include "GroundTruthRepository.h"


GroundTruthRepository::GroundTruthRepository(IDataReader &dataReader) {
    dataReader.exportData();
}
