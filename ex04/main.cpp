#include <iostream>
#include <fstream>

std::string replace(std::string line, std::string s1, std::string s2){
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos) {
        result += line.substr(pos, found - pos);  // Add part before s1
        result += s2;                             // Add s2 instead of s1
        pos = found + s1.length();                // Move past the replaced part
    }
    result += line.substr(pos);  // Add any remaining part of the string

    return result;
}

int main(int argc, char **argv){


    if (argc != 4) {
        std::cout << "Error: wrong input" << std::endl;
        return 1;
    }

    std::string str1 = argv[2];
    std::string str2 = argv[3];

    if (str1.size() == 0 || str2.size() == 0){
        std::cout << "Error: empty string" << std::endl;
        return 1;
    }

    std::ifstream infile(argv[1]);
    if (!infile.is_open()) {
        std::cout << "Error: unable to open infile" << std::endl;
        return 1;
    }

    std::ofstream outfile(std::string(argv[1]) + ".replace");
    if (!outfile.is_open()) {
        std::cout << "Error: unable to create outfile" << std::endl;
    }

    std::string line;
    while (std::getline(infile, line)) {
        outfile << replace(line, argv[2], argv[3]) << "\n";
    }

    infile.close();
    outfile.close();

    return 0;
}