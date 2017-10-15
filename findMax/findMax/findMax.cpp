/*	Kelsey Cameron
	Period 1
	December 7, 2011
	Purpose: To create Program 6.5 **Modified Version	*/


#include <iostream>
using namespace std;

double findMax(double, double); // the function prototype

int main(){
	double firstnum, secnum, max;

	cout << "\nEnter a number: ";
	cin >> firstnum;
	cout << "Great!!!! Please enter a second number: ";
	cin >> secnum;

	max = findMax(firstnum, secnum); // the function is called here

	cout << "\nThe maximum of the two numbers is " << max << endl;
	system ("PAUSE");
	return 0;
}

double findMax(double x, double y)
{					// start of function body
	double maxnum;		// variable declaration
		
	if (x >= y)		// find the max number
		maxnum = x;
	else
		maxnum = y;

	return maxnum;	// Return statement









}



/*	


Enter a number: 1.658956456
Great!!!! Please enter a second number: 1.34

The maximum of the two numbers is 1.65896
Press any key to continue . . .
*/









