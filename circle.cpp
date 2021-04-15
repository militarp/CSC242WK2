#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	double radius;
	double area;
	double PI;

	cout << "Enter radius\n";
	cin >> radius;
	PI = 3.14159;
	area = PI * pow(radius, 2);
	//Add code to read user input and store in variable radius
	cout << "The area of a circle with radius \n";
	cout << area;
	//Calculate the area of the circle
	return 0;
}
