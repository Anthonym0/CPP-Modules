#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main()
{
    Bureaucrat Xavier = Bureaucrat("Xavier", 150);
    Bureaucrat Jack = Bureaucrat("Jack", 20);
    AForm *form_1 = new PresidentialPardonForm("FORM_1");
    AForm *form_2 = new RobotomyRequestForm("FORM_2");
    AForm *form_3 = new ShrubberyCreationForm("FORM_3");

    if (form_1)
    {
        form_1->beSigned(Xavier);
        Xavier.executeForm(*form_1);

        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    if (form_2)
    {
        form_2->beSigned(Jack);
        Jack.executeForm(*form_2);


        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    if (form_3)
    {
        form_3->beSigned(Jack);
        Jack.executeForm(*form_3);
    }

    if (form_1)
        delete form_1;
    if (form_2)
        delete form_2;
    if (form_3)
        delete form_3;
    return 0;
}