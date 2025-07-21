#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << GREEN << "[ DEBUG ]" << std::endl;
    std::cout << GREEN << "Love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << RESET << std::endl;
    return ;
}

void Harl::info( void )
{
    std::cout << CYAN << "[ INFO ]" << std::endl;
    std::cout << CYAN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << RESET << std::endl;
    return ;
}

void Harl::warning( void )
{
    std::cout << ORANGE << "[ WARNING ]" << std::endl;
    std::cout << ORANGE << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << ORANGE << "I've been coming for years whereas you started working here since last month." << RESET << std::endl;
    return ;
}

void Harl::error( void )
{
    std::cout << RED << "[ ERROR ]" << std::endl;
    std::cout << RED << "This is unacceptable ! I want to speak to the manager now." << RESET << std::endl;
    return ;
}

long long string_to_int(std::string text)
{
    long long nb = 0;
    for (size_t i = 0; i < text.length(); i++)
    {
        int ascii = (int)text[i];
        nb = (nb * 100) + ascii;
    }
    return (nb);
}

void    Harl::complain(std::string level)
{
    void    (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};

    int i = 0;
    switch (string_to_int(level))
    {
        case 6869668571:
            i = 0;
            break;
        case 73787079:
            i = 1;
            break;
        case 87658278737871:
            i = 2;
            break;
        case 6982827982:
            i = 3;
            break;
        default:
            std::cout << GREEN << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
            return;
    }

    while (i < 4)
    {
        (this->*ptr[i])(); 
        i++;
    }
}