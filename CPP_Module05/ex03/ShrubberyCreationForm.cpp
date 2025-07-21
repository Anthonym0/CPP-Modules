#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("DEFAULT", 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target, 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor parameter called" << std::endl;
    if (target.empty())
        this->_target = "DEFAULT";
    else
        this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
    std::cout << "ShrubberyCreationForm assignement operator called" << std::endl;
    this->_target = rhs._target;
    return (*this);
}

void    make_trees(std::ofstream &ofs, int n)
{
    if (ofs)
    {
        for (int i = 1; i <= n; i++)
        {
            ofs << "       ###" << std::endl;
            ofs << "      #o###" << std::endl;
            ofs << "    #####o###" << std::endl;
            ofs << "   #o###|#/###" << std::endl;
            ofs << "    ####|/#o#" << std::endl;
            ofs << "     # }|{  #" << std::endl;
            ofs << "       }|{" << std::endl;
            ofs << std::endl;
            ofs << std::endl;
            ofs << std::endl;
        }
    }
}
bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (this->form_signed)
        {
            if (executor.getGrade() <= this->exec_grade)
            {
                std::string filename = this->_target;
                filename.append("_shrubbery");
                std::ofstream ofs(filename.c_str());
                if (ofs)
                {
                    make_trees(ofs, 5);
                    return true;
                }
                else
                {
                    perror("ERROR:");
                    return false;
                }
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