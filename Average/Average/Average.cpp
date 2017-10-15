/*	Kelsey Cameron
	9/26/11
	Period 1
	Description:  Calculate the average of a college person's grades.
	*/
#include <iostream>
using namespace std;

int main()
{
	float grade1, grade2, grade3, grade4, grade5, average;
	cout << "Please enter all 5 of your grade averages(1-100)\n";
	cin >> grade1;
	cin >> grade2;
	cin >> grade3;
	cin >> grade4;
	cin >> grade5;
	average =  (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
	cout << "The average is " << average << "%";
	cin >> grade1;
	return 0;
}

/* Please enter all 5 of your grade averages(1-100)
95.6
84.4
75
100
89.9
The average is 88.98% */
