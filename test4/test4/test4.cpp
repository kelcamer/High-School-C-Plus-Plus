#include <iostream>
#include <string>
#include "Operation1.h"
#include "Circle2.h"
#include "grade.h"
#include "numberGame.h"
#include "string.h"
//template <class Operation1> class Add { ... };

using namespace std;

int main(){
	double numc[2], numf;
	Operation nume;
	average grade;
	string userinput;
	string yesno;
	Circle circ;
	cout << "Would you like to start the program?\n";
	cin >> yesno;
	while (yesno == "yes" || yesno == "ya" || yesno == "y" || yesno == "Yes" || yesno == "yea" || yesno == "si" || yesno == "Y" || yesno == "yeah" || yesno == "uh huh" || yesno == "affirmative" || yesno == "YES"){
	
	cout << "Do you want to \nA. Add\nB. Subtract\nC. Multiply\nD. Divide\nE. Find the Circumference and Area of a Circle\nF. Find your Average Grade\nG. Play the number GUESS game!!\nH. Reverse two words, and see if they are PALINDROMES!\nI. Check to see if a string is numeric.";
	cin >> userinput;

	if (userinput == "a" || userinput == "A")
	{
		cout << "Please enter two decimal numbers.\n";
		cin >> numc[0] >> numc[1];
		numf = nume.Add(numc[0], numc[1]);
		cout << "You entered " << numc[0] << "and " << numc[1]<< endl;
		cout << "The result is " << numf << endl;

	}
	if (userinput == "b" || userinput == "B")
	{
		cout << "Please enter two decimal numbers.\n";
		cin >> numc[0] >> numc[1];
		numf = nume.Subtract(numc[0], numc[1]);
		cout << "You entered " << numc[0] << "and " << numc[1]<< endl;
		cout << "The result is " << numf << endl;

	}
	if (userinput == "c" || userinput == "C")
	{
		cout << "Please enter two decimal numbers.\n";
		cin >> numc[0] >> numc[1];
		numf = nume.Multiply(numc[0], numc[1]);
		cout << "You entered " << numc[0] << "and " << numc[1]<< endl;
		cout << "The result is " << numf << endl;

	}
	if (userinput == "d" || userinput == "D")
	{
		cout << "Please enter two decimal numbers.\n";
		cin >> numc[0] >> numc[1];
		numf = nume.Divide(numc[0], numc[1]);
		cout << "You entered " << numc[0] << "and " << numc[1]<< endl;
		cout << "The result is " << numf << endl;

	}
	if (userinput == "e" || userinput == "E"){
		circ.getData();
		circ.Circumference();
		circ.showData(circ);


	}
	if (userinput == "f" || userinput == "F"){
		grade.setVal();
		grade.aver();
		grade.show();


	}
	if (userinput == "g" || userinput == "G"){

		game newgame;
		newgame.userGuess();
		newgame.check();
		newgame.result();
	

	}
	if (userinput == "h" || userinput == "H"){

		astring abc123;
		abc123.getString();
		abc123.equal();
		abc123.palindrome();
		




	}
	if (userinput == "i" || userinput == "I"){
		astring ac;
		ac.numeric();
	}
	cout << "Would you like to execute the program again?\n";
	cin >> yesno;
	}
	system("PAUSE");
	return 0; 
}

/*
Would you like to start the program?
yea
Do you want to
A. Add
B. Subtract
C. Multiply
D. Divide
E. Find the Circumference and Area of a Circle
F. Find your Average Grade
G. Play the number GUESS game!!
H. Reverse two words, and see if they are PALINDROMES!
h
Please enter a string.
hello
Please enter a second string.
racecar
The reverse of the first word entered is: olleh
The reverse of the second word entered is: racecar

Awww D: Kelsey is sad because the first string is NOT a palindrome! :'(



CONGRATULATIONS!  The second string that you entered is a PALINDROME!
KELSEY IS HAPPY!!!!




Would you like to execute the program again?
yea
Do you want to
A. Add
B. Subtract
C. Multiply
D. Divide
E. Find the Circumference and Area of a Circle
F. Find your Average Grade
G. Play the number GUESS game!!
H. Reverse two words, and see if they are PALINDROMES!
g
Guess a number between 1 and 20
14
I am so sorry, but you did not guess the correct number :(
The correct number is 4
Would you like to execute the program again?
yes
Do you want to
A. Add
B. Subtract
C. Multiply
D. Divide
E. Find the Circumference and Area of a Circle
F. Find your Average Grade
G. Play the number GUESS game!!
H. Reverse two words, and see if they are PALINDROMES!
4
Would you like to execute the program again?
yes
Do you want to
A. Add
B. Subtract
C. Multiply
D. Divide
E. Find the Circumference and Area of a Circle
F. Find your Average Grade
G. Play the number GUESS game!!
H. Reverse two words, and see if they are PALINDROMES!
g
Guess a number between 1 and 20
4
I am so sorry, but you did not guess the correct number :(
The correct number is 2
Would you like to execute the program again?
no
Press any key to continue . . .





*/