//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_CANDIDATE_H
#define FRAMEPROJECT_CANDIDATE_H

#include <iostream>
class Candidate {
public:
    long int getFrameNumber() const;

    void setFrameNumber(int frameNumber);

    const std::string &getClassName() const;

    void setClassName(const std::string &className);

    double getConfidence() const;

    void setConfidence(double confidence);

    long int getLeft() const;

    void setLeft(double left);

    long int getTop() const;

    void setTop(double top);

    long int getWidth() const;

    void setWidth(double width);

    long int getHeight() const;

    void setHeight(double height);

private:
    long int frameNumber;
    std::string className;
    double confidence;
    long int left;
    long int top;
    long int width;
    long int height;
};


#endif //FRAMEPROJECT_CANDIDATE_H
