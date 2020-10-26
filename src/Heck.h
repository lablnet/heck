/**
    Heck.cpp
    Purpose: Parse and count the lines in files.

    @author Muhammad Umer Farooq
    @profile https://lablnet.github.io
    @license MIT
    @version 1.0.0
*/

#ifndef HECK_HECK_H
#define HECK_HECK_H

#include <iostream>
#include <fstream>
#include <string>
#include "Str.h"
#include "File.h"

namespace Lablnet {
class Heck : public Lablnet::File {
    private:
        std::string path;
        std::string ext;
        bool matchExt(std::string file, std::string& extension) {
            std::vector<std::string> arr = Lablnet::split(file, ".");
            // match the extension... otherwise skip it.
            if (extension == "*") return true;
            if (arr[arr.size() - 1] == extension) return true;
            return false;
        }

    public:
        Heck(std::string path, std::string &ext) : path(std::move(path)), ext(ext) {}

        void parse() {
            std::cout << "started...\n";
            std::string line;
            long long int count = 0, tCount = 0, newLine = 0, tNewLine = 0;
            std::vector<std::string> files = getFiles(this->path);
            for (auto & file : files) {
                count = 0, newLine = 0;
                if (matchExt(file, this->ext)) {
                    std::cout << "Processing file : " << file << std::endl;
                    std::ifstream openFile (file);
                    if (openFile.is_open()) {
                        while (std::getline(openFile, line)) {
                            //std::cout << line << std::endl;
                            count++;

                            // count new lines.
                            if (line.empty()) {
                                newLine++;
                            }
                        }
                        std::cout << file << " : " << count << std::endl;
                        std::cout << file << " : " << newLine    << std::endl;
                        tCount += count;
                        tNewLine += newLine;
                        openFile.close(); //safely close the file.
                    }
                }
            }

            std::cout << "Total count: " << tCount << std::endl;
            std::cout << "Total line breaks count: " << tNewLine << std::endl;
        }
    };
}

#endif //HECK_HECK_H
