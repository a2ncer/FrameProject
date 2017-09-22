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
            std::vector<std::string> lineVector;

            while(getline(row,cell,','))
            {
                std::cout<<cell<<std::endl;
                lineVector.push_back(cell);
            }

            this->lines.push_back(lineVector);

        }
        file.close();
    }

    else throw FileNotFoundException(filePath);
}

std::vector<std::vector<std::string>> CSVReader::exportData() {


//    for (auto &line : this->lines) {
//        for (const auto &cell : line) {
//            std::cout<< cell << "  ";
//        }
//
//        std::cout << std::endl;
//    }

return this->lines;

}



