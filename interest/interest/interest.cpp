/*	Kelsey Cameron
10/26/11
Period 1
Description:	To state whether the first number entered is greater or less than the second number */
#include <iostream>
using namespace std;

int main(){
	int nyrs;
	double interestrate1 = 8.5, interestrate2 = 7, endinterestrate;

	cout << "Please enter how many years your money has been in the bank\n";
	cin >> nyrs;

	if (nyrs > 2){
		endinterestrate = interestrate1;
		cout << "The final interest rate is " << endinterestrate << "%" << endl;}
	else {
	endinterestrate = interestrate2;
	cout << "The final interest rate is " << endinterestrate << "%" << endl;}
	system("PAUSE");
	return 0;
}

/*

Please enter how many years your money has been in the bank
2
The final interest rate is 7%
Press any key to continue . . .





*/