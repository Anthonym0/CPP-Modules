#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs)
{
    std::cout << "ScalarConverter assignement operator called" << std::endl;
    (void)rhs;
    return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs)
{
    std::cout << "ScalarConverter copy constructor called" << std::endl;
    (void)rhs;
    return ;
}

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <limits>

bool check_only_numbers(std::string text)
{
    for (size_t i = 0; i < text.length(); i++)
    {
        if (!isdigit(text[i]) && text[i] != '-')
            return (false);
    }
    return (true);
}


// void    CharDisplay(std::string text)
// {
//     char c = text[0];
//     long long c_atoi = atoll(text.c_str());

//     if ((c >= 0 && c <= 31) || c == 127)
//     {
//         std::cout << YELLOW << "char: " << RED << "Non displayable" << RESET << std::endl;
//     } else if (c >= 32 && c <= 126 ) {
//         std::cout << YELLOW << "char: " << GREEN << static_cast<char>(c) << RESET << std::endl;
//     }
//     else
//     {
//         std::cout << YELLOW << "char: " << RED << "Impossible" << RESET << std::endl;   
//     }




//     if (text.length() > 10)
//         std::cout << YELLOW << "int: " << RED << "OVERFLOW" << RESET << std::endl;
//     else
//     {
//         if (c_atoi > INT_MAX)
//             std::cout << YELLOW << "int: " << RED << "OVERFLOW" << RESET << std::endl;
//         else if (c_atoi < INT_MIN)
//             std::cout << YELLOW << "int: " << RED << "UNDERFLOW" << RESET << std::endl;
//         else
//             std::cout << YELLOW << "int: " << GREEN << static_cast<int>(c) << RESET << std::endl;
//     }
//     if (c_atoi > __FLT_MAX__)
//     {
//         std::cout << YELLOW << "float: " << RED << "OVERFLOW" << RESET << std::endl;
//         std::cout << YELLOW << "double: " << RED << "UNDERFLOW" << RESET << std::endl;
//     }
//     else if (c_atoi < __FLT_MIN__)
//     {
//         std::cout << YELLOW << "float: " << RED << "UNDERFLOW" << RESET << std::endl;
//         std::cout << YELLOW << "double: " << RED << "UNDERFLOW" << RESET << std::endl;
//     }
//     else
//     {
//         std::cout << YELLOW << "float: " << GREEN << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << RESET << std::endl;
//         std::cout << YELLOW << "double: " << GREEN << std::fixed << std::setprecision(1) << static_cast<double>(c) << RESET << std::endl;
//     }
    
// }

// void    IntDisplay(std::string text)
// {

//     long long nb  =    atoll(text.c_str());
//     double nb_f  =    atof(text.c_str());
//     int true_nb   = atoi(text.c_str());

//     if ((nb >= 0 && nb <= 31) || nb == 127)
//     {
//         std::cout << YELLOW << "char: " << RED << "Non displayable" << RESET << std::endl;
//     } else if (nb >= 32 && nb <= 126 ) {
//         std::cout << YELLOW << "char: " << GREEN << static_cast<char>(nb) << RESET << std::endl;
//     }
//     else
//     {
//         std::cout << YELLOW << "char: " << RED << "Impossible" << RESET << std::endl;   
//     }

