#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
    : name(""), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
    *this = other;
}

ClapTrap::ClapTrap(const std::string& name) 
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        this->setName(other.getName());
        this->setHitPoints(other.getHitPoints());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setAttackDamage(other.getAttackDamage());
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target 
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " cannot attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        hitPoints -= amount;
        if (hitPoints < 0) hitPoints = 0;
        std::cout << "ClapTrap " << name << " takes " << amount 
                  << " points of damage! Hit points left: " << hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " is already out of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints > 0 && energyPoints > 0) {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name << " repairs itself for " << amount 
                  << " hit points! Current hit points: " << hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " cannot be repaired!" << std::endl;
    }
}


const std::string&	ClapTrap::getName(void) const { return (this->name); }

int		ClapTrap::getHitPoints(void) const { return (this->hitPoints); }

int		ClapTrap::getEnergyPoints(void) const { return (this->energyPoints); }

int		ClapTrap::getAttackDamage(void) const { return (this->attackDamage); }

void	ClapTrap::setName(const std::string& name) { this->name = name; }

void	ClapTrap::setHitPoints(unsigned int hitPoints) { this->hitPoints = hitPoints; }

void	ClapTrap::setEnergyPoints(unsigned int energyPoints) { this->energyPoints = energyPoints; }

void	ClapTrap::setAttackDamage(unsigned int damage) { this->attackDamage = damage; }