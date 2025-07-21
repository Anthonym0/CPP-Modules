#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define RESET  "\x1B[0m"

#include <iostream>
#include <iomanip>
#include <climits>

    class ScalarConverter
    {
        private:
            ScalarConverter& operator=(const ScalarConverter&);
            ScalarConverter();
            ScalarConverter(const ScalarConverter&);
            ~ScalarConverter();
        public:
            static void convert(std::string text);
    };

#endif