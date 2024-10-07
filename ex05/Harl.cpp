#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void){
    std::cout << "I love bacon" << std::endl;
}

void Harl::info(void){
    std::cout << "I hate bacon" << std::endl;
}

void Harl::warning(void){
    std::cout << "the bacon is burnt" << std::endl;
}

void Harl::error(void){
    std::cout << "manager plss" << std::endl;
}

void Harl::complain(std::string level){
    void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++){
        if (levels[i] == level){
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "invalid level" << std::endl;
}