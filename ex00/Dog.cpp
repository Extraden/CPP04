#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
  std::cout << "Dog is created!\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
  std::cout << "Dog copy constructor called\n";
}

Dog&  Dog::operator=(const Dog& other)
{
  std::cout << "Dog assignment operator called\n";
  if (this != &other)
    Animal::operator=(other);
  return *this;
}

Dog::~Dog()
{
  std::cout << "Dog is destroyed!\n";
}

void  Dog::makeSound() const
{
  std::cout << "Woof!\n";
}