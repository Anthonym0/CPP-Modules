#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("DEFAULT", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target, 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor parameter called" << std::endl;
    if (target.empty())
        this->_target = "DEFAULT";
    else
        this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
    std::cout << "RobotomyRequestForm assignement operator called" << std::endl;
    this->_target = rhs._target;
    return (*this);
}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (this->form_signed)
        {
            if (executor.getGrade() <= this->exec_grade)
            {
                std::cout << GREEN << this->_target << " has been robotomized successfully 50%" << RESET << std::endl;
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
        std::cerr << YELLOW << "Robotomy failed" << RESET << std::endl;
        return false;
    }
    catch(const AForm::FormNotSigned& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        std::cerr << YELLOW << "Robotomy failed" << RESET << std::endl;
        return false;
    }
}