#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain* cat_brain;
    public:
        Cat();
        Cat(const Cat&);
        ~Cat();

        Cat& operator=(const Cat&);
        void makeSound(void) const;
        void show_ideas(void) const;
        void set_idea(size_t index, std::string idea) const;
};

#endif