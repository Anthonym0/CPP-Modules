#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("DEFAULT")
{
    std::cout << BLUE << "Bureaucrat default constructor called" << RESET << std::endl;
    this->_grade = 1;
    return ;
}

Bureaucrat::Bureaucrat(std::string const name, size_t grade) : _name(name)
{
    std::cout << BLUE << "Bureaucrat default constructor parameter called" << RESET << std::endl;
    try
    {
        if (grade < 1)
        {
            throw(Bureaucrat::GradeTooHighException());
        }
        if (grade > 150)
        {
            throw(Bureaucrat::GradeTooLowException());
        }
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        std::cerr << RED << "The grade will be " << GREEN << "1" << RESET << std::endl;
        grade = 1;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        std::cerr << RED << "The grade will be " << GREEN << "150" << RESET << std::endl;
        grade = 150;
    }
    this->_grade = grade;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs)
{
    std::cout << MAGENTA << "Bureaucrat copy constructor called" << RESET << std::endl;
    *this = rhs;
    return ;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << CYAN << "Bureaucrat destructor called" << RESET << std::endl;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    std::cout << YELLOW << "Bureaucrat operator assignement called" << RESET << std::endl;
    this->_grade = rhs._grade;
    return *this;
}

size_t    Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

std::string Bureaucrat::getName(void) const
{
    return this->_name;
}

void Bureaucrat::rank_up()
{
    size_t old = this->_grade;
    size_t new_grade = this->_grade - 1;
    try
    {
        if (new_grade < 1)
            throw(Bureaucrat::GradeTooHighException());
        else
        {
            this->_grade = new_grade;
            std::cout << GREEN << "Successful rank UP change of " << this->_name << RED << " old : " << old << GREEN << " New : " << this->_grade << RESET << std::endl;
        }
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        std::cerr << RED << "The grade will be " << GREEN << "1" << RESET << std::endl;
        new_grade = 1;
    }
    this->_grade = new_grade;
}

void    Bureaucrat::signForm(bool sign, std::string const name)
{
    if (sign)
    {
        std::cout << GREEN << this->getName() << RESET << " signed " << GREEN << name << RESET << std::endl;
    }
    else
    {
        std::cout << GREEN << this->getName() << RED << " couldn’t sign " << GREEN << name << RED << " because The grade of the bureaucrat is not high enough" << RESET <<std::endl;
    }
}

void Bureaucrat::rank_down()
{
    size_t old = this->_grade;
    size_t new_grade = this->_grade + 1;
    try
    {
        if (new_grade > 150)
            throw(Bureaucrat::GradeTooLowException());
        else
        {
            this->_grade = new_grade;
            std::cout << GREEN << "Successful rank DOWN change of " << this->_name << RED << " old : " << old << GREEN << " New : " << this->_grade << RESET << std::endl;
        }
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        std::cerr << RED << "The grade will be " << GREEN << "150" << RESET << std::endl;
        new_grade = 150;
    }
    this->_grade = new_grade;
}


std::ostream& operator<<( std::ostream &o, Bureaucrat const &i)
{
    o << YELLOW << i.getName() << MAGENTA << ", " << "bureaucrat grade " << GREEN << i.getGrade();
    return (o);
}