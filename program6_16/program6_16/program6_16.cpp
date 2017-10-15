/*	Kelsey Cameron
	Period 1
	1/19/12	*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

// this program generates ten psudorandom numbers
// using C++'s rand function

int main()
{
	const int NUMBERS = 10;
	double randvalue;
	int i;

	srand(time(NULL));

	for (i = 1; i <= NUMBERS; i++)
	{
		randvalue = rand();
		cout << randvalue << endl;


	}
	system("PAUSE");
	return 0;




}
/*	12039
7116
7926
11128
11420
15143
2004
28241
29950
4989
Press any key to continue . . .	*/