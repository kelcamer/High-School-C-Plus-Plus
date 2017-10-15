/*	Kelsey Cameron
	Period 1
	January 31, 2012
	Purpose: To create Program 7.4	*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	string msg;			// declare a string object

	cout << "ENTER A STRING NOW OR BAD THINGS WILL HAPPEN!!!!\n";
	getline(cin, msg);
	cout << "THE STRING THAT SAVED YOUR LIFE IS " << msg << endl;
	cout << "THE LENGTH OF THE STRING THAT SAVED YOUR LIFE IS " << msg.length() << endl;

	system("PAUSE");
	return 0;

}

/*	
ENTER A STRING NOW OR BAD THINGS WILL HAPPEN!!!!
I don't like you very much!
THE STRING THAT SAVED YOUR LIFE IS I don't like you very much!
THE LENGTH OF THE STRING THAT SAVED YOUR LIFE IS 27
Press any key to continue . . .
*/