//     if (text.length() > 10)
//         std::cout << YELLOW << "int: " << RED << "OVERFLOW" << RESET << std::endl;
//     else
//     {
//         if (nb > INT_MAX)
//             std::cout << YELLOW << "int: " << RED << "OVERFLOW" << RESET << std::endl;
//         else if (nb < INT_MIN)
//             std::cout << YELLOW << "int: " << RED << "UNDERFLOW" << RESET << std::endl;
//         else
//             std::cout << YELLOW << "int: " << GREEN << static_cast<int>(true_nb) << RESET << std::endl;
//     }
//     if (nb_f > __FLT_MAX__)
//     {
//         std::cout << YELLOW << "float: " << RED << "OVERFLOW" << RESET << std::endl;
//         std::cout << YELLOW << "double: " << RED << "UNDERFLOW" << RESET << std::endl;
//     }
//     else if (nb_f < __FLT_MIN__)
//     {
//         std::cout << YELLOW << "float: " << RED << "UNDERFLOW" << RESET << std::endl;
//         std::cout << YELLOW << "double: " << RED << "UNDERFLOW" << RESET << std::endl;
//     }
//     else
//     {
//         std::cout << YELLOW << "float: " << GREEN << std::fixed << std::setprecision(1) << static_cast<float>(true_nb) << "f" << RESET << std::endl;
//         std::cout << YELLOW << "double: " << GREEN << std::fixed << std::setprecision(1) << static_cast<double>(true_nb) << RESET << std::endl;
//     }
    
// }

// void    FloatDisplay(std::string text)
// {

//     double double_nb = atof(text.c_str());
//     float float_nb = atof(text.c_str());

//     if (double_nb >= 32 && double_nb <= 126)
//         std::cout << YELLOW << "char: " << GREEN << static_cast<char>(float_nb) << RESET << std::endl;
//     else
//         std::cout << YELLOW << "char: " << RED << "Non displayable" << RESET << std::endl;


//     if (text.length() > 10)
//         std::cout << YELLOW << "int: " << RED << "OVERFLOW" << RESET << std::endl;
//     else
//     {
//         if (double_nb > INT_MAX)
//             std::cout << YELLOW << "int: " << RED << "OVERFLOW" << RESET << std::endl;
//         else if (double_nb < INT_MIN)
//             std::cout << YELLOW << "int: " << RED << "UNDERFLOW" << RESET << std::endl;
//         else
//             std::cout << YELLOW << "int: " << GREEN << static_cast<int>(float_nb) << RESET << std::endl;
//     }


//     if (double_nb > __FLT_MAX__)
//     {
//         std::cout << YELLOW << "float: " << RED << "OVERFLOW" << RESET << std::endl;
//         std::cout << YELLOW << "double: " << RED << "UNDERFLOW" << RESET << std::endl;
//     }
//     else if (double_nb < __FLT_MIN__)
//     {
//         std::cout << YELLOW << "float: " << RED << "UNDERFLOW" << RESET << std::endl;
//         std::cout << YELLOW << "double: " << RED << "UNDERFLOW" << RESET << std::endl;
//     }
//     else
//     {
//         std::cout << YELLOW << "float: " << GREEN << std::fixed << std::setprecision(1) << static_cast<float>(float_nb) << "f" << RESET << std::endl;
//         std::cout << YELLOW << "double: " << GREEN << std::fixed << std::setprecision(1) << static_cast<double>(float_nb) << RESET << std::endl;
//     }
// }

size_t str_count(std::string text, char c)
{
    size_t count = 0;
    for (size_t i = 0; i < text.length(); i++)
    {
        if (text[i] == c)
            count++;
    }
    return (count);
}

int check_type_literal(std::string text)
{
    if (text.empty())
        return (-1);
    if (text.length() == 1 && !check_only_numbers(text))
    {
        return (0); // char;
    }

    if (check_only_numbers(text))
    {  
        return (1); // is int
    }
    if (text.find("f") != std::string::npos)
    {
        if (text.find(".") != std::string::npos)
        {
            return (2); // float
        }
    }
   if (text.find(".") != std::string::npos)
    {
        return (3); // double
    }
    return (-1); // other
}


void    CharDisplay(std::string text)
{
    char c = text[0];

    std::cout << YELLOW << "char: " << GREEN << "'" << static_cast<char>(c) << "'" << RESET << std::endl;
    std::cout << YELLOW << "int: " << GREEN << static_cast<int>(c) << RESET << std::endl;
    std::cout << YELLOW << "float: " << GREEN << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << RESET << std::endl;
    std::cout << YELLOW << "double: " << GREEN << static_cast<double>(c) << RESET << std::endl;
}

