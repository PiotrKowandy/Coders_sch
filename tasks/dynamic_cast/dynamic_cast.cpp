#include <iostream>
#include <typeinfo>
class Car
{
	public:
	
	Car()
	{
		std::cout<< "Constructor -> Car." <<std::endl;
	}

	virtual	void whichCarIam()
	{
		std::cout<< "I'm car." <<std::endl;
	}

	virtual ~Car()
	{
		std::cout<< "Desctructor -> Car." << std::endl;
	}
};

class Bmw : public Car
{
	public:
	
	Bmw()
	{
		std::cout<< "Constructor -> BMW." <<std::endl;
	}

	void whichCarIam()
	{
		std::cout<< "I'm BMW." << std::endl;
	}

	~Bmw()
	{
		std::cout<< "Destructor -> BMW." <<std::endl;
	}
};


int main()
{

	Car someCar, *ptrToCar;
	ptrToCar = &someCar;
	
	Bmw *ptrToBmw;
	ptrToBmw = new Bmw;

	std::cout << "We're gonna check if ptrToCar could point on objects of Bmw type." << std::endl;

	if ( dynamic_cast<Bmw*> (ptrToCar) )
	{
		std::cout << "ok"<<std::endl;
	}
	else
	{
		std::cout<< "ptrToCar can't point on objects of BMW types." <<std::endl;
	}

	std::cout << "We're gonna check if ptrToBmw could point on object of Car type." << std::endl;

	if (dynamic_cast<Car*> (ptrToBmw) )
	{
		std::cout<<"ptrToCar before dynamic_cast: ";
		std::cout << " type of *ptrToCar: " << typeid(*ptrToCar).name() << " ";
		ptrToCar->whichCarIam();

		std::cout<< "ptrToCar after dynamic_cast: ";
		ptrToCar = dynamic_cast<Car*> (ptrToBmw);
		std::cout << "type of *ptrToCar: " << typeid(*ptrToCar).name() <<" ";
		ptrToCar->whichCarIam();
	}
	else
	{
		std::cout<< "not ok" <<std::endl;
	}

	delete ptrToBmw;

	return 0;
}

/* Output
Constructor -> Car.
Constructor -> Car.
Constructor -> BMW.
ok
Destructor -> BMW.
Desctructor -> Car.
Desctructor -> Car.
*/
