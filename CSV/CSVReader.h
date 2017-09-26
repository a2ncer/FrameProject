

#ifndef FRAMEPROJECT_CSVREADER_H
#define FRAMEPROJECT_CSVREADER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <exception>
#include "IDataReader.h"
#include <string>
class CSVReader: public IDataReader {

public:
    CSVReader(std::string filePath);
    std::vector<std::vector<std::string>> exportData() override;

private:
    std::string filePath;
    std::vector<std::vector<std::string>> lines;

    std::string trim_left(const std::string &str);

    std::string trim_right(const std::string &str);

    std::string trim(const std::string &str);
};


#endif //FRAMEPROJECT_CSVREADER_H
