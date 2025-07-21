#include "Span.hpp"

Span::Span(unsigned int n)
{
    std::cout << "Span default constructor called" << std::endl;
    this->nb = n;
}

Span::Span(const Span& rhs)
{
    std::cout << "Span copy constructor called" << std::endl;
    this->nb = rhs.nb;
}

Span::~Span()
{
    std::cout << "Span destructor called" << std::endl;
}

Span& Span::operator=(const Span& rhs)
{
    std::cout << "Span assignement operator called" << std::endl;
    this->nb = rhs.nb;
    return (*this);
}

void    Span::addNumber(int nb)
{
    if (this->tab.size() >= this->nb)
        throw(TabIsFull());
    this->tab.push_back(nb);
}

bool is_sorted(std::vector<int> &tab)
{
    for (std::vector<int>::iterator it_1 = tab.begin(); it_1 < tab.end(); it_1++)
    {
        if (it_1 + 1 != tab.end())
        {
            if (*it_1 > *(it_1 + 1))
                return false;
        }
    }   
    return true;
}

int Span::shortestSpan()
{
    if (this->tab.size() <= 1)
        throw(InvalidNbElement());
    unsigned int shortest = __UINT32_MAX__;

    if (!is_sorted(this->tab))
        std::sort(this->tab.begin(), this->tab.end());
    for (std::vector<int>::iterator it = this->tab.begin(); it < this->tab.end(); it++)
    {
        if (it + 1 != this->tab.end())
        {
            int result = *(it + 1) - *it;
            if ((unsigned int)result < shortest)
                shortest = result;
        }
    }    
    return (shortest);
}

long long Span::longestSpan()
{
    if (this->tab.size() <= 1)
        throw(InvalidNbElement());
    if (!is_sorted(this->tab))
        std::sort(this->tab.begin(), this->tab.end());
    return  ((long long) *(this->tab.end() - 1) - (long long)*this->tab.begin());
}

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{  

    while (it != ite)
    {
        this->addNumber(*it);
        it++;
    }
    if (this->tab.size() <= 1)
        throw(InvalidNbElement());
}

void Span::print_tab()
{
    for (std::vector<int>::iterator it = this->tab.begin(); it < this->tab.end(); it++)
        std::cout << *it << std::endl;
}