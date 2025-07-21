#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("DEFAULT", 25, 5)
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(target, 25, 5)
{
    std::cout << "PresidentialPardonForm default constructor parameter called" << std::endl;
    if (target.empty())
        this->_target = "DEFAULT";
    else
        this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    std::cout << "PresidentialPardonForm assignement operator called" << std::endl;
    this->_target = rhs._target;
    return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (this->form_signed)
        {
            if (executor.getGrade() <= this->exec_grade)
            {
                std::cout << GREEN << this->_target << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
                return true;
            }   
            else
                throw (AForm::BureaucratGradeException());
        }
        else
            throw (AForm::FormNotSigned());
    }
    catch(const AForm::BureaucratGradeException& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        return false;
    }
    catch(const AForm::FormNotSigned& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        return false;
    }
}