#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed
double c(double n)
{
	double c;
	const double PI = 3.14159;
	
	c = 2 * PI * n;
	cout << "Circumference is " << c;
	return c;
}

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
	cout << area << endl;
	double h;
	h = radius;
	
	c(h); // Calculates and display the circumference
	
	return 0;
}
