#include <iostream>
#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "--- Harl's Short Complaints ---" << std::endl;

    std::cout << "\n--- Valid levels ---" << std::endl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    std::cout << "\n--- Invalid levels ---" << std::endl;
    harl.complain("debug");
    harl.complain("information");
    harl.complain("alert");
    harl.complain("critical");
    harl.complain("nonsense");
    harl.complain("");

    return 0;
}
