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
public:
	void getString();	
	void equal();
	void palindrome();
	void convertToInt();
	astring::astring();
	string reverse(string str7);

	
};

astring::astring(){
	




}
void astring::getString(){
	
	
	
	cout << "Please enter a string.\n";
	getline(cin, str1);
	
	
	cout << "Please enter a second string.\n";
	getline(cin, str2);

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
	int main(){		
		astring str;
		str.getString();
		str.equal();
		str.palindrome();
		
	  
		system("PAUSE");
		return 0;
	}