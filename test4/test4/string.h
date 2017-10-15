/*
	Kelsey Cameron
	User-Defined <"String"> class
	April 26, 2012	
*/
#include <iostream>
#include <cmath>
#include <Windows.h>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class astring {
private:
	string str1;
	string str2;
	string str3;
	string str4;
	int numstored;
	boolean truefalse;
public:
	void getString();	
	boolean numeric();
	void equal();
	void palindrome();
	int convertToInt(string);
	astring::astring();
	string reverse(string str7);

	
};

astring::astring(){
	
	



}
void astring::getString(){
	
	
	
	cout << "Please enter a string.\n";
	cin >> str1;
	
	
	cout << "Please enter a second string.\n";
	cin >> str2;

}
void astring::equal(){

	if (str1 == str2){
		cout << "You entered two of the same strings!\n\n\n";
	}



}
string astring::reverse(string str7){
	string test = str7;
	int i = str7.length() - 1;
	int a;
	
	for (a = 0; a < str7.length(); a++){
		
	
		test[a] = str7[i];
		i--;
	
	}
	
	return test;
}
void astring::palindrome(){
	string str1b, str2b;
	str1b = str1;
	str2b = str2;
	str1 = reverse(str1);
	str2 = reverse(str2);
	cout << "The reverse of the first word entered is: "<< str1 << endl;
	cout << "The reverse of the second word entered is: "<< str2 << endl << endl;
	if (str1b == str1){
		cout << "CONGRATULATIONS!  The first string that you entered is a PALINDROME!\nKELSEY IS HAPPY!!!!\n\n\n\n"<< endl;
	}
	else if(str1b != str1) {
		cout << "Awww D: Kelsey is sad because the first string is NOT a palindrome! :'(\n\n\n\n";


	}
	if (str2b == str2){
		cout << "CONGRATULATIONS!  The second string that you entered is a PALINDROME!\nKELSEY IS HAPPY!!!!\n\n\n\n"<< endl;

	}
	else if(str2b != str2) {

		cout << "Awww D: Kelsey is sad because the second string is NOT a palindrome! :'(\n\n\n\n";


	}
}
	int astring::convertToInt(string str3){
		int i;
		cout << "Please enter a string that you would like to convert to an integer." << endl;;
		cin >> str3;
		for (i = 0; i < str3.length(); i++){

			
		}
		
		return numstored;

	}
	boolean astring::numeric(){
		truefalse = true;
		string ab;
		cout << "Please enter a string." << endl;
		cin >> ab;
		int a;
		
		for (a = 0; a < str4.length(); a++){

		if (!((str3[a] == '1') || (str3[a] == '2') || (str3[a] == '3') || (str3[a] == '4') ||  (str3[a] =='5') || (str3[a] =='6') || (str3[a] =='7') || (str3[a] =='8') || (str3[a] =='9') || (str3[a] =='0'))){

			
			truefalse = false;
			}

		
		if (truefalse){

			cout << "The string is numeric." << endl;

		}
		else{
				cout << "The string is not numeric." << endl;

		}
	
		return truefalse;
		
	}
	}