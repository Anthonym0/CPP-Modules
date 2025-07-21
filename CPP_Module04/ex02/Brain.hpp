#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain&);
        ~Brain();

        Brain& operator=(const Brain&);
        void    get_all_ideas(void);
        void    set_idea_index(size_t index, std::string idea);
};

#endif