#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "stdint.h"

    struct Data
    {
        std::string first_name;
        std::string last_name;
        std::string login;
    };

    class Serializer
    {
        private:
            Serializer();
            Serializer(const Serializer&);
            ~Serializer();
        public:

            Serializer& operator=(const Serializer&);
            static Data* deserialize(uintptr_t raw);
            static uintptr_t serialize(Data* ptr);
    };

#endif