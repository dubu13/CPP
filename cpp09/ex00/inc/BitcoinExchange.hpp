#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <map>

class BitcoinExchange{
    private:
        std::map<std::string, double> database;
        void parsingDatabase(const std::string databaseFile);
        void exchangeRate(const std::string date, const double value);
        void parsingInputFile(const std::string inputFile);
    public:
        BitcoinExchange() = default;
        BitcoinExchange(const BitcoinExchange &other) = default;
        BitcoinExchange &operator=(const BitcoinExchange &other) = default;
        ~BitcoinExchange() = default;

        void btc(const std::string inputFile);
};

bool isValidDate(const std::string date);
std::string ft_trim(std::string str);