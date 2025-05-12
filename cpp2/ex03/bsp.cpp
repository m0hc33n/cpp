#include "Point.hpp"

float triangleArea(const Point &p1, const Point &p2, const Point &p3) {
    return std::abs(p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
                    p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
                    p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2.0f;
}

bool isPointInTriangle(const Point &p, const Point &p1, const Point &p2, const Point &p3) {
    float A = triangleArea(p1, p2, p3);
    float A1 = triangleArea(p, p2, p3);
    float A2 = triangleArea(p1, p, p3);
    float A3 = triangleArea(p1, p2, p);
    return (A == A1 + A2 + A3);
}
