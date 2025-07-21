

#include <iostream>
#include "whatever.hpp"

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

int    test_1()
{
    int a = 42;
    int b = 21;

    int verif_value_a = a;
    int verif_value_b = b;
    std::cout << "========== TEST " << GREEN << "1" << RESET << " ==========" << std::endl;

    std::cout << MAGENTA << "----- Before -----" << RESET << std::endl;
    std::cout << YELLOW << "a : " << GREEN << a << RESET << std::endl;
    std::cout << YELLOW << "b : " << GREEN << b << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    ::swap(a, b);
    std::cout << MAGENTA << "----- After -----" << RESET << std::endl;
    std::cout << YELLOW << "a : " << GREEN << a << RESET << std::endl;
    std::cout << YELLOW << "b : " << GREEN << b << RESET << std::endl;
    
    std::cout << std::endl;
    std::cout << std::endl;
    if (a == verif_value_b && b == verif_value_a)
        return (1);
    return (0);
}

int    test_2()
{
    std::string a = "42";
    std::string b = "I am a string";

    std::string verif_value_a = a;
    std::string verif_value_b = b;
    std::cout << "========== TEST " << GREEN << "2" << RESET << " ==========" << std::endl;

    std::cout << MAGENTA << "----- Before -----" << RESET << std::endl;
    std::cout << YELLOW << "a : " << GREEN << a << RESET << std::endl;
    std::cout << YELLOW << "b : " << GREEN << b << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    ::swap(a, b);
    std::cout << MAGENTA << "----- After -----" << RESET << std::endl;
    std::cout << YELLOW << "a : " << GREEN << a << RESET << std::endl;
    std::cout << YELLOW << "b : " << GREEN << b << RESET << std::endl;
    
    std::cout << std::endl;
    std::cout << std::endl;
    if (a == verif_value_b && b == verif_value_a)
        return (1);
    return (0);
}


int    test_3()
{
    int a = 42;
    int b = 21;

    std::cout << "========== TEST " << GREEN << "3" << RESET << " ==========" << std::endl;
    
    std::cout << YELLOW << "Value A : " << GREEN << a << RESET << std::endl;
    std::cout << YELLOW << "Value B : " << GREEN << b << RESET << std::endl;

    int m = ::min(a, b);
    std::cout << MAGENTA << "----- Min -----" << RESET << std::endl;
    std::cout << YELLOW << "Min is : " << GREEN << m << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    if (m == b)
        return (1);
    return (0);
}


int    test_4()
{
    std::string a = "test";
    std::string b = "test 2";

    std::cout << "========== TEST " << GREEN << "4" << RESET << " ==========" << std::endl;
    
    std::cout << YELLOW << "Value A : " << GREEN << a << RESET << std::endl;
    std::cout << YELLOW << "Value B : " << GREEN << b << RESET << std::endl;

    std::string m = ::min(a, b);
    std::cout << MAGENTA << "----- Min -----" << RESET << std::endl;
    std::cout << YELLOW << "Min is : " << GREEN << m << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    if (m == a)
        return (1);
    return (0);
}

int    test_5()
{
    int a = 63;
    int b = 13;

    std::cout << "========== TEST " << GREEN << "5" << RESET << " ==========" << std::endl;
    
    std::cout << YELLOW << "Value A : " << GREEN << a << RESET << std::endl;
    std::cout << YELLOW << "Value B : " << GREEN << b << RESET << std::endl;

    int m = ::max(a, b);
    std::cout << MAGENTA << "----- Max -----" << RESET << std::endl;
    std::cout << YELLOW << "Max is : " << GREEN << m << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    if (m == a)
        return (1);
    return (0);
}

int    test_6()
{
    std::string a = "test yoooo";
    std::string b = "test 123";

    std::cout << "========== TEST " << GREEN << "6" << RESET << " ==========" << std::endl;
    
    std::cout << YELLOW << "Value A : " << GREEN << a << RESET << std::endl;
    std::cout << YELLOW << "Value B : " << GREEN << b << RESET << std::endl;


    std::string m = ::max(a, b);
    std::cout << MAGENTA << "----- Max -----" << RESET << std::endl;
    std::cout << YELLOW << "Max is : " << GREEN << m << RESET << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    if (m == a)
        return (1);
    return (0);
}


int main()
{
    size_t passed = 0;

    // TEST SWITCH
    std::cout << "========== " << GREEN << "TEST SWITCH" << RESET << " ==========" << std::endl;
    passed += test_1();
    passed += test_2();
    std::cout << std::endl;
    
    // TEST MIN
    std::cout << "========== " << GREEN << "TEST MIN" << RESET << " ==========" << std::endl;
    passed += test_3();
    passed += test_4();

    // TEST MAX
    std::cout << "========== " << GREEN << "TEST MAX" << RESET << " ==========" << std::endl;
    passed += test_5();
    passed += test_6();

    std::cout << "========== " << GREEN << "RESULTS" << RESET << " ==========" << std::endl;
    std::cout << "Passed : " << MAGENTA << passed << RESET << "/" << GREEN << "6" << RESET << std::endl;
    if (passed != 6)
        std::cout << "Result: " << RED << "KO :(" << RESET << std::endl;
    else
        std::cout << "Result: " << GREEN << "OK :)" << RESET << std::endl;
    std::cout << "========== " << GREEN << "RESULTS" << RESET << " ==========" << std::endl;
}

// int main()
// {
//     int a = 2;
//     int b = 3;
    
//     ::swap( a, b );
    
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
//     std::string c = "chaine1";
//     std::string d = "chaine2";
    
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// }