/**
    Heck.cpp
    Purpose: Helper function to split string.

    @author Muhammad Umer Farooq
    @profile https://lablnet.github.io
    @license MIT
    @version 1.0.0
*/


#include <string>

#ifndef HECK_STR_H
#define HECK_STR_H
namespace Lablnet {
    std::string split(std::string str, std::string delimiter) {
        size_t pos = 0;
        while ((pos = str.find(delimiter)) != std::string::npos) {
            str.erase(0, pos + delimiter.length());
        }
        return str;
    }
}

#endif //HECK_STR_H
