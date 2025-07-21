#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm: public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm&);
        ~PresidentialPardonForm();

        PresidentialPardonForm& operator=(const PresidentialPardonForm&);

        bool    execute(Bureaucrat const & executor) const;
    
};

#endif