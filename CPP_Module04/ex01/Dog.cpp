#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->dog_brain = new Brain();
    return ;
}

Dog::Dog(const Dog& rhs)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->dog_brain;
    return ;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog assignement operator called" << std::endl;
    this->type = rhs.type;
    this->dog_brain = new Brain();
    *this->dog_brain = *rhs.dog_brain;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Wooaf Wooaf" << std::endl;
    return ;
}

void    Dog::show_ideas(void) const
{
    this->dog_brain->get_all_ideas();
}

void Dog::set_idea(size_t index, std::string idea) const
{
    if (index < 100 && index >= 0)
    {
        if (!idea.empty())
        {
            this->dog_brain->set_idea_index(index, idea);
        }
    }
}