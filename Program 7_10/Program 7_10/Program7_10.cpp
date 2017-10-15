/*	Kelsey Cameron
	Period 1
	February 8, 2012
	To create Program 7_10	*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

	string str="This 123/ is 567 A ?<6245> Test!";
	char nextChar;
	int i;
	int numLetters = 0, numDigits = 0, numOthers = 0;

	cout << "The original string is: " << str
		 << "\nThis string contains " << str.length()
		 << " characters," << " which consist of" << endl;

	// check each character in the string 
	for (i=0; i < str.length(); i++)
	{
		nextChar = str.at(i); // examens the string to test for values

		if (isalpha(nextChar))
			numLetters++;
		else if (isdigit(nextChar))
			numDigits++;
		else
			numOthers++;
	}
	cout << "	" << numLetters << " letters" << endl;
	cout << "	" << numDigits << " digits" << endl;
	cout << "	" << numOthers << " others" << endl;



	system("PAUSE");
	return 0;
}
/*	

The original string is: This 123/ is 567 A ?<6245> Test!
This string contains 32 characters, which consist of
        11 letters
        10 digits
        11 others
Press any key to continue . . .





*/