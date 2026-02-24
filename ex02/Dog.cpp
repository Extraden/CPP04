#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
  std::cout << "Dog is created!\n";
}

Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain))
{
  std::cout << "Dog copy constructor called\n";
}

Dog&  Dog::operator=(const Dog& other)
{
  std::cout << "Dog assignment operator called\n";
  if (this != &other)
  {
    Animal::operator=(other);

    delete _brain;
    _brain = new Brain(*other._brain);
  }
  return *this;
}

Dog::~Dog()
{
  delete _brain;
  std::cout << "Dog is destroyed!\n";
}

void  Dog::makeSound() const
{
  std::cout << "Woof!\n";
}