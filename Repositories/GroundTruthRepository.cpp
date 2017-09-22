//
// Created by alex on 9/20/17.
//


#include "GroundTruthRepository.h"


GroundTruthRepository::GroundTruthRepository(IDataReader &dataReader) {



    auto lines = dataReader.exportData();

    for (auto &line : lines) {
        for (const auto &cell : line) {
            std::cout<< cell << "  ";
        }

        std::cout << std::endl;
    }


}

void GroundTruthRepository::save(GroundTruth &groundTruth) {

    this->repository.push_back(groundTruth);
}

GroundTruth & GroundTruthRepository::findByFrameAndClass(int frameId, std::string className) {

        for (auto &item : this->repository) {
            if(item.getFrameNumber() == frameId && item.getClassName() == className)
                return item;
        }

        return (GroundTruth &) NULL;
    }
}


