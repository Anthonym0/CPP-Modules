#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
       this->ideas[i] = "This is my only idea"; 
    }
    return ;
}

Brain::Brain(const Brain& rhs)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
    return ;
}

Brain& Brain::operator=(const Brain& rhs)
{
    std::cout << "Brain assignement operator called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i].assign(rhs.ideas[i]);
    }
    return *this;
}

void    Brain::get_all_ideas(void)
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << i << ". " << this->ideas[i] << std::endl;
    }
}

void    Brain::set_idea_index(size_t index, std::string idea)
{
    if (index < 100 && index >= 0)
    {
        if (!idea.empty())
        {
            this->ideas[index].assign(idea);
        }
    }
}