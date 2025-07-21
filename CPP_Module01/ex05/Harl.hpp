#ifndef HARLHPP
#define HARLHPP

#include <iostream>

# define RED "\x1B[31m"
# define GREEN  "\x1B[32m"
# define ORANGE  "\x1B[93m"
# define CYAN    "\033[36m"
# define RESET    "\x1B[0m"

class Harl
{
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
};
    

    

#endif