#include <iostream>


int main(void)
{
    std::string brain_str = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain_str;
    std::string& stringREF = brain_str;

    std::cout << "stringPTR Address : " << stringPTR << std::endl;
    std::cout << "stringREF Address : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "stringPTR Value : " << *stringPTR << std::endl;
    std::cout << "stringREF Value : " << stringREF << std::endl;
}