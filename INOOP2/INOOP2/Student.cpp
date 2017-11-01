#include "Student.h"
#include <iostream>



void Student::setAge(int)
{
	std::cout << "" << std::endl;
}

int Student::getAge()
{
	return 0;
}

void Student::setName(string)
{
	std::cout << "" << std::endl;
}

string Student::getName()
{
	return string();
}

void Student::setFavoriteColor(string)
{
	favoriteColor = kleur;
}

string Student::getFavoriteColor()
{
	return string();
}

Student::Student()
{
	std::cout << "Favoriete kleur: " << std::endl;
}

Student::~Student()
{
}

Student::Student(string kleur)
{
	favoriteColor = kleur;


}

Student::Student(string)
{
}


