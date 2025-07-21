#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    std::cout << "Base destructor called" << std::endl;
}

int random(int max)
{
    srand (time(NULL));
    return (rand() % max);
}

Base* Base::generate(void)
{
    int random_int = random(3);
    Base* class_ptr = NULL;

    if (random_int == 0)
    {
        class_ptr = new A();
    } else if (random_int == 1)
    {
        class_ptr = new B();
    } else if (random_int == 2)
    {
        class_ptr = new C();
    }
    
    return class_ptr;
}

void    Base::identify(Base* p)
{
    if (p)
    {
        if (dynamic_cast<A*>(p))
        {
            std::cout << YELLOW << "P is a : " << GREEN << "A class" << RESET << std::endl;
        } else if (dynamic_cast<B*>(p))
        {
            std::cout << YELLOW << "P is a : " << CYAN << "B class" << RESET << std::endl;
        } else if (dynamic_cast<C*>(p))
        {
            std::cout << YELLOW << "P is a : " << MAGENTA << "C class" << RESET << std::endl;
        }
    }
    else
    {
        std::cout << RED << "Identification error : pointer null" << RESET << std::endl;
    }
}

void    Base::identify(Base &p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << YELLOW << "P is a : " << GREEN << "A class" << RESET << std::endl;
        (void)a;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << YELLOW << "P is a : " << CYAN << "B class" << RESET << std::endl;
        (void)b;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    
    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << YELLOW << "P is a : " << MAGENTA << "C class" << RESET << std::endl;
        (void)c;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}