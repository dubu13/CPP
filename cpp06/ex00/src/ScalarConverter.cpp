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
        std::cerr << input << " " << e.what() << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}
