#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
    private:
        MutantStack(const MutantStack& rhs)
        {
            (void)rhs;
            std::cout << "MutantStack copy constructor called" << std::endl;
            return ;
        }
        MutantStack& operator=(const MutantStack&rhs)
        {
            (void)rhs;
            std::cout << "MutantStack assignement operator called" << std::endl;
            return *this;
        }
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        MutantStack()
        {
            std::cout << "MutantStack default constructor called" << std::endl;
            return ;
        }
        ~MutantStack()
        {
            std::cout << "MutantStack destructor called" << std::endl;
            return ;
        }
        

        // Iterators
        iterator begin()
        {
            return std::stack<T>::c.begin();
        }
        iterator end()
        {
            return std::stack<T>::c.end();
        }
        iterator rbegin()
        {
            return std::stack<T>::c.rbegin();
        }
        iterator rend()
        {
            return std::stack<T>::c.rend();
        }

        // Const iterators
        const_iterator cbegin()
        {
            return std::stack<T>::c.cbegin();
        }
        const_iterator cend()
        {
            return std::stack<T>::c.cend();
        }

        // Const reverse iterators
        const_reverse_iterator crbegin()
        {
            return std::stack<T>::c.crbegin();
        }
        const_reverse_iterator crend()
        {
            return std::stack<T>::c.crend();
        }
};

#endif