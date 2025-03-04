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
	this->_fixedPoint = static_cast<int>(number * (1 << this->_fractionalBits));
}

// other operator

// overload operator <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

// arithmetic operator
Fixed &Fixed::operator+(const Fixed &to_add) {
	this->_fixedPoint += to_add._fixedPoint;
  return *this;
}

Fixed &Fixed::operator-(const Fixed &to_sub) {
	this->_fixedPoint -= to_sub._fixedPoint;
  return *this;
}

Fixed &Fixed::operator*(const Fixed &to_mul) {
	this->_fixedPoint *= to_mul._fixedPoint;
  return *this;
}

Fixed &Fixed::operator/(const Fixed &to_div) {
	this->_fixedPoint /= to_div._fixedPoint;
  return *this;
}


// comparaison operator
bool Fixed::operator==(const Fixed &to_compare) const {
  return this->_fixedPoint == to_compare._fixedPoint;
}

bool Fixed::operator!=(const Fixed &to_compare) const {
  return this->_fixedPoint != to_compare._fixedPoint;
}

bool Fixed::operator>=(const Fixed &to_compare) const {
  return this->_fixedPoint >= to_compare._fixedPoint;
}

bool Fixed::operator<=(const Fixed &to_compare) const {
  return this->_fixedPoint <= to_compare._fixedPoint;
}

bool Fixed::operator<(const Fixed &to_compare) const {
  return this->_fixedPoint < to_compare._fixedPoint;
}

bool Fixed::operator>(const Fixed &to_compare) const {
  return this->_fixedPoint > to_compare._fixedPoint;
}

// increment & decrement operator
Fixed &Fixed::operator++() {
  _fixedPoint++;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed temp = *this;
  ++*this;
  return temp;
}

Fixed &Fixed::operator--()  {
  _fixedPoint--;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed temp = *this;
  --*this;
  return temp;
}

// functions

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->_fixedPoint;
}

void Fixed::setRawBits(int raw_bits) {
  this->_fixedPoint = raw_bits;
}

float Fixed::toFloat() const {
	return static_cast<float>(this->_fixedPoint) / (1 << this->_fractionalBits);
}

int Fixed::toInt() const {
	return this->_fixedPoint / (1 << this->_fractionalBits);
}

