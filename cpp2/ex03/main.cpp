#include <iostream>
#include <iomanip>
#include <sstream>
#include "Point.hpp"

bool isPointInTriangle(const Point &p, const Point &p1, const Point &p2, const Point &p3);

int main() {
    // Define triangle vertices
    Point p1(0.0f, 0.0f);   // Vertex A
    Point p2(5.0f, 0.0f);   // Vertex B
    Point p3(2.5f, 5.0f);   // Vertex C

    // Define test points
    Point testPoints[] = {
        Point(2.5f, 2.0f), // Inside the triangle
        Point(5.0f, 5.0f), // Outside the triangle
        Point(2.5f, 0.0f), // On the edge of the triangle
        Point(1.0f, 1.0f), // Inside the triangle
        Point(3.0f, 3.0f), // Inside the triangle
        Point(0.0f, 5.0f)  // Outside the triangle
    };

    // Output triangle vertices
    std::cout << "Triangle Vertices:" << std::endl;
    std::cout << "A: (" << p1.getX().toFloat() << ", " << p1.getY().toFloat() << ")" << std::endl;
    std::cout << "B: (" << p2.getX().toFloat() << ", " << p2.getY().toFloat() << ")" << std::endl;
    std::cout << "C: (" << p3.getX().toFloat() << ", " << p3.getY().toFloat() << ")" << std::endl;
    std::cout << std::endl;

    // Output header for test points
    std::cout << std::setw(30) << std::left << "Test Point (X, Y)" 
              << std::setw(20) << "Inside Triangle" << std::endl;
    std::cout << std::string(50, '-') << std::endl;

    // Check each test point
    for (size_t i = 0; i < sizeof(testPoints) / sizeof(testPoints[0]); ++i) {
        const Point& testPoint = testPoints[i];
        bool inside = isPointInTriangle(testPoint, p1, p2, p3);
        
        // Format the output for test points
		std::stringstream ss;
		ss << "(" << std::fixed << std::setprecision(1) 
        << testPoint.getX().toFloat() << ", " 
        << testPoint.getY().toFloat() << ")";

    	std::cout << std::setw(30) << std::left << ss.str()
              << std::setw(20) << (inside ? "Yes" : "No") << std::endl;
    }

    return 0;
}
