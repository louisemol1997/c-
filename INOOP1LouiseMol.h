#include <iostream>
#include <ctime>
#include <string>

using namespace std;
class Lesrooster{
private:
	bool teacherAvailable;
	int roomsAvailable;
	string studentName;
	bool checkWeekend;
	int studentAmount;
	int roomSeats;
	time_t dayTime; //eigenlijk weet ik niet zeker of deze var klopt
	time_t dayDate;

public:
	Lesrooster(); // default
	Lesrooster(bool, int, string, bool, int, int, time_t, time_t);
	~Lesrooster(); //destructor
	void setTAvailable(bool); // volgens mij zet deze de boolean op de achtergrond op aan of uit
	bool getTAvailable(); // En deze returned of de boolean true of false is
	void setRavailable(int);
	int  getRavailable(); // deze checkt hoeveel ruimtes er beschikbaar zijn en geeft een getal terug zonder decimalen
	void setName(string);
	string getName(); // Deze kijkt welke leerlingen er op de klassenlijst staan en returned deze namen 
	void setCheckWeekend(bool);
	bool getCheckWeekend(); // Deze kijkt of het weekend is. Als het zaterdag of zondag is zal er geen les ingeroosterd worden
	void setStuAmount(int); /*op dit moment weet ik eigenlijk niet meer zeker of die voids wel nodig zijn 
							maar ik zag het in de tutorials van Peggy*/
	int getStuAmount();
	void setSeats(int); 
	int getSeats(); // deze bekijkt hoeveel plaatsen er zijn in het beschikbare lokaal en geeft een aantal terug zonder decimalen
	void setDayTime(time_t);
	time_t getDaytime(); // wat ik wil dat deze doet is kijken hoe laat het is en lessen inpland op een geschikte tijd deze geeft de tijd zo aan 01:59:10 
	void setDayDate(time_t);
	time_t getDayDaye(); // Wat ik wil maar wat waarschijnlijk niet gebeurt is dat deze kijkt welke dag het is vandaag en het zo teruggeeft 10/11/1995

}

