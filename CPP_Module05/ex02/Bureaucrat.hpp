#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

class AForm;

class Bureaucrat
{
    private:
        Bureaucrat();
        const std::string _name;
        size_t _grade;
    public:
        Bureaucrat(std::string const name, size_t grade);
        Bureaucrat(const Bureaucrat&);
        ~Bureaucrat();

        Bureaucrat& operator=(const Bureaucrat&);
        std::string    getName(void) const;
        size_t         getGrade(void) const;
        void           rank_up();
        void           rank_down();
        void           signForm(bool sign, std::string const name);
        void           executeForm(AForm const & form);
    class GradeTooHighException: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("ERROR : Exception Bureaucrat: GradeTooHighException");
            }
    };
    class GradeTooLowException: public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("ERROR : Exception Bureaucrat: GradeTooLowException");
            }
    };
};

std::ostream& operator<<( std::ostream &o, Bureaucrat const &i);

#endif