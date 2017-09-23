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
    int left;
    int top;
    int width;
    int height;

};


#endif //FRAMEPROJECT_GROUNDTRUTH_H
