/**
    Heck.cpp
    Purpose: Helper function to split string.

    @author Muhammad Umer Farooq
    @profile https://lablnet.github.io
    @license MIT
    @version 1.0.0
*/


#include <string>
#include <vector>
#include <cstring>

#ifndef HECK_STR_H
#define HECK_STR_H
namespace Lablnet {
    std::vector<std::string> split(std::string& str,const std::string& sep) {
        char* cstr = const_cast<char*>(str.c_str());
        char* current;
        std::vector<std::string> arr;
        current=strtok(cstr,sep.c_str());
        while(current!=NULL){
            arr.push_back(current);
            current=strtok(NULL,sep.c_str());
        }
        return arr;
    }
}

#endif //HECK_STR_H
