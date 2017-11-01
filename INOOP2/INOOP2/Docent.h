#pragma once
#include "Persoon.h"
#include <iostream>
class Docent : public Persoon
{
private:
	string favoriteHobby;
public:

	void setAge(int);
	int getAge();
	void setName(string);
	string getName();
	void setFavoriteHobby(string);
	string getFavoriteHobby();



};

