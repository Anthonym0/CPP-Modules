#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

class Form
{
    private:
        Form();
        const std::string name;
        bool form_signed;
        size_t sign_grade;
        size_t exec_grade;
    public:
        Form(const std::string name, size_t sign_grade, size_t exec_grade);
        Form(const Form&);
        ~Form();

        Form& operator=(const Form&);

        std::string    getName(void) const;
        bool  getSigned();
        size_t getSignGrade();
        size_t getExecGrade();
        void   beSigned(Bureaucrat &bureaucrat);
    class GradeTooHighException: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("ERROR : Exception Form: GradeTooHighException");
            }
    };
    class GradeTooLowException: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("ERROR : Exception Form: GradeTooLowException");
            }
    };
};

std::ostream& operator<<( std::ostream &o, Form &i);

#endif