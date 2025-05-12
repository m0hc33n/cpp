#include "Fixed.hpp"

 Fixed::Fixed() : m_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}


Fixed::Fixed(const int intValue) : m_value(intValue << m_fractionalBits) {
        std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue) : m_value(static_cast<int>(roundf(floatValue * (1 << m_fractionalBits)))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->setRawBits(other.getRawBits());
    }
    return *this;
}

 int Fixed::getRawBits(void) const {
    return m_value;
}

void Fixed::setRawBits(int const raw) {
    m_value = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(m_value) / (1 << m_fractionalBits);
}

int Fixed::toInt(void) const {
    return m_value >> m_fractionalBits;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}