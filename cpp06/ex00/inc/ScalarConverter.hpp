#pragma once

#include <iostream>
#include <string>

//to disable the instantiation set the constructor as private or deleted
enum Type{
        CHAR,
        INT,
        FLOAT,
        DOUBLE,
        INVALID
};
class ScalarConverter
{
    public:
};        ScalarConverter() = delete;
        ScalarConverter(const ScalarConverter &other) = delete;
        ScalarConverter &operator=(const ScalarConverter &other) = delete;
        ~ScalarConverter() = delete;
        static void convert(std::string input);
        static void intConverter(std::string input);
        static void charConverter(std::string input);
        static void floatConverter(std::string input);
        static void doubleConverter(std::string input);
        static Type inputType(std::string input);
};
