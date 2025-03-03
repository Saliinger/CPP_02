#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
	static Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &max(const Fixed &a, const Fixed &b);

	// arithmetic operator
	Fixed &operator+=(const Fixed &to_add);
	Fixed &operator-=(const Fixed &to_sub);
	Fixed &operator*=(const Fixed &to_mul);
	Fixed &operator/=(const Fixed &to_div);

	// comparaison operator
	bool operator==(const Fixed &a, const Fixed &b);
	bool operator!=(const Fixed &a, const Fixed &b);
	bool operator<(const Fixed &a, const Fixed &b);
	bool operator>(const Fixed &a, const Fixed &b);
	bool operator<=(const Fixed &a, const Fixed &b);
	bool operator>=(const Fixed &a, const Fixed &b);

	// increment & decrement operator

};

std::ostream &operator<<(std::ostream& out, const Fixed& fixed);

#endif //FIXED_HPP
