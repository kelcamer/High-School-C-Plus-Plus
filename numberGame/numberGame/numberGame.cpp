/*	Kelsey Cameron
	Period 1
	April 5, 2012	*/
#include <iostream>
#include <cmath>
#include <string>
#include <ctime>

using namespace std;

class game{
private:
	int input;
	int random;

public:
	void userGuess();
	void check();
	void result();
	game::game(int = 0);


};

game::game(int user){
	input = user;


}


void game::userGuess(){
	cout << "Guess a number between 1 and 20\n";
	cin >> input;

}
void game::check(){

	srand(time(NULL));
	random = rand() % 20 + 1;

	
}
void game::result(){
	if (input == random){
		cout << "CONGRATULATIONS!! YOU GUESSED RIGHT!!\n";

	}
	else{
		cout << "I am so sorry, but you did not guess the correct number :(\n";
		cout << "The correct number is " << random << endl;

	}





}


