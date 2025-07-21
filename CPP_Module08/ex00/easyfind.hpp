#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

class NumNotFound: public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("ERROR : Number not found in container.");
        }
};

template<typename T>
void easyfind(T container, int n)
{
    if (std::find(container.begin(), container.end(), n) == container.end())
        throw(NumNotFound());
}



#endif