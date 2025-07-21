
#include "easyfind.hpp"

void    test_1()
{
    std::cout << "========== TEST " << GREEN << "1 (vector)" << RESET << " ==========" << std::endl;
    size_t size_tab = 42; 
    std::vector<int> tab;

    std::cout << YELLOW << "Fill int tab..." << std::endl;
    for (size_t i = 0; i < size_tab; i++)
    {
        tab.push_back(i);
    }

    std::cout << YELLOW << "Print tab value" << RESET << std::endl;
    for (size_t i = 0; i < size_tab; i++)
    {
        std::cout << "tab[" << GREEN << i << RESET << "]: " << GREEN << tab[i] << RESET <<  std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Search value : 41" << std::endl;
    try
    {
        easyfind(tab, 41);
    }
    catch(NumNotFound& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    std::cout << "Search value not in tab: -42" << std::endl;
    try
    {
        easyfind(tab, -42);
    }
    catch(NumNotFound& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

void    test_2()
{
    std::cout << "========== TEST " << GREEN << "2 (list)" << RESET << " ==========" << std::endl;
    size_t size_tab = 42; 
    std::list<int> tab;

    std::cout << YELLOW << "Fill int tab..." << std::endl;
    for (size_t i = 0; i < size_tab; i++)
    {
        tab.push_back(i);
    }

    std::cout << YELLOW << "Print tab value" << RESET << std::endl;
    for (size_t i = 0; i < size_tab; i++)
    {
        std::cout << "tab[" << GREEN << i << RESET << "]: " << GREEN << *tab.begin() + i << RESET <<  std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Search value : 34" << std::endl;
    try
    {
        easyfind(tab, 34);
    }
    catch(NumNotFound& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    std::cout << "Search value not in tab: -42" << std::endl;
    try
    {
        easyfind(tab, -42);
    }
    catch(NumNotFound& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
}

int main()
{
    test_1();
    test_2();
}