#include <iostream>
#include <string>

void input_string(std::string &);
void reverse_string(std::string &);
void output_string(const std::string &);

int main()
{
    std::string text{};
    input_string(text);
    reverse_string(text);
    output_string(text);
}

void input_string(std::string &inpttxt)
{
    std::cout << "\nEnter a single line string\n";
    // std::cin.ignore();
    std::getline(std::cin, inpttxt);
}

void reverse_string(std::string &rvrtxt)
{
    size_t max_index{rvrtxt.length() - 1};
    for (size_t i = 0, temp; i < (rvrtxt.length() / 2); i++)
    {
        temp = rvrtxt[i];
        rvrtxt[i] = rvrtxt[max_index - i];
        rvrtxt[max_index - i] = temp;
    }
}

void output_string(const std::string &otpttxt)
{
    std::cout << "\nThe string you entered, in reverse looks like this\n";
    std::cout << otpttxt << std::endl;
}