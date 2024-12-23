#include "BitcoinExchange.hpp"

void BitcoinExchange::parsingDatabase(const std::string databaseFile) {
    std::ifstream file(databaseFile);
    if (!file.is_open())
        throw std::runtime_error("Failed to open database file");
    std::string line;
    std::getline(file, line);

    while (std::getline(file, line)){
        std::istringstream lineStream(line);
        std::string date,value;
       if (std::getline(lineStream, date, ',') && std::getline(lineStream, value)){
            if (!isValidDate(date) || !isValidValue(value) || date.empty() || value.empty())
                throw std::runtime_error("Invalid/empty date or value");
            try{
                double currencey = std::stod(value);
                this->database[date] = currencey;
            }
            catch(const std::invalid_argument &e){
                std::cout << "invalid value" << std::endl;
            }
            catch(const std::out_of_range &e){
                std::cout << "value is out of range" << std::endl;
            }
       }
    }
}

void parsingInputFile(const std::string inputFile) {
    std::ifstream file(inputFile);
    if (!file.is_open())
        throw std::runtime_error("Failed to open input file");

    std::string line;
    std::getline(file, line);

    while (std::getline(file, line)){
        std::istringstream lineStream(line);
        std::string date,value;
       if (std::getline(lineStream, date, '|') && std::getline(lineStream, value)){
            date = date.substr(0, date.find_last_not_of(" \t") + 1);
            date = date.substr(date.find_first_not_of(" \t"));
            value = value.substr(0, value.find_last_not_of(" \t") + 1);
            value = value.substr(value.find_first_not_of(" \t"));
            if (!isValidDate(date) || !isValidValue(value) || date.empty() || value.empty())
                throw std::runtime_error("Invalid/empty date or value");
            // double valueDouble = std::stod(value);
            //call the function to calculate the exchange rate
       }
    }
}
bool isValidDate(const std::string date) {
    int year, month, day;
    char dash1, dash2;

    std::istringstream dateStream(date);
    dateStream >> year >> dash1 >> month >> dash2 >> day;

    if (date.length() != 10 || dateStream.fail() || dash1 != '-' || dash2 != '-')
        return false;

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;
    if (month == 2) {
        bool isLeapyear = (year % 4 == 0 && (year % 100 != 0)) || (year % 400 == 0);
            if (day > 29 || (day > 28 && !isLeapyear))
                return false;
    }
    return true;
}

bool isValidValue(const std::string value) {
    double val;

    std::istringstream valueStream(value);
    valueStream >> val;

    if (valueStream.fail() || val < 0 || val > 1000)
        return false;
    if (!valueStream.eof())
        return false;
    return true;
}