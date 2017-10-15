/*	Kelsey Cameron
	Period 1
	March 7, 2012	*/


#include <iostream>
#include <cmath>
#include <Windows.h>
#include <vector>


using namespace std;

class average{
private:
	vector<double> grade;
	int numOfGrades;
	double total;
public:
	void aver();
	average(int = 0);
	void setVal();
	void show();

};
average::average(int numofnum){
	
	numOfGrades = numofnum;
	total = 0.0;


}

void average::setVal(){
	cout << "Please enter the number of grades that you would like to enter.\n";
	cin >> numOfGrades;
	


	cout << "Please enter each grade.\n";
	for (int i = 0; i < numOfGrades; i++){
	
	grade.push_back(0);
	
	
	}
	for (int i = 0; i < numOfGrades; i++){


		cin >> grade[i];
		
	}
	
}
void average::aver(){
	
	
	for (int i = 0; i < numOfGrades; i++){
	total += grade[i];
	
	}
	
	total /= (double)numOfGrades;
	
	


}
void average::show(){
	

	cout << "The average of all of the grades is " << total << endl;


}


