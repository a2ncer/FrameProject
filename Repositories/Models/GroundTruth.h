//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_GROUNDTRUTH_H
#define FRAMEPROJECT_GROUNDTRUTH_H

#include <iostream>
class GroundTruth {
public:
    int getFrameNumber() const;

    void setFrameNumber(int frameNumber);

    const std::string &getClassName() const;

    void setClassName(const std::string &className);

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
    double left;
    double top;
    double width;
    double height;

};


#endif //FRAMEPROJECT_GROUNDTRUTH_H
