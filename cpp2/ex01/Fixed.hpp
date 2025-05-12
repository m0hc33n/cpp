#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed &);
        Fixed(const int);
        Fixed(const float);
        ~Fixed();

        Fixed& operator=(const Fixed &);

        int getRawBits(void) const;
        void setRawBits(const int);

        float toFloat(void) const;
        int toInt(void) const;

    private:
        int m_value;
        static const int m_fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream&, const Fixed&);
