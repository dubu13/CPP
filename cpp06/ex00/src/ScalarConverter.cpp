#include "ScalarConverter.hpp"

Type ScalarConverter::inputType(std::string input){

    if (isChar(input))
        return CHAR;
    else if (isInt(input))
        return INT;
    else if (isFloat(input))
        return FLOAT;
    else if (isDouble(input))
        return DOUBLE;
    else
        return INVALID;
}

}

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
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
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
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;

}

void ScalarConverter::floatConverter(std::string input){
    try
    {
        float f = std::stof(input);
        if (input == "+inff" || input == "-inff" || input == "nanf"){
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
        }
        else{
            if (f > 127 || f < 0)
                std::cout << "char: impossible" << std::endl;
            else if (f < 32 || f == 127)
                std::cout << "char: Non displayable" << std::endl;
            else
                std::cout << "char: " << static_cast<char>(f) << std::endl;  
            std::cout << "int: " << static_cast<int>(f) << std::endl;
        }
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
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
        if (input == "+inf" || input == "-inf" || input == "nan"){
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
        }
        else{
        if (d > 127 || d < 0)
            std::cout << "char: impossible" << std::endl;
        else if (d < 32 || d == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(d) << std::endl;
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        }
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
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