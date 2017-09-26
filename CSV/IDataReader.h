

#ifndef FRAMEPROJECT_IDATAREADER_H
#define FRAMEPROJECT_IDATAREADER_H


#include <vector>
#include <iostream>
class IDataReader {
public:
    virtual std::vector<std::vector<std::string>> exportData()= 0;

};


#endif //FRAMEPROJECT_IDATAREADER_H
