#include "newZombie.hpp"
#include "randomChump.hpp"


int main(void)
{
    randomChump("Stack_1");
    Zombie* Heap1 = newZombie("Heap_1");
    Zombie* Heap2 = newZombie("Heap_2");
    Zombie* Heap3 = newZombie("Heap_3");

    if (Heap1)
        Heap1->announce();
    if (Heap2)
        Heap2->announce();
    if (Heap3)
        Heap3->announce();

    delete Heap1;
    delete Heap2;
    delete Heap3;
}