#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <limits.h>

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

class Span
{
    private:
        std::vector<int> tab;
        unsigned int nb;
    public:
        Span(unsigned int n);
        Span(const Span&);
        ~Span();

        Span& operator=(const Span&);
        class TabIsFull: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("ERROR : Span is full");
                }
        };
        class InvalidNbElement: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("ERROR : The span cannot contain 1 or 0 elements");
                }
        };

        void    addNumber(int nb);
        void    addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
        int     shortestSpan();    
        long long     longestSpan();  
        void    print_tab();  
};

#endif