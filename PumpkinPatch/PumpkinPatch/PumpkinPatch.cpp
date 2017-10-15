/*	Kelsey Cameron
Matt Sindon
10/19/11
Description:  To sell various types of pumpkins and other activities
*/

#include <iostream>
#include <iomanip>
using namespace std;
double const SALESTAXPERCENTAGE = .07;
int main(){
	double smallpumpkincost = 4.00, mediumpumpkincost = 6.50, largepumpkincost = 9.75, facepaintingcost = 3.45;
	double corncost = 1.25, tax, total;
	double numofsmall, numofmed, numoflarge, numofpaint, numofcorn;

	cout << "A small pumkin costs $4.00.\nA medium pumpkin costs $6.50.\nA large pumpkin costs $9.75.\nFace Painting costs $3.45.\nA ear of corn costs $1.25.\n";
	cout << "How many small pumpkins are you buying?\n";
	cin >> numofsmall;
	cout << "How many medium pumpkins are you buying?\n";
	cin >> numofmed;
	cout << "How many large pumpkins are you buying?\n";
	cin >> numoflarge;
	cout << "How many people will get their face painted?\n";
	cin >> numofpaint;
	cout << "How many ears of corn are you buying?\n";
	cin >> numofcorn;
	
	total = (numofsmall * smallpumpkincost) + (numofmed * mediumpumpkincost) + (numoflarge * largepumpkincost) + (numofpaint * facepaintingcost) + (corncost * numofcorn);
	tax = SALESTAXPERCENTAGE * total;
	total += tax;

	cout << setw(4) << setprecision(4) << "The total is $" << total << endl;
	system("PAUSE");
	return 0;
}

/* A small pumkin costs $4.00.
A medium pumpkin costs $6.50.
A large pumpkin costs $9.75.
Face Painting costs $3.45.
A ear of corn costs $1.25.
How many small pumpkins are you buying?
2
How many medium pumpkins are you buying?
2
How many large pumpkins are you buying?
2
How many people will get their face painted?
2
How many ears of corn are you buying?
2
The total is $53.39
Press any key to continue . . .*/