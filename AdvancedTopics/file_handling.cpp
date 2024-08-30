#include <iostream>
#include <fstream>

int main() {
    // Write to a file
    std::ofstream outfile("example.txt");
    outfile << "Hello, File!" << std::endl;
    outfile.close();

    // Read from the file
    std::ifstream infile("example.txt");
    std::string line;
    while (std::getline(infile, line)) {
        std::cout << line << std::endl;
    }
    infile.close();

    return 0;
}
