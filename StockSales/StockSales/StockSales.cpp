/*	Kelsey Cameron
	10/3/11
	Period 1
	Finds the sum of some numbers */

#include <iostream>
using namespace std;
double const commissionrate = 0.06;
int main(){
	double numbersold, priceofsingleshare, grossproceeds, netproceeds, commission;
	cout << "How many stock shares did you sell?\n";
	cin >> numbersold;
	cout << "What is the price of a single share?\n";
	cin >> priceofsingleshare;
	grossproceeds = priceofsingleshare * numbersold;
	commission = grossproceeds * commissionrate;
	netproceeds = grossproceeds - commission;

	cout << "You sold " << numbersold << " at $" << priceofsingleshare << " per share.\n";
	cout << "			Gross Proceeds		:  $		" << grossproceeds << "\n";
	cout << "			Commision (6.00%)	:  $		" << commission << "\n";
	cout << "			Net Proceeds		:  $		" << netproceeds << "\n";
	system ("PAUSE");
	return 0;
}

/*	
How many stock shares did you sell?
100
What is the price of a single share?
10
You sold 100 at $10 per share.
                        Gross Proceeds          :  $            1000
                        Commision (6.00%)       :  $            60
                        Net Proceeds            :  $            940
Press any key to continue . . .
*/
