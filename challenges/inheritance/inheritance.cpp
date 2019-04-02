#include <iostream>
#include <string>

class Animal
{
public:
	/// This is the function which will be called to reproduce the sound each
	/// animal makes.
	virtual void makeSound() const = 0;

	/// This is our factory. You need to code the missing implementation.
	static Animal* create(const std::string& name);

	/// This function will terminate the class instance.
	static void destroy(Animal* animal)
	{
		delete animal;
	}
};

// Write your classes here


class Dog: public Animal
{
	public:

	void makeSound() const
	{
		std::cout << "woof" << std::endl;
	}
};

class Cat: public Animal
{
	public:

	void makeSound() const
	{
		std::cout << "meow" << std::endl;
	}
};

class Bird: public Animal
{
	public:

	void makeSound() const
	{
		std::cout << "tweet" << std::endl;
	}
};

class Mouse: public Animal
{
	void makeSound() const
	{
		std::cout << "squeek" << std::endl;
	}
};
class Cow: public Animal
{
	public:

	void makeSound() const
	{
		std::cout << "moo" << std::endl;
	}
};

class Frog: public Animal
{
	public:

	void makeSound() const
	{
		std::cout << "croak" << std::endl;
	}
};

class Elephant: public Animal
{
	public:

	void makeSound() const
	{
		std::cout << "toot" << std::endl;
	}
};

class Duck: public Animal
{
	public:

	void makeSound() const
	{
		std::cout << "quack" << std::endl;
	}
};

class Fish: public Animal
{
	public:

	void makeSound() const
	{
		std::cout << "blub" << std::endl;
	}
};

class Seal: public Animal
{
	public:

	void makeSound() const
	{
		std::cout << "ow ow ow" << std::endl;
	}
};

class NotAnAnimal: public Animal
{
	private:
		std::string _name;
	public:
	NotAnAnimal(std::string name)
	: _name(name)
	{}
	void makeSound() const
	{
		std::cout << _name << " is not an animal" << std::endl;
	}
};

// This is the function you need to change in order to instantiate the required
// classes.
Animal* Animal::create(const std::string& name)
{
	Animal *an_animal;
	if(name == "dog")
		an_animal = new Dog;
	else if(name == "cat")
		an_animal = new Cat;
	else if(name == "bird")
		an_animal = new Bird;
	else if(name == "mouse")
		an_animal = new Mouse;
	else if(name == "cow")
		an_animal = new Cow;
	else if(name == "frog")
		an_animal = new Frog;
	else if(name == "elephant")
		an_animal = new Elephant;
	else if(name == "duck")
		an_animal = new Duck;
	else if(name == "fish")
		an_animal = new Fish;
	else if(name == "seal")
		an_animal = new Seal;
	else 
		an_animal = new NotAnAnimal(name);
	return an_animal;
}

void makeSound(const std::string& name)
{
	// Create our instance
	Animal* animal = Animal::create(name);

	animal->makeSound();

	// Destroy our instance
	Animal::destroy(animal);
}

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;

	while(n--)
	{
		std::string animal;

		std::cin.ignore();
		std::cin >> animal;

		makeSound(animal);
	}

	return 0;
}
