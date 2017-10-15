//  Kelsey Cameron
// Purpose: To create a class that you can call to use mathematical operations

#include <iostream>
#include <string>
#include "Operation1.h"
using namespace std;
double numc;
class Operation
{

private:
	double num1;
	double num2;

public: 
	Operation(double = 0, double = 0);
	double Add(double, double);
	double Subtract(double, double);
	double Multiply(double, double);
	double Divide(double, double);
	int id;


};


    Operation::Operation(double a, double b){
		num1 = a;
		num2 = b;



	}
	double Operation::Add(double numa, double numb){
		 num1 = numa;
		 num2 = numb;

		 return (num1 + num2);
		
	 }
	double Operation::Subtract(double numa, double numb){
		num1 = numa;
		num2 = numb;

		return (num1 - num2);

		


	}
	double Operation::Multiply(double numa, double numb){

		num1 = numa;
		num2 = numb;

		return (num1*num2);


	}
	double Operation::Divide(double numa, double numb){
		num1 = numa;
		num2 = numb;
		if (num2 != 0){
		return (num1 / num2);
		}
		else if (num2 == 0){
			cout << "Please re-enter a nonzero integer for the denominator.\n";
			cin >> num2;
		return (num1 / num2);

		}
		else{
		return (num1 / num2);
		}
}

	/*
	
	*/