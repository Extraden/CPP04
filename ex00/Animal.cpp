#include <iostream>
#include "Animal.hpp"

Animal::Animal() : _type("unknown")
{
  std::cout << "Animal " << _type << " is created\n";
}

Animal::Animal(const Animal& other) : _type(other._type)
{
  std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other)
{
  std::cout << "Animal assignment operator called\n";
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "Animal " << _type << " is destroyed\n";
}

const std::string& Animal::getType() const
{
  return (this->_type);
}

void  Animal::makeSound() const
{
  std::cout << "Animal " << this->_type << " makes a sound\n";
}
