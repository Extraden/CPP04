#include <iostream>
#include "Animal.hpp"

Animal::Animal() : _name("default")
{
  std::cout << "Animal " << _name << " is created\n";
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
    this->_name = other._name;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "Animal " << _name << " is destroyed\n";
}
