// File: Calculate Math
// Description:	Using the Mathematical Operations
// Name: Kelsey Cameron
// Date: September 20, 2011

#include <iostream> 
using namespace std;

int main()
{	
	float num1 = 0, num2 = 0, sum = 0, product = 0, difference = 0, quotient = 0;
	if ((num1 <= 999999999999999) && (num2 <= 999999999999999)) 
	{
	cout << "Please enter the first number\n";
	cin >> num1 && "\n";
	cout << "Please enter the second number\n";
	cin >> num2 && "\n";
	sum = num1 + num2;
	product = num1 * num2;
	quotient = num1 / num2;
	difference = num1 - num2;
	cout << "Sum: " << sum << "\n";
	cout << "Difference: " << difference << "\n";
	cout << "Product: " << product << "\n";
	cout << "Quotient: " << quotient << "\n";
	cin >> num1;
	return 0;
	}
	else
		return 0;

	
}

/*
Please enter the first number
22.7893
Please enter the second number
456.87
Sum: 479.659
Difference: -434.081
Product: 10411.7
Quotient: 0.0498814

*/