/*	Kelsey Cameron
	Period 1
	January 31, 2012
	Purpose: To create Program 7.4	*/

#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>
#include <vector>
using namespace std;

int main(){
	
	int num = 0;
	cout << "Please type how many names you wish to enter.\n";
	cin >> num;
	vector<string> Name;
	cout << "Please enter your names.\n";
	for (int i = 0; i < num; ++i)
	{
		Name.push_back("");
		cin >> Name[i];
	}
	for (int i = 0; i < num; i++){

		cout << "The name is: " << Name[i] << endl;



	}
	

	system("PAUSE");
	return 0;

}

/*	

*/