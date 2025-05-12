#include "Fixed.hpp"

 Fixed::Fixed() : m_value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &other) {
    *this = other;
}


Fixed::Fixed(const int intValue) : m_value(intValue << m_fractionalBits) {}

Fixed::Fixed(const float floatValue) : m_value(static_cast<int>(roundf(floatValue * (1 << m_fractionalBits)))) {}

Fixed& Fixed::operator=(const Fixed &other) {
    if (this != &other) {
        this->setRawBits(other.getRawBits());
    }
    return *this;
}

void    Fixed::setRawBits(int const raw) { m_value = raw; }
int     Fixed::getRawBits(void) const { return m_value; }
int     Fixed::toInt(void) const { return m_value >> m_fractionalBits; }
float   Fixed::toFloat(void) const { return static_cast<float>(m_value) / (1 << m_fractionalBits); }

// Overload comparison operators
bool Fixed::operator>(const Fixed &other) const { return m_value > other.m_value; }
bool Fixed::operator<(const Fixed &other) const { return m_value < other.m_value; }
bool Fixed::operator>=(const Fixed &other) const { return m_value >= other.m_value; }
bool Fixed::operator<=(const Fixed &other) const { return m_value <= other.m_value; }
bool Fixed::operator==(const Fixed &other) const { return m_value == other.m_value; }
bool Fixed::operator!=(const Fixed &other) const { return m_value != other.m_value; }

// Overload arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const { return Fixed(this->toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed &other) const { return Fixed(this->toFloat() - other.toFloat()); }
Fixed Fixed::operator*(const Fixed &other) const { return Fixed(this->toFloat() * other.toFloat()); }
Fixed Fixed::operator/(const Fixed &other) const { return Fixed(this->toFloat() / other.toFloat()); }

// Overload increment/decrement operators
Fixed& Fixed::operator++() { // Pre-increment
    m_value += 1;
    return *this;
}
Fixed Fixed::operator++(int) { // Post-increment
    Fixed temp = *this;
    ++(*this);
    return temp;
}
Fixed& Fixed::operator--() { // Pre-decrement
    m_value -= 1;
    return *this;
}
Fixed Fixed::operator--(int) { // Post-decrement
    Fixed temp = *this;
    --(*this);
    return temp;
}

// Static member functions for min and max
Fixed& Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }
Fixed& Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }
const Fixed& Fixed::min(const Fixed &a, const Fixed &b) { return (a < b) ? a : b; }
const Fixed& Fixed::max(const Fixed &a, const Fixed &b) { return (a > b) ? a : b; }

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}