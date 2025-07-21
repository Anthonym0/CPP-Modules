#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

void swap(T &a, T &b)
{
    T a_back = a;
    a = b;
    b = a_back;
    return ; 
}

template <typename T>
T min(T &a, T &b)
{
    if (a == b)
        return (b);
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T max(T &a, T &b)
{
    if (a == b)
        return (b);
    if (a > b)
        return (a);
    else
        return (b);
}

#endif