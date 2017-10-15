/* Kelsey Cameron
	9/22/11
	Period 1
	Description:  Calculate the area of various shapes.

 */
  
#include <iostream>
#include <cmath>
#include <string>
using namespace std;



int main()
{	


	float base = 0, length = 0, width= 0, radius = 0, height = 0, rect = 0, parallelogram = 0, triangle = 0, cube = 0, cylinder = 0;

	cout << "What is the length of the shape?\n";
	cin >> length;
	cout << "What is the width of the shape?\n";
	cin >> width;
	cout << "What is the height of the shape?\n";
	cin >> height;
	cout << "What is the radius of the shape?(if not applicable, press 0)\n";
	cin >> radius;
	base = length * width;
	rect = base * height;
	parallelogram = base * height;
	triangle = (base * height) / 2; 
	cube = (base * height) * 6;
	cylinder = (radius * radius) * 3.14;

	cout << "Rectangle Area: " << rect << endl;
	cout << "Parallelogram Area: " << parallelogram << endl;
	cout << "Triangle Area: " << triangle << endl;
	cout << "Cube Area: " << cube << endl;
	cout << "Cylinder Area: " << cylinder << endl;
	cin >> radius;
	

	system("PAUSE");
	return 0;
}

/*	What is the length of the shape?
22.776
What is the width of the shape?
29.335
What is the height of the shape?
65.121
What is the radius of the shape?(if not applicable, press 0)
875.3
Rectangle Area: 43509.6
Parallelogram Area: 43509.6
Triangle Area: 21754.8
Cube Area: 261057
Cylinder Area: 2.40571e+006

/*