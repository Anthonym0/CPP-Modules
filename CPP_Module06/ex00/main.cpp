#include "ScalarConverter.hpp"

void test(int nb, std::string test)
{
    std::cout << "========== " << GREEN << "TEST #" << nb << " (" << YELLOW << test << GREEN << ")" << RESET << " ==========" << std::endl;
    ScalarConverter::convert(test);
    std::cout << std::endl;
    std::cout << std::endl;
}


int main()
{
    test(1, "0");
    test(2, "nan");
    test(3, "nanf");
    test(3, "42.0f");
    test(4, "42.42f");
    test(5, "42.0");
    test(6, "123");
    test(7, "255");
    test(8, "-255");
    test(9, "2147483647");
    test(10, "-2147483648");
    test(11, "2147483648");
    test(12, "-2147483649");
    test(13, "love 42");
    test(14, "");
    test(15, "3.40282347e+39F");
    test(16, "-3.40282347e+39F");
    test(17, "1.7976931348623157e+309");
    test(18, "  asdasdasd  ");
    test(19, "A");
    test(20, "z");
}