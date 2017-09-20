//
// Created by alex on 9/20/17.
//


#include "FileNotFoundException.h"



FileNotFoundException::FileNotFoundException(std::string _filePath): std::runtime_error("") {

    std::stringstream ss;
    ss <<" File not found: " << _filePath;

    static_cast<std::runtime_error&>(*this) = std::runtime_error(ss.str());
}


