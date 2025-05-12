#pragma once

#include "Fixed.hpp"

class Point {
    public:
        Point(void);
		Point(const Point&);
		Point(const float, const float);
		~Point();

		Point&	operator=(const Point&);

		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
    private:
        const Fixed	m_x;
		const Fixed	m_y;
};
