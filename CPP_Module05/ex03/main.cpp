#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat Xavier = Bureaucrat("Xavier", 2);
    Bureaucrat Jack = Bureaucrat("Jack", 1);
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
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }


    Intern Stagiaire;
    AForm* form_created_1 = Stagiaire.makeForm("presidential pardon", "presidential_INTERN");
    AForm* form_created_2 = Stagiaire.makeForm("robotomy request", "robotomy_INTERN");
    AForm* form_created_3 = Stagiaire.makeForm("shrubbery creation", "shrubbery_INTERN");
    AForm* form_not_found = Stagiaire.makeForm("form_not_found", "NotFound_INTERN");

    if (form_not_found)
    {
        delete (form_not_found);
    }

    if (form_created_1)
    {
        form_created_1->beSigned(Jack);
        Jack.executeForm(*form_created_1);
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }
    if (form_created_2)
    {
        form_created_2->beSigned(Jack);
        Jack.executeForm(*form_created_2);
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }
    if (form_created_3)
    {
        form_created_3->beSigned(Jack);
        Jack.executeForm(*form_created_3);
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    if (form_1)
        delete form_1;
    if (form_2)
        delete form_2;
    if (form_3)
        delete form_3;
    if (form_created_1)
        delete form_created_1;
    if (form_created_2)
        delete form_created_2;
    if (form_created_3)
        delete form_created_3;

    return 0;
}