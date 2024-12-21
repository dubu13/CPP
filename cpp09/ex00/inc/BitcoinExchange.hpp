//Computed Value=Quantity (from input)×Exchange Rate (from database)
//If the date from the input file does not exist in the database Use the closest earlier date in the database.
//check if date and value is valid
#pragma once

#include <iostream>
#include <sstream>

bool isValidDate(const std::string date);
bool isValidValue(const std::string value);