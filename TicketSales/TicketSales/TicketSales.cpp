/*	Kelsey Cameron
	November 14, 2011
	Period 1
	Calculates the total price of the amount of 
	tickets sold, and then shows what price you receive. */

#include <iostream>
using namespace std;

int main(){
	double priceofone = 1.75, totalprice;
	int numsold;
	cout << "How many tickets did you sell?\n";
	cin >> numsold;
	totalprice = priceofone * numsold;
	cout << "The total price of all the tickets sold is $" << totalprice << "\n";
	// start of compound statements
	if (numsold >= 250)
		cout << "You are in the top sales catagory,\nso you win a trip for you and your significant other to Hawaii!!!!!!!\n";
	else if (numsold >= 200 && numsold <= 249)
		cout << "You are in the great sales catagory, \nso you win a $1000 gift card!!!!!!\n";
	else if (numsold <= 199 && numsold >= 100)
		cout << "You are in the Pat-On-The-Back category, \nso you win a $500 gift card!!!!!\n";
	else if (numsold >= 25 && numsold <= 99)
		cout << "You are in the Good Job Catagory, \nso you win a $20 gift card!!!!\n";
	else if (numsold < 25)
		cout << "You are in the Need to Work Harder catagory, \nso you recieve a puny wasteless $5 gift card that can only buy \nyou a stupid pack of gum and embarass you in front \nof your coworkers... :(";
	// end of compound statements
	system("PAUSE");
	return 0;

}

/*
How many tickets did you sell?
250
The total price of all the tickets sold is $437.5
You are in the top sales catagory,
so you win a trip for you and your significant other to Hawaii!!!!!!!
Press any key to continue . . .



*/