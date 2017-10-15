/*	Kelsey Cameron
	March 1, 2012
	Period 1	*/


#include <iostream>
#include <cmath>

using namespace std;

static double PI = 3.1415926;

class Circle{
private:
	double radius;
public:
	Circle(double = 0);
	double Area();
	double Circumference();
	void getData();
	void showData(Circle);
	
};


Circle::Circle(double rad){
	rad = radius;
}

double Circle::Area(){
	double area = 0.0;
	area = PI * pow(radius, 2);
	return area;
}
double Circle::Circumference(){
	double circum = 0.0;
	circum = 2 * PI * radius;
	return circum;
}
void Circle::getData(){
	cout << "Please enter the radius of the circle\n";
	cin >> radius;



}
void Circle::showData(Circle cir){
	cout << "The radius is " << radius << "." << endl;
	cout << "The diameter is " << 2 * radius << "." << endl;
	cout << "The area is " << cir.Area() << "." << endl;
	cout << "The circumference is " << cir.Circumference() << "." << endl;
	



}

