/*
Your Name - Date Period
Assignment Name : *
Brief Description of the Assignment
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Define and Assign your variable(s)
	int period; // what period of comp sci are you in?
	char last_name; //the first letter of your last name
	bool what_school; // Do you go to allen high school?
	// void doesn't hold value
	double forty; // what is your forty meter dash time?


	//user queries
	cout << "What period of computer science are you in? (1 integer)";
	cin >> period;

	cout << "What is the first letter of your last name?";
	cin >> last_name;

	cout << "Do you go to allen high school (1) or Not (0) : (1/0) ";
	cin >> what_school;

	cout << "What is your forty meter dash time? (to the nearest hundredth place) : ";
	cin >> forty;



	// After questions print out stored data 
	cout << "Your computer science period is " << period << endl; // ENDL
	cout << "Your first name is " << last_name << '\n'; // different ways of going to the new line
	cout << boolalpha << "It is " << what_school << " that you go to allen high school. \n";
	cout << "Your forty time is : " << forty << '\n';


	// Pause
	pause();
}



	
