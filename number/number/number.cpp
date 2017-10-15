/*	Kelsey Cameron
10/25/11
Period 1
Description:	To state whether the first number entered is greater or less than the second number */
#include <iostream>
using namespace std;

int main(){
	double num1, num2;
	cout << "Please enter two numbers\n";
	cin >> num1;
	cin >> num2;
	if (num1 > num2)
		cout << "The first number is greater.\n";
	else if (num2 > num1) 
		cout << "The second number is greater.\n";

	system("PAUSE");
	return 0;
}
/*
Please enter two numbers
4
10
The second number is greater.
Press any key to continue . . .







*/