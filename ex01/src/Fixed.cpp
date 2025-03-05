/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:11:29 by anoukan           #+#    #+#             */
/*   Updated: 2025/03/05 16:13:27 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// orthodox cannonical

// constructor
Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  this->_fixedPoint = 0;
}

// destructor
Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &to_copy) {
  std::cout << "Copy constructor called" << std::endl;
  this->_fixedPoint = to_copy._fixedPoint;
}

// overload operator =
Fixed &Fixed::operator=(const Fixed &to_copy) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &to_copy)
    _fixedPoint = to_copy._fixedPoint;
  return *this;
}

// other constructor

// int constructor
Fixed::Fixed(const int number) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = number << this->_fractionalBits;
}

// float constructor
Fixed::Fixed(const float number) {
    std::cout << "Float constructor called" << std::endl;
	  this->_fixedPoint = roundf(number * (1 << this->_fractionalBits));
}

// other operator

// overload operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

// functions

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->_fixedPoint;
}

void Fixed::setRawBits(int raw_bits) {
  std::cout << "setRawBits member function called" << std::endl;
  this->_fixedPoint = raw_bits;
}

float Fixed::toFloat() const {
	return static_cast<float>(this->_fixedPoint) / (1 << this->_fractionalBits);
}

int Fixed::toInt() const {
	return this->_fixedPoint / (1 << this->_fractionalBits);
}
