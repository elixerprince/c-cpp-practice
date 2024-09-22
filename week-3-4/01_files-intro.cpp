#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream File("01-example.txt");
    File << "Hello, World!";
    File.close();

    std::ofstream HiddenFile(".01-hidden-file.txt");
    HiddenFile << "Hello, World!\n\n" << "This is a hidden file.";
    HiddenFile.close();

    std::ifstream ReadFile("01-example.txt");
    std::string line;

    while (getline (ReadFile, line)) {
        std::cout << line << '\n';
    }
    ReadFile.close();

    std::ifstream ReadHiddenFile(".01-hidden-file.txt");
    std::string lineHidden;

    while (getline (ReadHiddenFile, lineHidden)) {
        std::cout << lineHidden << '\n';
    }
    ReadHiddenFile.close();

    return 0;
}