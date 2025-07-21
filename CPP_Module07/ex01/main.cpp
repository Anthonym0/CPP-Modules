#include "iter.hpp"

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

void    aff_text(std::string text)
{
    std::cout << GREEN << text << RESET << std::endl;
}

void    multiply_int(int nb)
{
    nb = nb * 10;
    std::cout << GREEN << nb << RESET << std::endl;
}

void test_1()
{
    std::cout << "========== TEST " << GREEN << "1" << RESET << " ==========" << std::endl;
    std::string test[] = {"salut","les","kidz"};
    ::Iter(test, 3, aff_text);
    std::cout << std::endl;
    std::cout << std::endl;
}

void test_2()
{
    std::cout << "========== TEST " << GREEN << "2 ( with null pointer )" << RESET << " ==========" << std::endl;
    std::string *test = NULL;
    ::Iter(test, 3, aff_text);
    std::cout << std::endl;
    std::cout << std::endl;
}

void test_3()
{
    std::cout << "========== TEST " << GREEN << "3" << RESET << " ==========" << std::endl;
    int test[] = {1,2,3};
    ::Iter(test, 3, multiply_int);
    std::cout << std::endl;
    std::cout << std::endl;
}

int main()
{
    test_1();
    test_2();
    test_3();
}