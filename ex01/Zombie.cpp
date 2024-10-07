#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie(){
    std::cout << name << " has been destroyd" << std::endl;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name) {
    this->name = name;
}