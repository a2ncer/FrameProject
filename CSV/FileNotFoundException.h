

#ifndef FRAMEPROJECT_FILENOTFOUNDEXCEPTION_H
#define FRAMEPROJECT_FILENOTFOUNDEXCEPTION_H

#include <iostream>
#include <exception>
#include <bits/basic_string.h>
#include <sstream>

class FileNotFoundException: public std::runtime_error {

public:
    explicit FileNotFoundException(std::string filePath);

private:
    std::string filePath;
};


#endif //FRAMEPROJECT_FILENOTFOUNDEXCEPTION_H
