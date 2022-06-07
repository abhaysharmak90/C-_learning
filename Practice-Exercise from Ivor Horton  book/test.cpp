#include <iostream>
#include <string>

int main()
{
    std::string name{"abhay is is this sharma"};
    std::string word{"is"};
    for (size_t i = 0; i < name.length(); i++)
    {
        std::cout << i << " " << name.find(word, i) << "\n";
        if (name.find(word, i) != std::string::npos)
            name.replace(name.find(word, i), word.length(), word.length(), '*');
    }
    std::cout << name << std::endl;
}