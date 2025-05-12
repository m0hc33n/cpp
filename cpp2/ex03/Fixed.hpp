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

        // Overload comparison operators
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        // Overload arithmetic operators
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        // Overload increment/decrement operators
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

         // Static member functions for min and max
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);

    private:
        int m_value;
        static const int m_fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream&, const Fixed&);
