/*	Kelsey Cameron
	Period 1
	February 9, 2012
	To create an AWESUMB PALINDROME PROGRAM	*modified version* */

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
	string text, savetext;
	int i;
	string userinput = "no";

	cout << "Do you want to play the PALINDROME GAME? \n(Please say yes! Kelsey LOVES palindromes)" << endl;
	cout << "Just type no at any time to stop playing.\n";
	cin >> userinput;
	while (userinput == "yes" || userinput == "Yes" || userinput == "ya" || userinput == "yes"){

	cout << "Enter the text: ";
	getline(cin, text);
	cin.ignore();
	// Steps 1 and 2: remove all non alphanumeric characters 
	// and then convert all alphanumerics to lowercase
	for (i = 0; i < text.length(); i++)
		if (isalnum(text.at(i))){
			text.at(i) = tolower(text.at(i));

			
		if(isdigit(text.at(i))){

			text.erase(i,1);
			i--;
			
		}
		}
		
		savetext = text; // Step 3:Make a copy of the cleaned up text
		cout << "The cleaned text is " << savetext << endl;
		reverse(text.begin(), text.end()); // Step 4: Reverse the cleaned up text
		
		
		if (text == savetext)// Step 5 Compare forward and reversed texts
			cout << "The entered text is a palindrome.";\
		
		else
			cout << "The entered text is not a palindrome! D: Kelsey is sad!!!";
		cin.ignore();
		
		cout << "Do you want to play again?\n";
		cin >> userinput;

		system("PAUSE");
		return 0;

 


	}

	}






/*	
Do you want to play the PALINDROME GAME?
(Please say yes! Kelsey LOVES palindromes)
Just type no at any time to stop playing.
yes
Enter the text: spool loops
The entered text is a palindrome.Do you want to play again?
Press any key to continue . . .
*/