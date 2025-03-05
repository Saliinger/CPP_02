/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:09:55 by anoukan           #+#    #+#             */
/*   Updated: 2025/03/05 16:11:13 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// orthodox canonical form

// constructor
Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  this->_fixedPoint = 0;
  return ;
}

// destructor
Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
  return ;
}

// copy constructor
Fixed::Fixed(const Fixed &to_copy) {
  std::cout << "Copy constructor called" << std::endl;
  this->_fixedPoint = to_copy._fixedPoint;
  return ;
}

// overload operator =
Fixed &Fixed::operator=(const Fixed &to_copy) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &to_copy)
    _fixedPoint = to_copy._fixedPoint;
  return *this;
}

// functions

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->_fixedPoint = raw;
}