#pragma once

#include <iostream>

class Zombie{
public:
    Zombie(std::string name);
    ~Zombie();
    void  announce() const;

private:
    std::string name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);