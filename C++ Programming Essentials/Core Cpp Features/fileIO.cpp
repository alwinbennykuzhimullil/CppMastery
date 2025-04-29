#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::string inputFilename = "input.txt";
    std::string outputFilename = "output.txt";

    std::ifstream inputFile(inputFilename);
    std::ofstream outputFile(outputFilename);

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open " << inputFilename << std::endl;
        return 1; // Exit with error code
    }

    if (!outputFile.is_open()) {
        std::cerr << "Failed to open " << outputFilename << std::endl;
        return 1; // Exit with error code
    }

    std::vector<double> numbers;
    double number;
    while (inputFile >> number) {
        numbers.push_back(number);
    }

    double sum = 0;
    for (double n : numbers) {
        sum += n;
    }

    double average = numbers.empty() ? 0 : sum / numbers.size();

    outputFile << "The average is: " << average << std::endl;

    std::cout << "The average has been written to " << outputFilename << std::endl;

    // Close the files
    inputFile.close();
    outputFile.close();

    return 0;
}
