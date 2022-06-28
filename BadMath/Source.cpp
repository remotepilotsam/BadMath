//Samuel Bryan
//CIS 1202 800
//June 27th, 2022

#include <iostream>
#include <iomanip>
using namespace std;

float average(int n1, int n2, int n3) //3 numbers from user input
{
	float avg = (n1 + n2 + n3) / 3.0f; //Calculates average of user input
	return avg; //returns the average
}

int main()
{
	float n1 = 0, n2 = 0, n3 = 0; //Initial values prior to user input
	cout << "This program calculates the average of three numbers." << endl; //Describes program
 	cout << "First number: "; cin >> n1; //First input
	cout << "Second number: "; cin >> n2; //Second input
	cout << "Third number: "; cin >> n3; //Third input

	float a = average(n1, n2, n3); //Calls function to calculate average of user input

	cout << setprecision(1) << fixed << "The average is " << a << endl; //Displays average

	system("pause");
	return 0;
}