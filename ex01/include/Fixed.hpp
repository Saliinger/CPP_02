#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  private:
    int _fixedPoint;
    static const int _fractionalBits = 8;
  public:
    Fixed();
    Fixed(Fixed &to_copy);
    ~Fixed();
    /* ex01 */
    Fixed(int const raw);
    Fixed(float const raw);
    float toFloat() const;
    int toInt() const;
    /* end */
    Fixed &operator=(Fixed &to_copy);
    int getRawBits() const;
    void setRawBits(int const raw);

};

#endif //FIXED_HPP
