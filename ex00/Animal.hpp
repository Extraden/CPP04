#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
  public:
    Animal();
    Animal(const Animal& other);
    Animal&  operator=(const Animal& other);
    ~Animal();

  protected:
    std::string _name;
};

#endif
