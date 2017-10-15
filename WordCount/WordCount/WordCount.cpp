/*	Kelsey Cameron
	Period 1
	February 8, 2012
	Word Count	*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
	string str;
	cout << "Please enter a string.\nIf you wish to quit the entire program, please type 1.\nWhen you are done typing your entire string, please type 0.\n";
	cout << "Remember, if you type a space, you must type another word after it.\nDo not type a space before the 0.\n";
	getline(cin, str, '0');
	int count = 0;
	int wordcount = 0;
	for (count = 0; count < str.length(); count++){
		char chara = str[count];
		if (isspace(chara))
		{
			wordcount++;
		}
		if ((chara == '1') || (chara == '1')){

			break;


		}


	}



	wordcount++;
	cout << "There are " << wordcount << " words\n";

	system("PAUSE");
	return 0;
}
/*
Please enter a string.
If you wish to quit the entire program, please type 1.
When you are done typing your entire string, please type 0.
Remember, if you type a space, you must type another word after it.
Do not type a space before the 0.
Right
Now
Mrs.Lazzeri
is
talking
to
the visual
basic side!0
There are 10 words
Press any key to continue . . .




*/