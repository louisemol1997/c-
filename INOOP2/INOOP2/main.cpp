#include <iostream>
#include "Docent.h"
#include "Student.h"
#include "Persoon.h"
using namespace std;

/*void ageGetter(Persoon persoon)
{
	persoon.getAge();
}

void nameGetter(Persoon persoon)
{
	persoon.getName();
}*/



/*Ik heb geen idee hoe dit verder moet*/
int main()
{

	string name;
	int age;
	string favoriteColor;
	string favoriteHobby;

	cout << "What's your age?  \n";
	cin >> age;
	cout << "What's your name?  \n";
	cin >> name;
	
	Persoon persoon1(age,name);
	Student persoon2(age, name); //ik snap niet wat hier fout gaat 
	Docent persoon3 (age, name);

	cout << "You filled in:  \n";
	cout << "Your age: " << persoon1.getAge();
	cout << "\n Your name: " << persoon1.getName() << endl << endl;

	/*Persoon persoon1 = Persoon();
	Student persoon2 = Student();
	Docent persoon3 = Docent();

	persoon1.getAge();
	persoon2.getAge();
	persoon3.getAge();

	persoon1.getName();
	persoon2.getName();
	persoon3.getName(); */

	char c;
	std::cin >> c;
	return 0;
}