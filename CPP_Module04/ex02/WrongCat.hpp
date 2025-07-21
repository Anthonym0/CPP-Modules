#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    private:
    public:
        WrongCat();
        WrongCat(const WrongCat&);
        ~WrongCat();

        WrongCat& operator=(const WrongCat&);
        void makeSound(void) const;
};

#endif