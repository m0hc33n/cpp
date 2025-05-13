#pragma once

#include <iostream>
#include <string>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(const ClapTrap&);
        ClapTrap(const std::string&);
        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap&);

        void attack(const std::string&);
        void takeDamage(unsigned int);
        void beRepaired(unsigned int);

        const std::string&	getName(void) const;
		int         	getHitPoints(void) const;
		int	            getEnergyPoints(void) const;
        int	            getAttackDamage(void) const;
		void			setName(const std::string&);
		void			setHitPoints(unsigned int);
		void			setEnergyPoints(unsigned int);
		void			setAttackDamage(unsigned int);

    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
};

