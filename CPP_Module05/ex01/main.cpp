#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat Jack = Bureaucrat("Jack", 1);
    Form form_1 = Form("", 1, 1);


    std::cout << form_1 << std::endl;
    form_1.beSigned(Jack);
    std::cout << form_1 << std::endl;

    Jack.rank_down();
    std::cout << Jack << std::endl;

    Form form_2 = Form("FORM_2", 1, 1);
    std::cout << form_2 << std::endl;
    Jack.rank_up();
    Jack.rank_up();
    form_2.beSigned(Jack);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}