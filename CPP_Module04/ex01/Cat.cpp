#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->cat_brain = new Brain();
    return ;
}

Cat::Cat(const Cat& rhs)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->cat_brain;
    return ;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat assignement operator called" << std::endl;
    this->type = rhs.type;
    this->cat_brain = new Brain();
    *this->cat_brain = *rhs.cat_brain;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Meooww Meooww" << std::endl;
    return ;
}

void    Cat::show_ideas(void) const
{
    this->cat_brain->get_all_ideas();
}

void Cat::set_idea(size_t index, std::string idea) const
{
    if (index < 100 && index >= 0)
    {
        if (!idea.empty())
        {
            this->cat_brain->set_idea_index(index, idea);
        }
    }
}