/*	Kelsey Cameron
	Period 1
	January 11, 2011
	Purpose: To make a house	*/

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void top();
void bottom();
void middle();
	
	string space = " ";	
int main(){
	

	for (int number = 0; number <= 55; number ++){
	top();
	middle();
	bottom();

	space += " ";
	Sleep(50);
	}
	
	system("PAUSE");
}
void top(){
	

	cout <<	space + "   /\\     \n";	
	cout << space + "  /  \\    \n"
		 << space + " /    \\   \n"
		 << space + "/   _  \\  \n";
	
		 
	
	
}

void middle(){

	cout << space + "|  | |  |  \n"
		 << space + "|  | |  |  \n";



}
void bottom(){

	cout << space + "---------  \n";


}