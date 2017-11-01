#include "Bibliotheek.h"
#include <iostream>

void gaDoorBoekenkast(Bibliotheek* kast)
{
	std::cout << "Kast doorgegaan " << std::endl;
	kast->toon();

	kast->voegToe(" kinderboek ");
	kast->toon();
} 
int main()
{
	Bibliotheek* kast = new Bibliotheek();
	kast->toon();

	kast->voegToe(" volwassenenboek ");
	kast->toon();

	gaDoorBoekenkast(kast);
	kast->toon();

	char c;
	std::cin >> c;
}


