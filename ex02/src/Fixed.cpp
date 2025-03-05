/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:13:00 by anoukan           #+#    #+#             */
/*   Updated: 2025/03/05 16:13:20 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// orthodox cannonical

// constructor
Fixed::Fixed() {
  this->_fixedPoint = 0;
}

// destructor
Fixed::~Fixed() {
}

// copy constructor
Fixed::Fixed(const Fixed &to_copy) {
  this->_fixedPoint = to_copy._fixedPoint;
}

// overload operator =
Fixed &Fixed::operator=(const Fixed &to_copy) {
  if (this != &to_copy)
    _fixedPoint = to_copy._fixedPoint;
  return *this;
}

// other constructor

// int constructor
Fixed::Fixed(const int number) {
    this->_fixedPoint = number << this->_fractionalBits;
}

// float constructor
Fixed::Fixed(const float number) {
	this->_fixedPoint = roundf(number * (1 << this->_fractionalBits));
}

// other operator

// overload operator <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

// arithmetic operator
float Fixed::operator+(const Fixed &to_add) {
	return this->toFloat() + to_add.toFloat();
}

float Fixed::operator-(const Fixed &to_sub) {
	return this->toFloat() - to_sub.toFloat();
}

float Fixed::operator*(const Fixed &to_mul) {
	return this->toFloat() * to_mul.toFloat();
}

float Fixed::operator/(const Fixed &to_div) {
	return this->toFloat() / to_div.toFloat();
}


// comparaison operator
bool Fixed::operator==(const Fixed &to_compare) const {
  return this->toFloat() == to_compare.toFloat();
}

bool Fixed::operator!=(const Fixed &to_compare) const {
  return this->toFloat() != to_compare.toFloat();
}

bool Fixed::operator>=(const Fixed &to_compare) const {
  return this->toFloat() >= to_compare.toFloat();
}

bool Fixed::operator<=(const Fixed &to_compare) const {
  return this->toFloat() <= to_compare.toFloat();
}

bool Fixed::operator<(const Fixed &to_compare) const {
  return this->toFloat() < to_compare.toFloat();
}

bool Fixed::operator>(const Fixed &to_compare) const {
  return this->toFloat() > to_compare.toFloat();
}

// increment & decrement operator
Fixed &Fixed::operator++() {
  this->_fixedPoint++;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed temp = *this;
  ++this->_fixedPoint;
  return temp;
}

Fixed &Fixed::operator--() {
  this->_fixedPoint--;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed temp = *this;
  --this->_fixedPoint;
  return temp;
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

Fixed &Fixed::min(Fixed &a, Fixed &b) {
  if (a.toFloat() <= b.toFloat())
    return a;
  return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
  if (a.toFloat() <= b.toFloat())
    return a;
  return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
  if (a.toFloat() >= b.toFloat())
    return a;
  return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
  if (a.toFloat() >= b.toFloat())
    return a;
  return b;
}


