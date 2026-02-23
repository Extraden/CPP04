#include <iostream>
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
    _type = "Cat";
    std::cout << "Cat is created!\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "Cat copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this;
}


WrongCat::~WrongCat()
{
    std::cout << "Cat is destroyed!\n";
}

void    WrongCat::makeSound() const
{
    std::cout << "Meow!\n";
}