/*	Kelsey Cameron
	Period 1
	November 15, 2011
	To Produce a Table beginning with -10 degrees fahrenheit and ending with 60 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int celcius;
	double fahren;
	while ()
	cout << "Please enter how much celcius you want to convert\n"
		 << "If you wish to end the program, please type in the string quit"
		 << "DEGREES     DEGREES\n"
		 << "CELCIUS     FAHRENHEIT\n"
		 << "-------     ----------\n";
	cin >> celcius;
	cout << setiosflags(ios::showpoint)
		 << setprecision(2);

	
		fahren = (9.0/5.0) * celcius + 32.0;
		cout << setw(4) << celcius
			 << setw(13) << fahren << endl;
		

	system("PAUSE");
	return 0;
}

/*
DEGREES     DEGREES
CELCIUS     FAHRENHEIT
-------     ----------
 -10          14.
   0          32.
  10          50.
  20          68.
  30          86.
  40     1.0e+002
  50     1.2e+002
  60     1.4e+002
Press any key to continue . . .
