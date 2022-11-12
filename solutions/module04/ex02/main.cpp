#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
// const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
delete i;
j->makeSound();
delete j;
// meta->makeSound();
// delete meta;
//------------------WrongAnimal------------------
std::cout<<"------------------WrongAnimal------------------"<<std::endl;
const WrongAnimal* meta2 = new WrongAnimal();
const WrongAnimal* i2 = new WrongCat();

std::cout <<" type: "<<i2->getType() << " " << std::endl;
i2->makeSound(); //will output the WongAnimal sound!
delete i2;
meta2->makeSound();//will also output the WongAnimal sound!
delete meta2;

std::cout<<"------------------EX01------------------"<<std::endl;
const Animal *animals[6] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat()};

for (int i = 0; i < 6; i++){
	animals[i]->makeSound();
}
for (int i = 0; i < 6; i++){
	delete animals[i];
}

return 0;
}