void    IntDisplay(std::string text)
{
    long long i = atoll(text.c_str());
    double f = atof(text.c_str());
    std::string c = "";
    if (f >= 32 && f <= 126)
        std::cout << YELLOW << "char: " << GREEN << "'" << static_cast<char>(i) << "'" << RESET << std::endl;
    else
        std::cout << YELLOW << "char: " << RED << "Non displayable" << RESET << std::endl;

    if (i > INT_MAX || i < INT_MIN || (text.length() > 10 && str_count(text, '-') > 1))
        std::cout << YELLOW << "int: " << RED "Impossible" << RESET << std::endl;
    else
        std::cout << YELLOW << "int: " << GREEN << static_cast<int>(i) << RESET << std::endl;

    if (f > __FLT_MAX__)
        c = "+";
    std::cout << YELLOW << "float: " << GREEN << c << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << RESET << std::endl;
    std::cout << YELLOW << "double: " << GREEN << static_cast<double>(f) << RESET << std::endl;
}

void    DoubleDisplay(std::string text)
{
    double f = atof(text.c_str());
    std::string c = "";
    std::string d = "";

    if (f >= 32 && f <= 126)
        std::cout << YELLOW << "char: " << GREEN << "'" << static_cast<char>(f) << "'" << RESET << std::endl;
    else if (isnan(f))
        std::cout << YELLOW << "char: " << RED << "Impossible" << RESET << std::endl;
    else
        std::cout << YELLOW << "char: " << RED << "Non displayable" << RESET << std::endl;

    if (f > INT_MAX || f < INT_MIN || text == "nan" || text == "nanf")
        std::cout << YELLOW << "int: " << RED "Impossible" << RESET << std::endl;
    else
        std::cout << YELLOW << "int: " << GREEN << static_cast<int>(f) << RESET << std::endl;

    if (f > __FLT_MAX__)
        c = "+";
    std::cout << YELLOW << "float: " << GREEN << c << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << RESET << std::endl;

    if (f > __DBL_MAX__)
        d = "+";
    std::cout << YELLOW << "double: " << GREEN << d << static_cast<double>(f) << RESET << std::endl;
}

void    FloatDisplay(std::string text)
{
    double f = atof(text.c_str());
    std::string c = "";

    if (f >= 32 && f <= 126)
        std::cout << YELLOW << "char: " << GREEN << "'" << static_cast<char>(f) << "'" << RESET << std::endl;
    else if (isnanf(f))
        std::cout << YELLOW << "char: " << RED << "Impossible" << RESET << std::endl;
    else
        std::cout << YELLOW << "char: " << RED << "Non displayable" << RESET << std::endl;
    
    if (f > INT_MAX || f < INT_MIN || text == "nan" || text == "nanf")
        std::cout << YELLOW << "int: " << RED "Impossible" << RESET << std::endl;
    else
        std::cout << YELLOW << "int: " << GREEN << static_cast<int>(f) << RESET << std::endl;


    if (f > __FLT_MAX__)
        c = "+";
    std::cout << YELLOW << "float: " << GREEN << c << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << RESET << std::endl;

    std::cout << YELLOW << "double: " << GREEN << static_cast<double>(f) << RESET << std::endl;
    
}

void    ScalarConverter::convert(std::string text)
{ 
    int type = check_type_literal(text);
    if (text == "nan")
    {
        DoubleDisplay("nan");
        return ;
    }   
    else if (text == "nanf")
    {
        FloatDisplay("nanf");
        return ;
    }

    if (type == 0)
        CharDisplay(text);
    else if (type == 1)
        IntDisplay(text);
    else if (type == 2)
        FloatDisplay(text);
    else if (type == 3)
        DoubleDisplay(text);
    else
        DoubleDisplay("nan");
        
} 