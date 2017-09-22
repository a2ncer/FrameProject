//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_CANDIDATE_H
#define FRAMEPROJECT_CANDIDATE_H

#include <iostream>
class Candidate {
public:
    int getFrameNumber() const;

    void setFrameNumber(int frameNumber);

    const std::string &getClassName() const;

    void setClassName(const std::string &className);

    double getConfidence() const;

    void setConfidence(double confidence);

    double getLeft() const;

    void setLeft(double left);

    double getTop() const;

    void setTop(double top);

    double getWidth() const;

    void setWidth(double width);

    double getHeight() const;

    void setHeight(double height);

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
