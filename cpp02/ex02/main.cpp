/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:34:21 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/17 22:36:21 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	// Fixed a;
	// Fixed const b(10);
    // Fixed const c(42.42f);
    // Fixed const d(b);

    // std::cout << "a = " << a << std::endl;          // Should print 0
    // std::cout << "b = " << b << std::endl;          // Should print 10
    // std::cout << "c = " << c << std::endl;          // Should print 42.4219 (or close)
    // std::cout << "d = " << d << std::endl;          // Should print 10 (copy of b)

    // std::cout << "a.toInt() = " << a.toInt() << std::endl;  // Should print 0
    // std::cout << "b.toInt() = " << b.toInt() << std::endl;  // Should print 10
    // std::cout << "c.toInt() = " << c.toInt() << std::endl;  // Should print 42

    // std::cout << "a.toFloat() = " << a.toFloat() << std::endl;  // Should print 0.0
    // std::cout << "b.toFloat() = " << b.toFloat() << std::endl;  // Should print 10.0
    // std::cout << "c.toFloat() = " << c.toFloat() << std::endl;  // Should print 42.4219 (or close)

    // // Test comparison operators
    // std::cout << "b > c: " << (b > c) << std::endl;            // Should print 0 (false)
    // std::cout << "b < c: " << (b < c) << std::endl;            // Should print 1 (true)
    // std::cout << "b >= d: " << (b >= d) << std::endl;          // Should print 1 (true)
    // std::cout << "b <= d: " << (b <= d) << std::endl;          // Should print 1 (true)
    // std::cout << "b == d: " << (b == d) << std::endl;          // Should print 1 (true)
    // std::cout << "b != c: " << (b != c) << std::endl;          // Should print 1 (true)

    // // Test arithmetic operators
    // Fixed e = b + c;
    // Fixed f = c - b;
    // Fixed g = b * c;
    // Fixed h = c / b;
	// Fixed z = c / a;

    // std::cout << "b + c = " << e << std::endl;     // Should print 52.4219 (or close)
    // std::cout << "c - b = " << f << std::endl;     // Should print 32.4219 (or close)
    // std::cout << "b * c = " << g << std::endl;     // Should print 424.219 (or close)
    // std::cout << "c / b = " << h << std::endl;     // Should print 4.24219 (or close)
	// std::cout << "c / a = " << z << std::endl;     // error: division by zero

    // // Test increment/decrement operators
    // Fixed i;

    // std::cout << "i = " << i << std::endl;         // Should print 0
    // std::cout << "++i = " << ++i << std::endl;     // Should print 0.00390625
    // std::cout << "i = " << i << std::endl;         // Should print 0.00390625
    // std::cout << "i++ = " << i++ << std::endl;     // Should print 0.00390625
    // std::cout << "i = " << i << std::endl;         // Should print 0.0078125

    // std::cout << "--i = " << --i << std::endl;     // Should print 0.00390625
    // std::cout << "i = " << i << std::endl;         // Should print 0.00390625
    // std::cout << "i-- = " << i-- << std::endl;     // Should print 0.00390625
    // std::cout << "i = " << i << std::endl;         // Should print 0

    // // Test min/max functions
    // std::cout << "Fixed::min(b, c) = " << Fixed::min(b, c) << std::endl;   // Should print 10
    // std::cout << "Fixed::max(b, c) = " << Fixed::max(b, c) << std::endl;   // Should print 42.4219 (or close)

    // // Test const versions of min/max
    // std::cout << "Fixed::min(b, d) = " << Fixed::min(b, d) << std::endl;   // Should print 10
    // std::cout << "Fixed::max(b, d) = " << Fixed::max(b, d) << std::endl;  // Should print 10
	return 0;
}