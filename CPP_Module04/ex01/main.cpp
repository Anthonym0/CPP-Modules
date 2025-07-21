#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* tab_animal[10];
    for (int i = 0; i < 5; i++)
    {
        tab_animal[i] = new Dog();
    }
    for (int i = 5; i < 10; i++)
    {
        tab_animal[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
    {
        tab_animal[i]->makeSound();
    }
    for (int i = 0; i < 10; i++)
    {
        delete tab_animal[i];
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Dog *a_animal = new Dog();
    Dog *b_animal = new Dog(*a_animal);
    
    std::cout << std::endl;
    a_animal->set_idea(0, "test");
    a_animal->set_idea(1, "meilleur idee");
    a_animal->set_idea(2, "42 idea");
    a_animal->set_idea(3, "je suis le meilleur chien");

    b_animal->set_idea(3, "je suis le meilleur chat");

    std::cout << "Ideas " << a_animal->getType() << " : " << std::endl;
    std::cout << std::endl;
    a_animal->show_ideas();

    delete(a_animal);
    std::cout << std::endl;

    std::cout << "Ideas " << b_animal->getType() << " : " << std::endl;

    b_animal->show_ideas();
    std::cout << std::endl;

    delete(b_animal);
    delete j;
    delete i;
    return 0;
}
