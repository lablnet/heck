/**
    main.cpp
    Purpose: Main entry point.

    @author Muhammad Umer Farooq
    @profile https://lablnet.github.io
    @license MIT
    @version 1.0.0
*/

#include <string>
#include "src/Heck.h"

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        std::cout << "Please provide required argument.";
        return 1;
    }
    //for (int i = 0; i < argc; ++i)
    //    std::cout << i << " " << argv[i] << "\n";
    std::string ext = "*";

    std::string path = argv[1];
    if (argv[2])
        ext = argv[2];

    Lablnet::Heck h(path, ext);
    h.parse();
    return 0;
}
