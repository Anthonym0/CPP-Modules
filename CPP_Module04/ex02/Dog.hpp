#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain* dog_brain;
    public:
        Dog();
        Dog(const Dog&);
        ~Dog();

        Dog& operator=(const Dog&);
        void makeSound(void) const;
        void show_ideas(void) const;
        void set_idea(size_t index, std::string idea) const;
};

#endif