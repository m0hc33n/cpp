#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& other);
        ~FragTrap();
        
        FragTrap& operator=(const FragTrap& other);
        
        void highFivesGuys();
        
        // Override attack function
        void attack(const std::string& target);
};
