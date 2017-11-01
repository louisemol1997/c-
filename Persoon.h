#pragma once
using namespace std;
#include <string>
#include <iostream>
class Persoon
{
private:
	int age;
	string name;

public:

	Persoon();
	Persoon(string naam, int leeftijd);
	Persoon(int, string);
	~Persoon();
	void setAge(int);
	int getAge();
	void setName(string);
	string getName();
	
};

