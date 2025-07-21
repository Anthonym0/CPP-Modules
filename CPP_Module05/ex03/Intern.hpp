#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
public:
    Intern();
    Intern(const Intern &);
    ~Intern();

    Intern& operator=(const Intern&);

    AForm* makeForm(std::string name, std::string target);
};

#endif