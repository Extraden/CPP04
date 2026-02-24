#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat is created!\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat is destroyed!\n";
}

void    Cat::makeSound() const
{
    std::cout << "Meow!\n";
}