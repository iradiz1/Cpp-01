#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie{
public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    void  announce() const;
    void set_name(std::string name);

private:
    std::string name;

};

Zombie* zombieHorde( int N, std::string name );

#endif