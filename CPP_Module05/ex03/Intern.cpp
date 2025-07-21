#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& rhs)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = rhs;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& rhs)
{
    std::cout << "Intern operator assignement called" << std::endl;
    (void)rhs;
    return (*this);
}

AForm*    PresidentForm(std::string name)
{
    AForm* form = new PresidentialPardonForm(name);
    return (form);
}

AForm*    RobotomyForm(std::string name)
{
    AForm* form = new RobotomyRequestForm(name);
    return (form);
}

AForm*    ShrubberyForm(std::string name)
{
    AForm* form = new ShrubberyCreationForm(name);
    return (form);
}

long long string_to_int(std::string text)
{
    long long nb = 0;
    for (size_t i = 0; i < text.length(); i++)
    {
        int ascii = (int)text[i];
        nb = (nb * 100) + ascii;
    }
    return (nb);
}

AForm*    Intern::makeForm(std::string name, std::string target)
{
    AForm*    (*ptr[3])(std::string name) = {PresidentForm, RobotomyForm, ShrubberyForm};
    std::string forms_names[3] = {"presidential pardon","robotomy request","shrubbery creation"};

    size_t choise = 0;
    switch (string_to_int(name))
    {
        case -468624384340070518: // Presidential
            choise = 0;
            break;
        case 6066162351949234928: // Robotomy
            choise = 1;
            break;
        case -300056286150440102: // Shrubbery
            choise = 2;
            break;
        default:
            std::cerr << RED << "ERROR: " << "The " << GREEN << name << RED << " form does not correspond to an existing form model." << RESET << std::endl;
            return(NULL);
    }

    size_t i = 0;
    while (i < 4)
    {
        if (name == forms_names[i])
        {
            std::cout << YELLOW << "Intern creates " << GREEN << name << RESET << std::endl;
            return ((ptr[choise])(target)); 
        }
        i++;
    }
    return (NULL);

}