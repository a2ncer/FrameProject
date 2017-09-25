//
// Created by alex on 9/20/17.
//

#include "Candidate.h"

int Candidate::getFrameNumber() const {
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


void Candidate::setDetected(bool detected) {
    Candidate::detected = detected;
}

bool Candidate::isDetected() const {
    return detected;
}

void Candidate::setRectangle(const Rectangle &rectangle) {
    Candidate::rectangle = rectangle;
}

Rectangle Candidate::getRectangle() {
    return rectangle;
}

Candidate::Candidate() {

}

