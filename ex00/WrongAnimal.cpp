#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("unknown")
{
    std::cout << "Wrong animal is created\n";
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{
    std::cout << "Wrong animal " << _type << " is created\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
    std::cout << "Wrong animal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Wrong animal assignment operator called\n";
    if (this != &other)
        this->_type = other._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong animal destroyed\n";
}

const std::string& WrongAnimal::getType() const
{
  return (this->_type);
}

void  WrongAnimal::makeSound() const
{
  std::cout << "Wrong animal makes a sound\n";
}
