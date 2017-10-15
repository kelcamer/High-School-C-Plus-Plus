/* Kelsey Cameron
Question Program
9/13/11
Period 1
*/

#include <iostream>
using namespace std;

int main()

{
	int answer = 0;
	cout << "What is the square root of 121??";
	cin >> answer;
	while (answer != 11 && answer != -11)
	{
		cout << "I'm sorry, Please try again";
		cin >> answer;
	}
	cout << "That is CORRECT!!!\n";
	cin >> answer;
	return 0;

}
