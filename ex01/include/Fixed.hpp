/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:11:24 by anoukan           #+#    #+#             */
/*   Updated: 2025/03/05 16:11:25 by anoukan          ###   ########.fr       */
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

    // ex
	Fixed(const int number);
	Fixed(const float number);
    friend std::ostream &operator<<(std::ostream& out, const Fixed& fixed);

    // functions
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
};

#endif //FIXED_HPP
