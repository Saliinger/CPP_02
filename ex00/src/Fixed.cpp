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
Fixed &Fixed::operator=(Fixed &to_copy) {
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
  this->_fixedPoint = raw;
}