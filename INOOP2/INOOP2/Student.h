#pragma once
#include "Persoon.h"
#include <iostream>
#include <string>
class Student : public Persoon
{
private:
	string favoriteColor;
public:

	void setAge(int);
	int getAge();
	void setName(string);
	string getName(); 
	void setFavoriteColor(string);
	string getFavoriteColor();
	
};