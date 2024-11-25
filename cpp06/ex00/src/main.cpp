#include <ScalarConverter.hpp>

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cout << "Usage: ./convert <input>" << std::endl;
        return 1;
    }
    ScalarConverter converter;
    // converter.intConverter(argv[1]);
    // converter.charConverter(argv[1]);
    // converter.floatConverter(argv[1]);
    converter.doubleConverter(argv[1]);
    return 0;
}