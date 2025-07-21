#include <iostream>

template<typename T, typename U, typename F>

void Iter(T array[], U size, F *func)
{
    if (array != NULL && func != NULL)
    {
        for (U i = 0; i < size; i++)
        {
            func(array[i]);
        }
    }
    return ;
}