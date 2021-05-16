#include <iostream>
using namespace std;

class Circle
{
    public:
    // The radius of this circle
           double radius;
        // Construct a default circle object
        Circle()
        {
        radius = 1;
        }
    
        // Construct a circle object
        Circle(double newRadius)
        {
        radius = newRadius;
        }
    
        // Return the area of this circle
        double getArea()
        {
        return radius * radius * 3.14159;
        }
    }; // Must place a semicolon here
//This program prompts user to enter circle raduis
//Then the circle area is displayed
double c(double n)
{
	double c;
	const double PI = 3.14159;
	
	c = 2 * PI *n;
	
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
	
	c(h);
	
	return 0;
}
