#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:
        DiamondTrap();
        DiamondTrap(const std::string&);
        DiamondTrap(const DiamondTrap&);
        ~DiamondTrap();
        
        using ClapTrap::operator=;
        using ScavTrap::attack;
        
        void whoAmI();

    private:
        std::string name; // Shadowing ClapTrap's name
};
