/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:09:50 by anoukan           #+#    #+#             */
/*   Updated: 2025/03/05 16:09:51 by anoukan          ###   ########.fr       */
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
