#include <iostream>

class Animal
{
	
	public:

	int weight;

	Animal()
	{
		std::cout<<"Constructor for Animal has been initialized." << std::endl;
	}	

	virtual void giveVoice()
	//void giveVoice()
	{
		std::cout<< "Animal sound (not specified)." << std::endl;
	}

	virtual ~Animal()
	{
		std::cout<< "Desctructor for Animal has been initialized." << std::endl;
	}
};


class Dog : public Animal
{
	public:

	int legs;

	Dog()
	{
		std::cout<< "Constructor for Dog has been initialized." << std::endl;
	}

	void giveVoice()
	{
		std::cout<< "I'm a dog: Howl howl .... wrr...." << std::endl;
	}

	~Dog()
	{
		std::cout<< "Desctructor for Dog has been initialized." << std::endl;
	}

};


class Fish : public Animal
{
	public:

	bool water;

	Fish()
	{
		std::cout<< "Constructor for Fish has been initialized." << std::endl;
	}

	void giveVoice()
	{
		std::cout<< "I'm a fish, i don't have a voice." << std::endl;
	}

	~Fish()
	{
		std::cout<< "Destructor for Fish has been initialized." <<std::endl;
	}
};


int main()
{

	Animal someAnimal;
	Dog someDog;
	Fish someFish;

	someAnimal.giveVoice();
	someDog.giveVoice();
	someFish.giveVoice();

	std::cout<< std::endl << "Pointers: " <<std::endl;

	Animal* ptrAnimal;
	ptrAnimal = &someAnimal;
	ptrAnimal->giveVoice();

	ptrAnimal = &someDog;
	ptrAnimal->giveVoice();

	ptrAnimal = &someFish;
	ptrAnimal->giveVoice();

	return 0;
}


/* Results with virtual function giveVoice():
Constructor for Animal has been initialized.
Constructor for Animal has been initialized.
Constructor for Dog has been initialized.
Constructor for Animal has been initialized.
Constructor for Fish has been initialized.
Animal sound (not specified).
I'm a dog: Howl howl .... wrr....
I'm a fish, i don't have a voice.

Pointers: 
Animal sound (not specified).
I'm a dog: Howl howl .... wrr....
I'm a fish, i don't have a voice.
Destructor for Fish has been initialized.
Desctructor for Animal has been initialized.
Desctructor for Dog has been initialized.
Desctructor for Animal has been initialized.
Desctructor for Animal has been initialized.
*/


/* Results without virtual function giveVoice():
Constructor for Animal has been initialized.
Constructor for Animal has been initialized.
Constructor for Dog has been initialized.
Constructor for Animal has been initialized.
Constructor for Fish has been initialized.
Animal sound (not specified).
I'm a dog: Howl howl .... wrr....
I'm a fish, i don't have a voice.

Pointers: 
Animal sound (not specified).
Animal sound (not specified).
Animal sound (not specified).
Destructor for Fish has been initialized.
Desctructor for Animal has been initialized.
Desctructor for Dog has been initialized.
Desctructor for Animal has been initialized.
Desctructor for Animal has been initialized.
*/
