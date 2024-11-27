#pragma once

#include <iostream>
#include <string>
#include <iomanip>

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
        ScalarConverter() = delete;
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
bool isInt(std::string input);
bool isFloat(std::string input);
bool isDouble(std::string input);
bool isChar(std::string input);
void handleDecimalStream();