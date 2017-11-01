#include "Docent.h"
#include <iostream>



void Docent::setAge(int)
{
	std::cout << "" << std::endl;
}

int Docent::getAge()
{
	return 0;
}

void Docent::setName(string)
{
	std::cout << "" << std::endl;
}

string Docent::getName()
{
	return string();
}

void Docent::setFavoriteHobby(string)
{
	favoriteHobby = hobby;
}

string Docent::getFavoriteHobby()
{
	return string();
}

Docent::Docent()
{
	std::cout << "Hobby's: " << std::endl;
}

Docent::~Docent()
{
}

Docent::Docent(string hobby)
{
	favoriteHobby = hobby;


}

Docent::Docent(string)
{
}
