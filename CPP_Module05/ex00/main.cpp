#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Jack = Bureaucrat("Jack", 1);
    Bureaucrat Mike = Bureaucrat("Mike", 150);

    std::cout << GREEN << "------------ TEST #1 ------------" << RESET << std::endl;
    Jack.rank_down();
    Mike.rank_up();

    std::cout << Mike << std::endl;
    std::cout << Jack << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << GREEN << "------------ TEST #2 ------------" << RESET << std::endl;
    Bureaucrat BipBoup = Bureaucrat("BipBoup", 1);
    
    BipBoup.rank_up();

    std::cout << BipBoup << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "------------ TEST #3 ------------" << RESET << std::endl;
    Bureaucrat Clipy = Bureaucrat("Clipy", 150);
    
    Clipy.rank_down();

    std::cout << Clipy << std::endl;
    return 0;
}