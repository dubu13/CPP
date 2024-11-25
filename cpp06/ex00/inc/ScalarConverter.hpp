#pragma once

#include <iostream>
#include <string>

//to disable the instantiation set the constructor as private or deleted
class ScalarConverter
{
    // private:
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();
        void intConverter(std::string input);
};