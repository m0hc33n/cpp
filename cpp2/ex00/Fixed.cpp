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

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        m_value = other.getRawBits();
    }
    return *this;
}

 int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return m_value;
}

void Fixed::setRawBits(int const raw) {
    m_value = raw;
}