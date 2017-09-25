//
// Created by alex on 9/23/17.
//

#ifndef FRAMEPROJECT_RECTANGLE_H
#define FRAMEPROJECT_RECTANGLE_H


class Rectangle {
public:
    Rectangle(long top, long left, long width, long height);
    Rectangle();
    int X1();
    int X2();
    int Y1();
    int Y2();

    int Area();

    int getTop() const;

    void setTop(int top);

    int getLeft() const;

    void setLeft(int left);

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);


private:
    int top;
    int left;
    int width;
    int height;

};


#endif //FRAMEPROJECT_RECTANGLE_H
