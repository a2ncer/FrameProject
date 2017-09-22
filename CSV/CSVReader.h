//
// Created by alex on 9/20/17.
//

#ifndef FRAMEPROJECT_CSVREADER_H
#define FRAMEPROJECT_CSVREADER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <exception>
#include "IDataReader.h"

class CSVReader: public IDataReader {

public:
    CSVReader(std::string filePath);
    std::vector<std::vector<std::string>> exportData() override;

private:
    std::string filePath;
    std::vector<std::vector<std::string>> lines;
};


#endif //FRAMEPROJECT_CSVREADER_H
