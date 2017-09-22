//
// Created by AVAG_inc on 22.09.2017.
//

#ifndef FRAMEPROJECT_FRAMERESOLVER_H
#define FRAMEPROJECT_FRAMERESOLVER_H


#include "Repositories/GroundTruthRepository.h"
#include "Repositories/CandidatesRepository.h"
#include "Report.h"

class FrameResolver {

public:
    FrameResolver(GroundTruthRepository groundTruthRepository, CandidatesRepository candidatesRepository);

    Report getReport();

private:
    Report report;
};


#endif //FRAMEPROJECT_FRAMERESOLVER_H
