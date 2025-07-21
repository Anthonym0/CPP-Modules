#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class RobotomyRequestForm: public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm&);
        ~RobotomyRequestForm();

        RobotomyRequestForm& operator=(const RobotomyRequestForm&);

        bool    execute(Bureaucrat const & executor) const;
    
};

#endif