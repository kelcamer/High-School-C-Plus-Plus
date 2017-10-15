/*	Kelsey Cameron
	Period 1
	February 27, 2012
	To create a Rectangle() class	*/

#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle{

private:
	double length;
	double width;

public:
	Rectangle(double = 0.0, double = 0.0);
	double perimeter();
	double area();
	void getdata();
	void showdata(Rectangle);


};
Rectangle::Rectangle(double lngth, double wdth){

	length = lngth;
	width = wdth;

	}
double Rectangle::perimeter(){

	double perim = 0;
	perim = 2 * (length + width);	
	return perim;

}
double Rectangle::area(){

	double area = 0;
	area = length * width;	
	return area;

}
void Rectangle::getdata(){

	cout << "Please enter the length of the rectangle: " << endl;
	cin >> length;
	cout << "Please enter the width of the rectangle: " << endl;
	cin >> width;
	
	

}
void Rectangle::showdata(Rectangle rect){
	
	cout << "You entered that the length is " << length << "." << endl;
	cout << "You entered that the width is " << width  << "." << endl;
	cout << "The perimeter is " << rect.perimeter() << "." << endl;
	cout << "The area is " << rect.area() << "." << endl;





}
int main(){

	Rectangle rect;
	rect.getdata();
	rect.showdata(rect);




	system("PAUSE");
	return 0;
}


/*	
Please enter the length of the rectangle:
155.7322
Please enter the width of the rectangle:
984.3129
You entered that the length is 155.732.
You entered that the width is 984.313.
The perimeter is 2280.09.
The area is 153289.
Press any key to continue . . .

*/