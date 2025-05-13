#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const ScavTrap&);
    ScavTrap(const std::string&);
    ~ScavTrap();
    
    ScavTrap& operator=(const ScavTrap& other);

    void guardGate();
    
    // Override attack function
    void attack(const std::string& target);
};
