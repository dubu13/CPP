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

bool isInt(std::string input){
    if (input.front() == '-' || input.front() == '+')
        input.erase(0, 1);
    for (size_t i = 0; i < input.length(); i++){
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}

bool isFloat(std::string input){
    if (input == "+inff" || input == "-inff" || input == "nanf")
        return true;
    else if (input.back() != 'f' || input.find('.') == std::string::npos || input.front() == '.')
        return false;
    input.pop_back();
    input.erase(input.find('.'), 1);
    if (input.front() == '-' || input.front() == '+')
        input.erase(0, 1);
    for (size_t i = 0; i < input.length(); i++){
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}

bool isDouble(std::string input){
    if (input == "+inf" || input == "-inf" || input == "nan")
        return true;
    else if (input.find('.') == std::string::npos || input.back() == '.' || input.front() == '.')
        return false;
    input.pop_back();
    input.erase(input.find('.'), 1);
    if (input.front() == '-' || input.front() == '+')
        input.erase(0, 1);
    for (size_t i = 0; i < input.length(); i++){
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}

bool isChar(std::string input){
    if (input.length() == 1 && isprint(input[0]))
        return true;
    return false;
}

void handleDecimalStream(){
    std::cout << std::fixed << std::setprecision(1);
}