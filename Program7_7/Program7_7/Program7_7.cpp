/*	Kelsey Cameron
	Period 1
	February 1, 2012
	Purpose: To create Program 7_7 Modified once
	By the way Mrs. Lazzeri, this program in the book DOES NOT work		*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str="";
	cout << "Please enter a string.";
	cin >> str;
	int i, numChars;
	int vowelCount = 0;
	
	cout << "The string: " << str << endl;

	numChars = str.length();

	for (i = 0; i < numChars; i++){

		switch (str.at(i)){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
				vowelCount++;
				

		}
	}
				cout << "There are " << str.find("a") << " a s" << endl;
				cout << "There are " << str.find("e") << " e s" << endl;
				cout << "There are " << str.find("i") << " i s" << endl;
				cout << "There are " << str.find("o") << " o s" << endl;
				cout << "There are " << str.find("u") << " u s" << endl;
	cout << "has " << vowelCount << " vowels." << endl;
	



	system("PAUSE");
	return 0;

}

/*	


*/