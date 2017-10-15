/*	Kelsey Cameron
	Period 1
	February 8, 2012
	To create Program 7_10	*/

#include <iostream>
#include <string>

using namespace std;

int main(){

	int i;
	string str;

	cout << "Type in any sequence of characters: ";
	getline(cin, str);

	//cycle through all the elements of the string
	for (i=0; i< str.length(); i++)
		str[i] = toupper(str[i]);

	cout << "The characters just entered, in uppercase, are: "
		 << str << endl;

	cin.ignore();


	system("PAUSE");
	return 0;
}
/*	

Type in any sequence of characters: hello my name is kelsey lauren cameron
The characters just entered, in uppercase, are: HELLO MY NAME IS KELSEY LAUREN C
AMERON






*/