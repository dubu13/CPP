#include "BitcoinExchange.hpp"

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