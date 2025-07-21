#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc - 1 != 1)
    {
        std::cerr << RED << "Error" << std::endl;
        std::cerr << "Use : ./HarlFilter [ARGUMENT]" << RESET << std::endl;
        return (0);
    }
    Harl harl;

    harl.complain(argv[1]);
}
