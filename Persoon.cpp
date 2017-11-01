#include "Persoon.h"
#include <iostream>



/*void Persoon::getAge()
{
	std::cout << "Age: " << std::endl;
}

void Persoon::getName()
{
	std::cout << "Name: " << std::endl;
}*/

Persoon::Persoon() 
{
	name = "";
	age = 0;

}

Persoon::Persoon(string naam, int leeftijd)
{
	name = naam;
	age = leeftijd;

}

Persoon::Persoon(int, string)
{
}

Persoon::~Persoon()
{}
string Persoon::getName()
{
	return name;
}

void Persoon::setName(string naam)
{
	name = naam;
}

int Persoon::getAge()
{
	return age;
}

void Persoon::setAge(int leeftijd)
{
	age = leeftijd;
}
