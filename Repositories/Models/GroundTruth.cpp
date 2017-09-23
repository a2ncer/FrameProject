//
// Created by alex on 9/20/17.
//

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

int GroundTruth::getLeft() const {
    return left;
}

void GroundTruth::setLeft(double left) {
    GroundTruth::left = left;
}

int GroundTruth::getTop() const {
    return top;
}

void GroundTruth::setTop(double top) {
    GroundTruth::top = top;
}

int GroundTruth::getWidth() const {
    return width;
}

void GroundTruth::setWidth(double width) {
    GroundTruth::width = width;
}

int GroundTruth::getHeight() const {
    return height;
}

void GroundTruth::setHeight(double height) {
    GroundTruth::height = height;
}
