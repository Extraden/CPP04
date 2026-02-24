#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat is created!\n";
}

Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
    {
        Animal::operator=(other);

        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat is destroyed!\n";
}

void    Cat::makeSound() const
{
    std::cout << "Meow!\n";
}