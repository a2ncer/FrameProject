//
// Created by AVAG_inc on 22.09.2017.
//

#include "FrameResolver.h"

FrameResolver::FrameResolver(GroundTruthRepository groundTruthRepository, CandidatesRepository candidatesRepository) {

    //TODO: algotithm of detection here

   auto allGround = groundTruthRepository.findAll();

    for(auto &ground: allGround)
    {

        auto passibleCandidates = candidatesRepository.findByFrameAndClass(ground.getFrameNumber(),ground.getClassName());

        for(auto &candidate: passibleCandidates)
        {

          std::cout << "Ground Frame: " << ground.getFrameNumber() << " Ground Class: " << ground.getClassName()<< " ";
          std::cout << "Candidate Frame: " << candidate.getFrameNumber() << " Candidate Class: " << candidate.getClassName() << " ";
          std::cout << "\n";

        }

    }

}

Report FrameResolver::getReport() {
    return this->report;
}
