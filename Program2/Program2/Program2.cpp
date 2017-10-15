/*	Kelsey Cameron
	December 13, 2011
	Period 1
	Purpose: To calculate the area of various shapes	*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double perimetersquare(double, double);
double areasquare(double, double);
double circumference(double);
double circlearea(double);

int main(){
	string userinput, shape;
	string intro = "This program calculates the area for a user specified geometric\nshape. YOU will be asked to enter a code representing the shape.\nDepending on your choice,  the program will prompt you for\nadditional information necessary to calculate the area.\n\nYou wil be asked if you want to enter more data. Follow the\ndirections provided to either stop the program or continue.\n";

	cout << intro;
		cout << "Do you want to enter more data?\nEnter Y for yes or N for no.\n";
		cin >> userinput;
		
	while (userinput == "y" || userinput == "Y"){
		cout << "  -- VALID SHAPES --  \nEnter S for Square\nEnter C for Circle\nEnter R for Rectangle\n";
		cin >> shape;
		if (shape != "s" || shape != "S" || shape != "R" || shape != "r" || shape != "C" || shape != "c"){
			cout << "Please enter either a S, R, or C!!";
			cin >> shape;
		}
		double length, width, area, perimeter;
		if (shape == "S" || shape == "s"){
			
			cout << "PLEASE ENTER THE LENGTH OF THE SQUARE!!!\n";
			cin >> length;
			cout << "PLEASE ENTER THE WIDTH OF THE SQUARE!!!\n";
			cin >> width;
			perimeter = perimetersquare(length, width);
			area = areasquare(length, width);
			cout << "The perimeter of the square is " << perimeter << "." << endl;
			cout << "The area of the square is " << area << "." << endl;


		}
		else if (shape == "R" || shape == "r"){
			cout << "PLEASE ENTER THE LENGTH OF THE RECTANGLE!!!\n";
			cin >> length;
			cout << "PLEASE ENTER THE WIDTH OF THE RECTANGLE!!!\n";
			cin >> width;
			perimeter = perimetersquare(length, width);
			area = areasquare(length, width);
			cout << "The perimeter of the rectangle is " << perimeter << "." << endl;
			cout << "The area of the rectangle is " << area << "." << endl;




		}
		else if (shape == "C" || shape == "c"){
			double radius, circumference1, area;
			cout << "Please enter the radius!\n";
			cin >> radius;
			circumference1 = circumference(radius);
			area = circlearea(radius);
			cout << "The circumference of the circle is " << circumference1 << "." << endl;
			cout << "The area of the circle is " << area << "." << endl;




		}
		


		cout << "Do you want to enter more data?\nEnter Y for yes or N for no.\n";
		cin >> userinput;
	}








double perimetersquare(double length, double width){
	double perimeter;
	perimeter = 2*(length + width);
	return perimeter;
}
double areasquare(double length, double width){
	double area;
	area = length * width;
	return area;

}
double circumference(double radius){
	double circumference;
	circumference = 2 * 3.14 * radius;
	return circumference;


}
double circlearea(double radius){
	double area;
	area = 3.14*pow(radius, 2);
	return area;

}