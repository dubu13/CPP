#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    // std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
    (void)other;
    std::cout << "ScalarConverter copy constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
    (void)other;
    std::cout << "ScalarConverter copy assignment operator called" << std::endl;
    return *this;
}

ScalarConverter::~ScalarConverter(){
    // std::cout << "ScalarConverter destructor called" << std::endl;
}

// ScalarConverter::inputType(std::string input){

//     if (input.length() == 1 && !isdigit(input[0]))
//         return CHAR;
//     else if (input.find('.') != std::string::npos)
//         return DOUBLE;
//     else if (input.find('f') != std::string::npos)
//         return FLOAT;
//     else
//         return INT;
// }

// void ScalarConverter::converter(std::string input){

// }

void ScalarConverter::intConverter(std::string input){
    try
    {
        int i = std::stoi(input);

        if (i > 127 || i < 0)
            std::cout << "char: impossible" << std::endl;
        else if (i < 32 || i == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(i) << std::endl;
        std::cout << "int: " << static_cast<int>(i) << std::endl;
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "input: " << input << ", " << e.what() << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

void ScalarConverter::charConverter(std::string input){
    char c = input[0];
    if (isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;

}

void ScalarConverter::floatConverter(std::string input){
    try
    {
        float f = std::stof(input);
        if (f > 127 || f < 0)
            std::cout << "char: impossible" << std::endl;
        else if (f < 32 || f == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(f) << std::endl;  
        std::cout << "int: " << static_cast<int>(f) << std::endl;
        std::cout << "float: " << static_cast<float>(f) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "input: " << input << ", " << e.what() << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

void ScalarConverter::doubleConverter(std::string input){
    try
    {
        double d = std::stod(input);
        if (d > 127 || d < 0)
            std::cout << "char: impossible" << std::endl;
        else if (d < 32 || d == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(d) << std::endl;
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "input: " << input << ", " << e.what() << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}