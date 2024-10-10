#pragma once

#include "Weapon.hpp"

class HumanA{
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
    void setWeapon(Weapon weapon);

private:
    std::string _name;
    Weapon &_weapon;
};