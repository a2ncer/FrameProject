

#ifndef FRAMEPROJECT_CANDIDATE_H
#define FRAMEPROJECT_CANDIDATE_H

#include <iostream>
#include "../../Math/Rectangle.h"

class Candidate {
public:
    Candidate();

    int getFrameNumber() const;

    void setFrameNumber(int frameNumber);

    const std::string &getClassName() const;

    void setClassName(const std::string &className);

    double getConfidence() const;

    void setConfidence(double confidence);


    void setDetected(bool detected);

    bool isDetected() const;

    Rectangle getRectangle();

    void setRectangle(const Rectangle &rectangle);

private:
    int frameNumber;
    std::string className;
    double confidence;
    Rectangle rectangle;
    bool detected=false;



};


#endif //FRAMEPROJECT_CANDIDATE_H
