/* Kelsey Cameron
9/22/11
Period 1
Description: Calculate Miles per minute */


#include <iostream>
using namespace std;

int main ()
{
	float miles, minutes, milesperminute;
	cout << "Please enter the number of miles you have ran.\n";
	cin >> miles;
	cout << "Please enter the number of minutes you have ran.\n";
	cin >> minutes;
	milesperminute = miles / minutes;
	cout << "Miles per minute are: " << milesperminute << " miles per minute" << endl;
	cin >> miles;
	return 0;



}


/* Please enter the number of miles you have ran.
56
Please enter the number of minutes you have ran.
32
Miles per minute are: 1.75 miles per minute
*/