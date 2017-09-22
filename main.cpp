#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "CSV/CSVReader.h"
#include "Repositories/GroundTruthRepository.h"
#include "Repositories/CandidatesRepository.h"
#include "FrameResolver.h"



void handleException(std::exception &exception);

int main() {

    std::cout << "FrameProject" << std::endl;

    try {

        CSVReader groundTruthReader("../od_gt.csv");

        CSVReader candidatesReader("../od_cnd.csv");

        GroundTruthRepository groundTruthRepository(groundTruthReader);

        CandidatesRepository candidatesRepository(candidatesReader);


//       auto test = groundTruthRepository.findAll();
//
//       for(auto &item: test)
//       {
//           std::cout << item.getClassName() <<std::endl;
//       }

//        auto test = groundTruthRepository.findByFrameAndClass(3,"car");
//        for(auto &item: test){
//        std::cout << item.getClassName() <<std::endl;
//       }


        FrameResolver frameResolver(groundTruthRepository, candidatesRepository);

        frameResolver.getReport().print();

    }
    catch (std::exception &e) {
        handleException(e);
    }

    return 0;
}

void handleException(std::exception &e) {

    std::cout << "Exception got: " << e.what() << std::endl;

}
