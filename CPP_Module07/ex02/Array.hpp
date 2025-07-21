#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <limits>

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"


template<typename T>
class Array
{
    private:
        T *array;
        unsigned int size_tab;
    public:
        Array<T>();
        Array<T>(unsigned int n);
        Array<T>(Array<T> const &rhs);
        ~Array();

        Array<T>& operator=(Array<T> const &rhs);
        T& operator[](unsigned int i);
        unsigned int size();

        T* getArray();
        class IndexLow: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("ERROR : Your index must be greater than 0");
                }
        };
        class IndexHight: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("ERROR : Your index must not exceed the size of the array");
                }
        };
};


template<typename T>
T& Array<T>::operator[](unsigned int i)
{
    try
    {
        if (i < 0)
            throw (Array<T>::IndexLow());
        if (i >= this->size_tab)
        {
            throw (Array<T>::IndexHight());
        }
    }
    catch(const Array<T>::IndexLow& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        return this->array[0];
    }
    catch(const Array<T>::IndexHight& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        return this->array[0];
    }
    return this->array[i];
}

template<typename T>
Array<T>::Array()
{
    std::cout << "Array default constructor called" << std::endl;
    this->array = new T[1];
    this->size = 1;
}

template<typename T>
Array<T>::~Array()
{
    std::cout << "Array destructor called" << std::endl;
    delete[] this->array;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << "Array constructor parameter called" << std::endl;
    if (n > __UINT32_MAX__ / 2)
    {
        std::cerr << MAGENTA << "Warning : You've set the size too high to avoid any problems, so the array size will be 100000." << std::endl;
        n = 100000;
    }
    this->array = new T[n];
    if (this->array)
    {
        for (unsigned i = 0; i < n; i++)
            this->array[i] = 0;
        this->size_tab = n;
    }
}

template<typename T>
Array<T>::Array(Array<T> const &rhs)
{
    std::cout << "Array copy constructor called" << std::endl;

    this->array =  new T[rhs.size_tab];
    this->size_tab = rhs.size_tab;
}

template<typename T>
T* Array<T>::getArray()
{
    return (this->array);
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const &rhs)
{
    std::cout << "Array assignement operator called" << std::endl;

    this->array = rhs.array;
    this->size_tab = rhs.size_tab;
    return (*this);
}

template<typename T>
unsigned int Array<T>::size()
{
    return (this->size_tab);
}

#endif