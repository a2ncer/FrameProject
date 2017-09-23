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

    int getLeft() const;

    void setLeft(double left);

    int getTop() const;

    void setTop(double top);

    int getWidth() const;

    void setWidth(double width);

    int getHeight() const;

    void setHeight(double height);

private:
    int frameNumber;
    std::string className;
    double confidence;
    int left;
    int top;
    int width;
    int height;
};


#endif //FRAMEPROJECT_CANDIDATE_H
