//
// Created by alex on 9/20/17.
//

#include "CSVReader.h"
#include "FileNotFoundException.h"

CSVReader::CSVReader(std::string filePath) {

    this->filePath = filePath;


    std::ifstream file(filePath);

    if (file.is_open())
    {
        std::string line;
        while ( getline (file,line) )
        {
            std::stringstream   row(line);
            std::string cell;
            std::vector<std::string> lineVector;

            while(getline(row, cell, ','))
            {
                lineVector.push_back(trim(cell));
            }

            this->lines.push_back(lineVector);

        }
        file.close();
    }

    else throw FileNotFoundException(filePath);
}

std::vector<std::vector<std::string>> CSVReader::exportData() {

return this->lines;

}

std::string CSVReader::trim_left(const std::string& str)
{
    const std::string pattern = " \f\n\r\t\v";
    return str.substr(str.find_first_not_of(pattern));
}

//
//Right trim
//
std::string CSVReader::trim_right(const std::string& str)
{
    const std::string pattern = " \f\n\r\t\v";
    return str.substr(0,str.find_last_not_of(pattern) + 1);
}

//
//Left and Right trim
//
std::string CSVReader::trim(const std::string& str)
{
    return trim_left(trim_right(str));
}




