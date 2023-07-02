#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> msg {"Hello", "I", "am", "Fisnik", "!"};

    for (const std::string& word : msg)
        std::cout << word << " ";

    std::cout << "\n";
    return 0;
}