/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:12:53 by anoukan           #+#    #+#             */
/*   Updated: 2025/03/05 16:12:54 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
  private:
    int _fixedPoint;
    static const int _fractionalBits = 8;
  public:

	// orthodox cannonical
    Fixed();
    Fixed(const Fixed &to_copy);
	Fixed &operator=(const Fixed &to_copy);
    ~Fixed();

    // ex01
	Fixed(const int number);
	Fixed(const float number);

    // functions
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;

	// ex02

	// functions
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

	// arithmetic operator
	float operator+(const Fixed &to_add);
	float operator-(const Fixed &to_sub);
	float operator*(const Fixed &to_mul);
	float operator/(const Fixed &to_div);

	// comparaison operator
	bool operator==(const Fixed &to_compare) const;
	bool operator!=(const Fixed &to_compare) const;
	bool operator>=(const Fixed &to_compare) const;
	bool operator<=(const Fixed &to_compare) const;
	bool operator<(const Fixed &to_compare) const;
	bool operator>(const Fixed &to_compare) const;

	// increment & decrement operator
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);


};

std::ostream &operator<<(std::ostream& out, const Fixed& fixed);

#endif //FIXED_HPP
