//
// Created by alex on 9/23/17.
//

#include "InterSection.h"



bool InterSection::isInterSected() {

    bool comp0 = a.X1() < b.X2();
    bool comp1 = a.X2() > b.X1();
    bool comp2 = a.Y1() < b.Y2();
    bool comp3 = a.Y2() > b.Y1();
    return comp0 && comp1 && comp2 && comp3;
}

InterSection::InterSection(Rectangle a , Rectangle b): a(a), b(b) {
}

int InterSection::getInterSectedArea() {


    int x_overlap = std::max(0, std::min(a.X2(),b.X2()) - std::max(a.X1(),b.X1()));
    int y_overlap = std::max(0, std::min(a.Y2(),b.Y2()) - std::max(a.Y1(),b.Y1()));

    return x_overlap * y_overlap;

}

int InterSection::getUnionArea() {
    return a.Area() + b.Area() - getInterSectedArea();
}
