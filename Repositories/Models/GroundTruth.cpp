

#include "GroundTruth.h"

int GroundTruth::getFrameNumber() const {
    return frameNumber;
}

void GroundTruth::setFrameNumber(int frameNumber) {
    GroundTruth::frameNumber = frameNumber;
}

const std::string &GroundTruth::getClassName() const {
    return className;
}

void GroundTruth::setClassName(const std::string &className) {
    GroundTruth::className = className;
}

void GroundTruth::setDetected(bool detected) {
    GroundTruth::detected = detected;
}

bool GroundTruth::isDetected() const {
    return detected;
}

Rectangle GroundTruth::getRectangle()  {
    return rectangle;
}

void GroundTruth::setRectangle(const Rectangle &rectangle) {
    GroundTruth::rectangle = rectangle;
}
