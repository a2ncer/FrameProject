//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_CANDIDATE_H
#define FRAMEPROJECT_CANDIDATE_H

#include <iostream>
class Candidate {
private:
    int frameNumber;
    std::string className;
    double confidence;
    double left;
    double top;
    double width;
    double height;
};


#endif //FRAMEPROJECT_CANDIDATE_H
