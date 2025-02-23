#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  private:
    int _fixedPoint;
    static const int _fractionalBits = 8;
  public:
  // orthodox canonical form

    Fixed();
    Fixed(const Fixed &to_copy);
    ~Fixed();
    Fixed &operator=(const Fixed &to_copy);

    // functions
    int getRawBits() const;
    void setRawBits(int const raw);

};

#endif //FIXED_HPP
