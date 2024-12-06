#include <iostream>
#include "QueryParser.h"

int main()
{
    std::string input;
    int totalInstructions = 0;
    while (std::getline(std::cin, input))
    {
        ++totalInstructions;
        std::cout << "\n User input: " << input << std::endl;
        std::cout << "\n Total instructions: " << totalInstructions << std::endl;
    }

    return 0;
}