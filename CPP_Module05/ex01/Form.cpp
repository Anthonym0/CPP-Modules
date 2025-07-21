#include "Form.hpp"

Form::Form(): name("DEFAULT"), form_signed(false)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, size_t sign_grade, size_t exec_grade) : name(name), form_signed(false)
{
    std::cout << "Form default constructor called" << std::endl;

    try
    {
        if (sign_grade < 1 || exec_grade < 1)
            throw(Form::GradeTooHighException());
        if (sign_grade > 150 || exec_grade > 150)
            throw(Form::GradeTooLowException());
    }
    catch(const Form::GradeTooHighException& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        if (sign_grade < 1)
        {
            std::cerr << RED << "The sign grade will be " << GREEN << "1" << RESET << std::endl;
            sign_grade = 1;
        }
        if (exec_grade < 1)
        {
            std::cerr << RED << "The exec grade will be " << GREEN << "1" << RESET << std::endl;
            exec_grade = 1;
        }
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        std::cerr << RED << "The grade will be " << GREEN << "150" << RESET << std::endl;
        if (sign_grade > 150)
        {
            std::cerr << RED << "The sign grade will be " << GREEN << "150" << RESET << std::endl;
            sign_grade = 150;
        }
        if (exec_grade > 150)
        {
            std::cerr << RED << "The exec grade will be " << GREEN << "150" << RESET << std::endl;
            exec_grade = 150;
        }
    }
    this->sign_grade = sign_grade;
    this->exec_grade = exec_grade;

}

Form::Form(const Form& rhs)
{
    std::cout << "Form copy constructor called" << std::endl;
    *this = rhs;
}

Form& Form::operator=(const Form& rhs)
{
    std::cout << "Form assignement operator called" << std::endl;
    this->exec_grade = rhs.exec_grade;
    this->sign_grade = rhs.sign_grade;
    this->form_signed = rhs.form_signed;
    return *this;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName(void) const
{
    return this->name;
}

bool Form::getSigned()
{
    return this->form_signed;
}

size_t Form::getExecGrade()
{
    return this->exec_grade;
}

size_t Form::getSignGrade()
{
    return this->sign_grade;
}

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() <= this->sign_grade)
        {
            this->form_signed = true;
            bureaucrat.signForm(true, this->getName());
        }
        else
            throw(Form::GradeTooLowException());
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        bureaucrat.signForm(false, this->getName());
    }
    
}

std::ostream& operator<<( std::ostream &o, Form &i)
{
    bool form_signed = i.getSigned();
    if (form_signed)
        o << YELLOW << i.getName() << ": " << GREEN << "sign grade " << i.getSignGrade() << " exec grade : " << i.getExecGrade() << " Signed : true" << RESET << std::endl;
    else
        o << YELLOW << i.getName() << ": " << GREEN << "sign grade " << i.getSignGrade() << " exec grade : " << i.getExecGrade() << " Signed : " << RED << "false" << RESET << std::endl;
    return (o);
}