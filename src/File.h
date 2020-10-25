/**
    File.cpp
    Purpose: get files.

    @author Muhammad Umer Farooq
    @profile https://lablnet.github.io
    @license MIT
    @version 1.0.0
*/

#include <string>
#include <filesystem>
#include <vector>

#ifndef HECK_FILE_H
#define HECK_FILE_H

namespace Lablnet {
    class File {
    private:
        bool isDirectory(std::string path) {
            return std::filesystem::is_directory(path);
        }
    protected:
        bool isFile(std::string file) {
            return std::filesystem::exists(file);
        }
    public:
        std::vector<std::string> getFiles(std::string path) {
            std::vector<std::string> files = {};
            if (this->isDirectory(path)) {
                for (const auto &entry : std::filesystem::recursive_directory_iterator(path)) {
                    files.insert(files.begin(), entry.path());
                }
            } else {
                std::cout << "No such directory found!" << std::endl;
                exit(1);
            }

            return files;
        }
    };
}

#endif //HECK_FILE_H
