/*	Kelsey Cameron
	Period 1
	January 25, 2012	*/


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	double numerator = 0, denominator = 0, quotient = 0;


	try{
	cout << "Please enter a positive integer.\n";
	cin >> numerator;
	cout << "Please enter a NON zero positive integer.\n";
	cin >> denominator;
	
	if (denominator == 0)
		throw denominator;	
	
	}
		catch (double denominator)
		{	
			

			while (denominator == 0){
			cout << "A denominator value of " << denominator << " is invalid.\n";
			cout << "Please REenter a positive NUMERIC numerator.\n";
			cin >> numerator;
			cout << "Please REenter a positive NUMERIC denominator.\n";
			cin >> denominator;
	

			}
			quotient = numerator / denominator;
	cout << "The quotient is " << quotient << "\n";
			system("PAUSE");
			
		
		}
	system("PAUSE");
	return 0;
	


	


}
/*	Please enter a positive integer.
55
Please enter a NON zero positive integer.
0
A denominator value of 0 is invalid.
Please REenter a positive NUMERIC numerator.
23
Please REenter a positive NUMERIC denominator.
0
A denominator value of 0 is invalid.
Please REenter a positive NUMERIC numerator.
987
Please REenter a positive NUMERIC denominator.
6
The quotient is 164.5
Press any key to continue . . .		*/