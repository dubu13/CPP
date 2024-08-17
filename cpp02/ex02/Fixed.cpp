/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:34:36 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/17 22:58:05 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
}


Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_fixedPointValue = copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->_fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &copy) const
{
	return this->_fixedPointValue > copy._fixedPointValue;
}

bool Fixed::operator<(const Fixed &copy) const
{
	return this->_fixedPointValue < copy._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &copy) const
{
	return this->_fixedPointValue >= copy._fixedPointValue;
}

bool Fixed::operator<=(const Fixed &copy) const
{
	return this->_fixedPointValue <= copy._fixedPointValue;
}

bool Fixed::operator==(const Fixed &copy) const
{
	return this->_fixedPointValue == copy._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &copy) const
{
	return this->_fixedPointValue != copy._fixedPointValue;
}

Fixed Fixed::operator+(const Fixed &copy) const
{
	Fixed newValue;
	newValue._fixedPointValue = this->_fixedPointValue + copy._fixedPointValue;
	return newValue;
}

Fixed Fixed::operator-(const Fixed &copy) const
{
	Fixed newValue;
	newValue._fixedPointValue = this->_fixedPointValue - copy._fixedPointValue;
	return newValue;
}

Fixed Fixed::operator*(const Fixed &copy) const
{
	Fixed newValue;
	newValue._fixedPointValue = (this->_fixedPointValue * copy._fixedPointValue) >> _fractionalBits;
	return newValue;
}

Fixed Fixed::operator/(const Fixed &copy) const
{
	if (copy._fixedPointValue == 0)
		std::cerr << "Division by zero is not allowed." << std::endl;
	Fixed newValue;
	newValue._fixedPointValue = (this->_fixedPointValue << _fractionalBits) / copy._fixedPointValue;
	return newValue;
}

Fixed &Fixed::operator++()
{
	++this->_fixedPointValue;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++this->_fixedPointValue;
	return temp;
}

Fixed &Fixed::operator--()
{
	--this->_fixedPointValue;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--this->_fixedPointValue;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a._fixedPointValue > b._fixedPointValue) ? b : a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a._fixedPointValue > b._fixedPointValue) ? b : a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a._fixedPointValue > b._fixedPointValue) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a._fixedPointValue > b._fixedPointValue) ? a : b;
}
