//
// Created by alex on 9/20/17.
//

#include "GroundTruth.h"

long int GroundTruth::getFrameNumber() const {
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

long int GroundTruth::getLeft() const {
    return left;
}

void GroundTruth::setLeft(double left) {
    GroundTruth::left = left;
}

long int GroundTruth::getTop() const {
    return top;
}

void GroundTruth::setTop(double top) {
    GroundTruth::top = top;
}

long int GroundTruth::getWidth() const {
    return width;
}

void GroundTruth::setWidth(double width) {
    GroundTruth::width = width;
}

long int GroundTruth::getHeight() const {
    return height;
}

void GroundTruth::setHeight(double height) {
    GroundTruth::height = height;
}
