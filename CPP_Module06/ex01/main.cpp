#include "Serializer.hpp"

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

int main()
{
    Data * ptr = new Data;
    ptr->first_name = "Anthony";
    ptr->last_name = "Granjon";
    ptr->login = "agranjon";

    uintptr_t ptr1 = Serializer::serialize(ptr);

    Data *ptr2 = Serializer::deserialize(ptr1);

    std::cout << YELLOW << "PTR adress : "<< GREEN << ptr << RESET << std::endl;
    std::cout << YELLOW << "First name: " << GREEN << ptr->first_name << std::endl;
    std::cout << YELLOW << "Last name: " << GREEN << ptr->last_name << std::endl;
    std::cout << YELLOW << "Login: " << GREEN << ptr->login << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    if (ptr2)
    {
        std::cout << YELLOW << "PTR 2 adress : "<< GREEN << ptr2 << std::endl;
        std::cout << YELLOW << "First name: " << GREEN << ptr2->first_name << std::endl;
        std::cout << YELLOW << "Last name: " << GREEN << ptr2->last_name << std::endl;
        std::cout << YELLOW << "Login: " << GREEN << ptr2->login << std::endl;
    }

    delete ptr;
}



