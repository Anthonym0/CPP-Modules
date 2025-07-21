#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

# define RED "\x1B[31m"
# define GREEN  "\x1B[32m"
# define ORANGE  "\x1B[93m"
# define RESET    "\x1B[0m"

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();

        void    announce( void );
        std::string get_name( void );
        void        set_name( std::string );
};

#endif

