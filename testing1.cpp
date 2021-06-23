#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	string firstName, lastName;
	cout << "What is your name?\n";
	cout << "Tell us your first name: ";
	cin >> firstName;
	cout << "\nWhat is your last name: ";
	cin >> lastName;

	cout << "\nHello, " << firstName << " "<<lastName;
	getch();
	return 0;

}
