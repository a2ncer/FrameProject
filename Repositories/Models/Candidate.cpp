//
// Created by alex on 9/20/17.
//

#include "Candidate.h"

long int Candidate::getFrameNumber() const {
    return frameNumber;
}

void Candidate::setFrameNumber(int frameNumber) {
    Candidate::frameNumber = frameNumber;
}

const std::string &Candidate::getClassName() const {
    return className;
}

void Candidate::setClassName(const std::string &className) {
    Candidate::className = className;
}

double Candidate::getConfidence() const {
    return confidence;
}

void Candidate::setConfidence(double confidence) {
    Candidate::confidence = confidence;
}

long int Candidate::getLeft() const {
    return left;
}

void Candidate::setLeft(double left) {
    Candidate::left = left;
}

long int Candidate::getTop() const {
    return top;
}

void Candidate::setTop(double top) {
    Candidate::top = top;
}

long int Candidate::getWidth() const {
    return width;
}

void Candidate::setWidth(double width) {
    Candidate::width = width;
}

long int Candidate::getHeight() const {
    return height;
}

void Candidate::setHeight(double height) {
    Candidate::height = height;
}
