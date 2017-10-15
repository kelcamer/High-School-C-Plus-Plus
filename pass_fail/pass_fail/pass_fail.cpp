/*	Kelsey Cameron
10/25/11
Period 1
Description:	To state whether the first number entered is greater or less than the second number */
#include <iostream>
using namespace std;

int main(){
	double grade;
	cout << "Please enter your grade average.\n";
	cin >> grade;

	if (grade >= 70){
		cout << "CONGRATULATIONS, YOU PASSED!!!\n";

	}
	else {
		cout << "NOOOOOOOOOO YOU FAILED!!!\n";
	}
	system("PAUSE");
	return 0;
}
/*
Please enter your grade average.
95
CONGRATULATIONS, YOU PASSED!!!
Press any key to continue . . .

*/