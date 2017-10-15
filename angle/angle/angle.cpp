/*	Kelsey Cameron
	Period 1
	11/3/11
	Purpose: To determine what kind of angle an angle is. */
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;


int main(){

	double angle;

	cout << "ENTER AN ANGLE OF DOOM AND I SHALL TELL YOU HOW DOOMFUL YOUR ANGLE IS!!!\n";
	cin >> angle;

	if (angle < 90){
	cout <<"Your angle is NOT VERY DOOMFUL\nROOOOAAAAARRRRR!!!!! IT IS AN ACUTE ANGLE\nTHAT HAS MADE ME VERY ANGRY!!!\n";
	}
	
	if (angle == 90){
	cout <<"Your angle is PARTIALLY DOOMFUL...\nBUT NOT DOOMFUL ENOUGH!!!\nIT IS ONLY A PUNY RIGHT ANGLE!!!\n";
	}
	if (angle > 90){
	cout <<"CONGRATULATIONS, \nYOUR ANGLE IS FINALLY DOOMFUL ENOUGH \nTO BEAT BOWSER ON THE MARIO BROTHERS VIDEO GAME!!! \nIT IS AN OBTUSE ANGLE!!!\n";
	}
	system("PAUSE");
	return 0;

}

/*

ENTER AN ANGLE OF DOOM AND I SHALL TELL YOU HOW DOOMFUL YOUR ANGLE IS!!!
108
CONGRATULATIONS,
YOUR ANGLE IS FINALLY DOOMFUL ENOUGH
TO BEAT BOWSER ON THE MARIO BROTHERS VIDEO GAME!!!
IT IS AN OBTUSE ANGLE!!!
Press any key to continue . . .



*/