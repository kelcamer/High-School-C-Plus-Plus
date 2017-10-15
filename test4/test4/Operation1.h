//  Kelsey Cameron
// Purpose: To create a class that you can call to use mathematical operations

#include <iostream>
#include <string>
using namespace std;

class Operation
{

private:
	double num1;
	double num2;
	double num3;
public: 
	Operation::Operation(double = 0.0, double = 0.0, double = 0.0);
	double Add(double, double);
	double Subtract(double, double);
	double Multiply(double, double);
	double Divide(double, double);

};


	Operation::Operation(double a, double b, double c) {

		num1 = a;
		num2 = b;
		num3 = c;

	}
	double Operation::Add(double numa, double numb){
		 num1 = numa;
		 num2 = numb;

		 num3 = num1 + num2;
		 return num3;
	 }
	double Operation::Subtract(double numa, double numb){
		num1 = numa;
		num2 = numb;

		num3= num1 - num2;

		return num3;


	}
	double Operation::Multiply(double numa, double numb){
		num1 = numa;
		num2 = numb;

		num3 = num1 * num2;

		return num3;


	}
	double Operation::Divide(double numa, double numb){
		num1 = numa;
		num2 = numb;
		if (num2 != 0){
		num3 = num1 / num2;
		}
		else if (num2 == 0){
			cout << "Please re-enter a nonzero integer for the denominator";
			cin >> num2;


		}
		return num3;
}