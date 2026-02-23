#include <iostream>
#include "Animal.hpp"

Animal::Animal() : _type("unknown")
{
  std::cout << "Animal " << _type << " is created\n";
}

Animal::Animal(const Animal& other)
{
  std::cout << "Animal copy constructor called\n";
  *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
  std::cout << "Assignment operator called\n";
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "Animal " << _type << " is destroyed\n";
}
