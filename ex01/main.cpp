#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

static void deepCopyTests()
{
    std::cout << "---- DEEP COPY TESTS ----\n";

    {
        std::cout << "[Dog]\n";
        Dog* d1 = new Dog();
        Dog* d2 = new Dog(*d1);
        Dog* d3 = new Dog();
        *d3 = *d1;

        delete d1;
        delete d2;
        delete d3;
    }

    {
        std::cout << "[Cat]\n";
        Cat* c1 = new Cat();
        Cat* c2 = new Cat(*c1);
        Cat* c3 = new Cat();
        *c3 = *c1;

        delete c1;
        delete c2;
        delete c3;
    }
}

int main()
{
    const int N = 10;
    Animal* arr[N];

    std::cout << "---- ARRAY TEST ----\n";

    for (int i = 0; i < N / 2; ++i)
        arr[i] = new Dog();
    for (int i = N / 2; i < N; ++i)
        arr[i] = new Cat();

    for (int i = 0; i < N; ++i)
        arr[i]->makeSound();

    for (int i = 0; i < N; ++i)
        delete arr[i];

    deepCopyTests();

    return 0;
}