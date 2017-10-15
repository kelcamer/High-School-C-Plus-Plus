/*	Kelsey Cameron
	Period 1
	November 22, 2011
	To create a speeding ticket program 
	Short Assignment 3*/

#include <iostream>
#include <string>
using namespace std;

double ticketCalculate(double, double);
int calculateDifference(int, int);

int main(){
	int speedlimit, speedofdriver, difference;
	string userinput;
	double ticketcost = 50.0, extrapercent, totalticketcost;
	
	do {

	cout << "What is the speed limit in your current area?\n";
	cin >> speedlimit;
	cout << "How fast were you driving in that area?\n";
	cin >> speedofdriver;

	difference = calculateDifference (speedofdriver, speedlimit);
	
	if (difference <= 10)
		extrapercent = 0.0;
	else if (difference > 10 && difference < 15)
		extrapercent = .05;
	else if (difference >= 15 && difference < 20)
		extrapercent = .1;
	else if (difference >= 20 && difference < 25)
		extrapercent = .15;
	else if (difference >= 25 && difference < 30)
		extrapercent = .2;
	else if (difference >= 30)
		extrapercent = .25;

	totalticketcost = ticketCalculate(ticketcost, extrapercent);

	cout << "The speed limit is " << speedlimit << endl;
	cout << "The speed that you were driving at was " << speedofdriver << "." << endl;
	cout << "The difference between the speed you were driving, \nand the speed limit was " << difference << "." << endl;

	if (difference <= 0)
		cout << "Thank you for not speeding!" << endl << "You have not been charged.\n";
	else
		cout << "Your total amount charged for speeding is " << totalticketcost << " dollars!" << endl;
	
	if (difference <= 10)
		cout << "You got off lucky!!! No extra charge, but I will \nGET YOU NEXT TIME!!!! MUAHAHAHAHAHAHAAAAAAAA!" << endl;
	cout << "Please type Yes if you wish to continue.  If not, type anything else.\n";
	cin >> userinput;
	}
	while ((userinput == "Yes") || (userinput == "yes"));
	system("PAUSE");
	return 0;
}
/*
What is the speed limit in your current area?
30
How fast were you driving in that area?
90
The speed limit is 30
The speed that you were driving at was 90.
The difference between the speed you were driving,
and the speed limit was 60.
Your total amount charged for speeding is 62.5 dollars!
Please type Yes if you wish to continue.  If not, type anything else.
kelsey
Press any key to continue . . .
*/


double ticketCalculate(double ticketcost, double extrapercent){
	double total;
	total = ticketcost + (ticketcost * extrapercent);



	return total;
}
int calculateDifference(int speedofdriver, int speedlimit){
	int difference;
	difference = speedofdriver - speedlimit;
	return difference;


}