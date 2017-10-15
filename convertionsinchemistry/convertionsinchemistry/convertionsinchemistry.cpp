/*	Kelsey Cameron
	Date: December 5, 2011
	Purpose: To create an application to let the user choose 
	which conversion he or she wants to execute.
*/

#include <iostream>
#include <string>
#include <math.h>
#include <Windows.h>
using namespace std;

int main(){
	int userinput;
	double concentrationH, concentrationOH, pH, pOH;
	cout << "Be sure to remember when you are typing powers \nto type it in this format: base number: 1.78, power: -6.\n";
	cout << "This just means that your number is 1.78 x 10 ^ (-6).\nThanks and enjoy!\n\n\n\n";
	Sleep(10000);
	cout << "Type the number 1 if you wish to take the concentration" 
		 << "\nof an [H+] ion, and convert it to a pH value.\n\n"
		 << "Type the number 2 if you wish to take the ph value\n"
		 << "of [H+], and convert it to it's concentration.\n\n"
		 << "Type the number 3 if you wish to take the concentration\n"
		 << "of the [OH-] ion, and convert it to a pOH value.\n\n"
		 << "Type the number 4 if you wish to take the pOH value\n"
		 << "of [OH-], and convert it to it's concentration.\n\n"
		 << "Type exit if you do not want to convert.\n\n\n";
		 cin >> userinput;
	while(userinput == 1 || userinput == 2 || userinput == 3 || userinput == 4){
		double Hbase, Hpower;
		if (userinput == 1){
		
		cout << "Please enter the base number for concentration of the [H+] ion.\n";
		cin >> Hbase;
		cout << "Please enter the power associated with the [H+] ion.\n(If not applicable, type 0)" << endl; 
		cin >> Hpower;
		Hpower = pow(10,Hpower);
		concentrationH = Hpower * Hbase;
		
		cout << "The concentration of H is " << concentrationH << "." << endl;

		pH = log10(concentrationH) * -1;

		cout << "The pH is " << pH << "." << endl << "\n\n\n";
		
		Sleep(5000);

		cout << "Type the number 1 if you wish to take the concentration" 
		 << "\nof an [H+] ion, and convert it to a pH value.\n\n"
		 << "Type the number 2 if you wish to take the ph value\n"
		 << "of [H+], and convert it to it's concentration.\n\n"
		 << "Type the number 3 if you wish to take the concentration\n"
		 << "of the [OH-] ion, and convert it to a pH value.\n\n"
		 << "Type the number 4 if you wish to take the ph value\n"
		 << "of [OH-], and convert it to it's concentration.\n\n"
		 << "Type exit if you do not want to convert.\n";
		 cin >> userinput;
		}
		else if(userinput == 2){

		cout << "Please type in the exact pH value for the ion [H+]." << endl;
		cin >> pH;
		concentrationH = pow(10, (pH * -1));
		cout << "The pH of the [H+] ion is " << pH << "." << endl;
		cout << "The concentration of the [H+] ion is " << concentrationH << "." << endl << "\n\n\n";


		Sleep(5000);

		cout << "Type the number 1 if you wish to take the concentration" 
		 << "\nof an [H+] ion, and convert it to a pH value.\n\n"
		 << "Type the number 2 if you wish to take the ph value\n"
		 << "of [H+], and convert it to it's concentration.\n\n"
		 << "Type the number 3 if you wish to take the concentration\n"
		 << "of the [OH-] ion, and convert it to a pH value.\n\n"
		 << "Type the number 4 if you wish to take the ph value\n"
		 << "of [OH-], and convert it to it's concentration.\n\n"
		 << "Type exit if you do not want to convert.\n";
		 cin >> userinput;

		}
		else if (userinput == 3){
		double OHbase, OHpower;
		cout << "Please enter the base number for concentration of the [OH-] ion.\n";
		cin >> OHbase;
		cout << "Please enter the power associated with the [OH-] ion.\n(If not applicable, type 0)" << endl; 
		cin >> OHpower;
		OHpower = pow(10,OHpower);
		concentrationOH = OHpower * OHbase;
		
		cout << "The concentration of OH is " << concentrationOH << "." << endl;

		pOH = log10(concentrationOH) * -1;

		cout << "The pOH is " << pOH << "." << endl << "\n\n\n";

		Sleep(5000);
		
		cout << "Type the number 1 if you wish to take the concentration" 
		 << "\nof an [H+] ion, and convert it to a pH value.\n\n"
		 << "Type the number 2 if you wish to take the ph value\n"
		 << "of [H+], and convert it to it's concentration.\n\n"
		 << "Type the number 3 if you wish to take the concentration\n"
		 << "of the [OH-] ion, and convert it to a pH value.\n\n"
		 << "Type the number 4 if you wish to take the ph value\n"
		 << "of [OH-], and convert it to it's concentration.\n\n"
		 << "Type exit if you do not want to convert.\n";
		 cin >> userinput;
	
		}
		else if(userinput == 4){

		cout << "Please type in the exact pOH value for the ion [OH-]." << endl;
		cin >> pOH;
		concentrationOH = pow(10, (pOH * -1));
		cout << "The pOH of the [OH-] ion is " << pOH << "." << endl;
		cout << "The concentration of the [OH-] ion is " << concentrationOH << "." << endl << "\n\n\n";


		Sleep(10000);

		cout << "Type the number 1 if you wish to take the concentration" 
		 << "\nof an [H+] ion, and convert it to a pH value.\n\n"
		 << "Type the number 2 if you wish to take the ph value\n"
		 << "of [H+], and convert it to it's concentration.\n\n"
		 << "Type the number 3 if you wish to take the concentration\n"
		 << "of the [OH-] ion, and convert it to a pH value.\n\n"
		 << "Type the number 4 if you wish to take the ph value\n"
		 << "of [OH-], and convert it to it's concentration.\n\n"
		 << "Type exit if you do not want to convert.\n";
		 cin >> userinput;

		}

	}
	

	system("PAUSE");
	return 0;
}




