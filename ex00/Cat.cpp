#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat is created!\n";
}

Cat::~Cat()
{
    std::cout << "Cat is destroyed!\n";
}

void    Cat::makeSound() const
{
    std::cout << "Meow!\n";
}