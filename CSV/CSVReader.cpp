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
            std::cout << line << '\n';
            std::stringstream   row(line);
            std::string cell;
            while(getline(row,cell,','))
            {
                std::cout<<cell<<std::endl;
            }

        }
        file.close();
    }

    else throw FileNotFoundException(filePath);
}

void CSVReader::exportData() {
std::cout<<"export "<< filePath <<std::endl;
}



