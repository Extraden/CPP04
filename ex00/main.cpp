#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
  const Animal* meta = new Animal();
  const Animal* d = new Dog();
  const Animal* c = new Cat();


  std::cout << d->getType() << " " << std::endl;
  std::cout << c->getType() << " " << std::endl;

  d->makeSound();
  c->makeSound();
  meta->makeSound();

  delete c;
  delete d;
  delete meta;
  return (0);
}
