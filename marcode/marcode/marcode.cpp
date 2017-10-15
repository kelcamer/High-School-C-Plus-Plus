/*	Kelsey Cameron
10/25/11
Period 1
Description:	To state whether the first number entered is greater or less than the second number */
#include <iostream>
using namespace std;

int main(){
	char marcode;

	cout << "Please enter a marital code: \n";
	cin >> marcode;

	if (marcode == 'M' || marcode == 'm')
		cout << "Individual is married\n";
	else if (marcode == 'S' || marcode == 's')
		cout << "Individual is single\n";
	else if (marcode == 'D' || marcode == 'd')
		cout << "Individual is divorced\n";
	else if (marcode == 'W' || marcode == 'w')
		cout << "Individual is widowed.\n";
	else
		cout << "An invalid code was entered.\n";

	cout << "Thanks for participating in this stupid waste-of-time survey!! :)\n";

	system("PAUSE");
	return 0;
}
/*
Please enter a marital code:
s
Individual is single
Thanks for participating in this stupid waste-of-time survey!! :)
Press any key to continue . . .



*/