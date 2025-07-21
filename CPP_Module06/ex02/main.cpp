#include "Base.hpp"

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

int main()
{
    Base* base = new Base;
    Base* class_ptr;


    std::cout << RED << "======== GENERATION RANDOM ========" << RESET << std::endl;
    class_ptr = base->generate();
    
    Base* class_ptr_ref = base->generate();
    Base& class_reference = *class_ptr_ref;

    std::cout << RED << "======== IDENTIFICATION TYPE ( By pointer )========" << RESET << std::endl;
    base->identify(class_ptr);
    base->identify(NULL);

    std::cout << RED << "======== IDENTIFICATION TYPE ( By reference )========" << RESET << std::endl;
    base->identify(class_reference);


    std::cout << RED << "======== FREE ========" << RESET << std::endl;

    delete class_ptr;
    delete base;
    delete class_ptr_ref;
    return 0;
}