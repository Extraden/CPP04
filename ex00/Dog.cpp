#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog is created!\n";
}

Dog::~Dog()
{
  std::cout << "Dog is destroyed!\n";
}
