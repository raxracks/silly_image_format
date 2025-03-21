#include "common.hpp"
#include <vector>
#include <iostream>

std::vector<const char*> collectArgs(int argc, char* argv[]) {
    auto args = std::vector<const char*>();
    args.reserve(argc);
    for (int i = 0; i < argc; i++) {
        args.push_back(argv[i]);
    }

    return args;
}

void exitWithUsage() {
    std::cerr << "Please input a file name\n";
    std::cerr << "Converter Usage: xmake run main infile.jpeg outfile.txt\n";
    std::cerr << "Viewier Usage: xmake run main infile.txt\n";
    exit(1);
}