#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

class Bureaucrat;

class AForm
{
    protected:
        AForm();
        const std::string name;
        bool form_signed;
        size_t sign_grade;
        size_t exec_grade;
    public:
        AForm(const std::string &name, size_t sign_grade, size_t exec_grade);
        AForm(const AForm&);
        virtual ~AForm();

        AForm& operator=(const AForm&);

        std::string    getName(void) const;
        bool  getSigned();
        size_t getSignGrade();
        size_t getExecGrade();
        void   beSigned(Bureaucrat &bureaucrat);
        virtual bool    execute(Bureaucrat const & executor) const = 0;
    class GradeTooHighException: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("ERROR : Exception AForm: GradeTooHighException");
            }
    };
    class GradeTooLowException: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("ERROR : Exception AForm: GradeTooLowException");
            }
    };
    class BureaucratGradeException: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("ERROR : Exception : The bureaucrat's grade is not enough");
            }
    };
    class FormNotSigned: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("ERROR : Exception : Form not signed");
            }
    };
};

std::ostream& operator<<( std::ostream &o, AForm &i);

#endif