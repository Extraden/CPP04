#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
  const Animal* meta = new Animal();
  const Animal* d = new Dog();
  const Animal* c = new Cat();
  std::cout << d->getType() << " " << std::endl;
  std::cout << c->getType() << " " << std::endl;
  meta->makeSound();
  d->makeSound();
  c->makeSound();
  delete meta;
  delete d;
  delete c;

  std::cout << "---- WRONG TESTS ----" << std::endl;

  const WrongAnimal* wa = new WrongAnimal();
  const WrongAnimal* wc = new WrongCat();

  std::cout << wa->getType() << std::endl;
  std::cout << wc->getType() << std::endl;
  wa->makeSound();
  wc->makeSound();

  delete wc;
  delete wa;
}
