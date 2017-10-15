/*	Kelsey Cameron
	Period 1
	November 17, 2011
	Purpose: To create a nested loop example	*/

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	double testgrade, improvedgrade = 100, numofpossiblecredit;
	cout << "If you got less than a hundred percent, you have the oppurtunity to do extra credit.\n";
	cout << "Each extra credit assignment is worth 5 points,\nand you may complete each assignment, until you have earned 25 points.  \nYou may not go past 100%.\n";
	cout << "What was your initial test grade?\n";
	cin >> testgrade;
	
	for ( ; testgrade > 0 && testgrade < 100;)
	{
	while (testgrade != 100)
	{
	numofpossiblecredit = (improvedgrade - testgrade) / 5;
	
	
		
	do
	{
	
		double possibleamountofpointsearned;
		possibleamountofpointsearned =  improvedgrade - testgrade;
		cout << "You are allowed to complete a maximum of 5 extra credit assignments." << endl;
		cout << "You can only complete " << numofpossiblecredit << " assignments." << endl;
		cout << "If you complete all of these assignments,\nyou will have earned " << possibleamountofpointsearned << "\n" << " points added to your original test grade." << endl;
		if (testgrade <= 75)
		cout << "Because you are allowed to earn a maximum of 25 points in extra credit, \nthe highest grade you can get is " << 25 + testgrade << endl;
		else if (testgrade > 75)
		cout << "Because you are allowed to earn a maximum of 25 points in extra credit, \nthe highest grade you can get is ONE HUNDRED PERCENT!!" << endl;
		
		break;}

	while (improvedgrade != 100);
	break;
	}
	break;
	}
	if (testgrade > 100)
		cout << "CONGRATULATIONS, you got a HUNDRED PERCENT, \non your FIRST TRY!! You don't need any extra credit.\n";
	system("PAUSE");
	return 0;
}