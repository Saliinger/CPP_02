#include "../include/Fixed.hpp"

Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  this->_fixedPoint = 0;
  return ;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
  return ;
}

Fixed::Fixed(Fixed &to_copy) {
  std::cout << "Copy constructor called" << std::endl;
  this->_fixedPoint = to_copy._fixedPoint;
  return ;
}

Fixed &Fixed::operator=(Fixed &to_copy) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &to_copy)
    _fixedPoint = to_copy._fixedPoint;
  return *this;
}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) {
  this->_fixedPoint = raw;
}