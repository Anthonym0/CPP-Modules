#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer default constructor called" << std::endl;
}


Serializer::Serializer(const Serializer& rhs)
{
    (void)rhs;
    std::cout << "Serializer copy constructor called" << std::endl;
}


Serializer::~Serializer()
{
    std::cout << "Serializer destructor called" << std::endl;
}

Serializer& Serializer::operator=(const Serializer& rhs)
{
    (void)rhs;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    if (ptr)
    {
        uintptr_t value = reinterpret_cast<uintptr_t>(ptr);
        return (value);
    }
    else
    {
        return (-42);
    }
}

Data* Serializer::deserialize(uintptr_t raw)
{
    if (raw == (unsigned long)-42)
        return (NULL);
    Data* ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}