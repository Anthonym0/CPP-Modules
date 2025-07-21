#include "AForm.hpp"

AForm::AForm(): name("DEFAULT"), form_signed(false)
{
    std::cout << "AForm default constructor called" << std::endl;
    this->sign_grade = 1;
    this->exec_grade = 150;
}

AForm::AForm(const std::string &name, size_t sign_grade, size_t exec_grade): name(name), form_signed(false)
{
    std::cout << "AForm default constructor called" << std::endl;

    try
    {
        if (sign_grade < 1 || exec_grade < 1)
            throw(AForm::GradeTooHighException());
        if (sign_grade > 150 || exec_grade > 150)
            throw(AForm::GradeTooLowException());
    }
    catch(const AForm::GradeTooHighException& e)
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
    catch(const AForm::GradeTooLowException& e)
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

AForm::AForm(const AForm& rhs)
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = rhs;
}

AForm& AForm::operator=(const AForm& rhs)
{
    std::cout << "AForm assignement operator called" << std::endl;
    this->exec_grade = rhs.exec_grade;
    this->sign_grade = rhs.sign_grade;
    this->form_signed = rhs.form_signed;
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

std::string AForm::getName(void) const
{
    return this->name;
}

bool AForm::getSigned() const
{
    return this->form_signed;
}

size_t AForm::getExecGrade()
{
    return this->exec_grade;
}

size_t AForm::getSignGrade()
{
    return this->sign_grade;
}

void    AForm::beSigned(Bureaucrat &bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() <= this->sign_grade)
        {
            this->form_signed = true;
            bureaucrat.sign_Form(true, this->getName());
        }
        else
            throw(AForm::GradeTooLowException());
    }
    catch(const AForm::GradeTooLowException& e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        bureaucrat.sign_Form(false, this->getName());
    }
    
}
 
bool    AForm::execute(Bureaucrat const & executor) const
{
    (void)executor;
    return (true);
}

std::ostream& operator<<( std::ostream &o, AForm &i)
{
    bool form_signed = i.getSigned();
    if (form_signed)
        o << YELLOW << i.getName() << ": " << GREEN << "sign grade " << i.getSignGrade() << " exec grade : " << i.getExecGrade() << " Signed : true" << RESET << std::endl;
    else
        o << YELLOW << i.getName() << ": " << GREEN << "sign grade " << i.getSignGrade() << " exec grade : " << i.getExecGrade() << " Signed : " << RED << "false" << RESET << std::endl;
    return (o);
}