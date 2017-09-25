//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_GROUNDTRUTH_H
#define FRAMEPROJECT_GROUNDTRUTH_H

#include <iostream>
#include "../../Math/Rectangle.h"

class GroundTruth {
public:
    int getFrameNumber() const;

    void setFrameNumber(int frameNumber);

    const std::string &getClassName() const;

    void setClassName(const std::string &className);

    void setDetected(bool detected);

    bool isDetected() const;

    Rectangle getRectangle();

    void setRectangle(const Rectangle &rectangle);

private:
    int frameNumber;
    std::string className;
    Rectangle rectangle;
    bool detected=false;



};


#endif //FRAMEPROJECT_GROUNDTRUTH_H
