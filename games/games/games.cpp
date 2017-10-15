/*	Kelsey Cameron
	Period 1
	May 15, 2012	*/	
			

#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;

class games{

	private:
	string userinput;
	int num;
	string str1;
	int compu;
	int input;
	int random;
	
public:
	int userguess1();
	int validate();
	void result1();
	games::games(int = 0);
	void userguess2();
	void check();
	void result2();
	void tictactoe();
	string str3[3][3];
};
games::games(int user){

	input = user;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			str3[i][j] = " ";


		}
	}
	
}
int games::userguess1(){
	
	cout << "ROCK\nPAPER\nSCISSOR\nSHOOT!\n";
	cout << "What is your choice?";
	cin >> userinput;
	if (userinput == "rock" || userinput == "ROCK" || userinput == "Rock"){
		num = 1;
	}
	else if (userinput == "PAPER" || userinput == "Paper"  || userinput == "paper"){

		num = 2;
	}
	else if (userinput == "Scissor" || userinput == "SCISSOR" || userinput == "scissor"){
		num = 3;

	}
	return num;
}
int games::validate(){
	
	srand(time(NULL));
	compu = rand() % 3 + 1;
	if(compu == 1){
		str1 = "rock";
	}
	else if(compu == 2){
		str1 = "paper";

	}
	else if(compu == 3){
		str1 = "scissor";

	}
	
	return compu;
	

}
void games::result1(){

	if (num == 1 && compu == 3){
		cout << "Rock beats Scissors, you WIN!\n";

	}
	else if (num == 2 && compu == 1){
		cout << "Paper beats Rock, you WIN!\n";

	}
	else if (num == 3 && compu == 2){

		cout << "Scissor beats Paper, you WIN!\n";
	}
	else if (num == compu){
		cout << "You have tied!\n";

	}
	else{

		cout << "I am sorry, but " << str1 << " beats " << userinput << "." << endl << "You LOSE THIS ROUND!" << endl;
	}

}
void games::userguess2(){
	cout << "Guess a number between 1 and 20\n";
	cin >> input;

}
void games::check(){

	srand(time(NULL));
	random = rand() % 20 + 1;

	
}
void games::result2(){
	if (input == random){
		cout << "CONGRATULATIONS!! YOU GUESSED RIGHT!!\n";

	}
	else{
		cout << "I am so sorry, but you did not guess the correct number :(\n";
		cout << "The correct number is " << random << endl;

	}


}
void games::tictactoe(){
	int gofirst;
	bool winner = false;
	string board;
	int num;
	srand(time(NULL));
	gofirst = rand() % 2 + 1;
	while (!winner){
	board = "   "+ str3[0][0] +"  |   " + str3[0][1] +"   |   "+str3[0][2] +"   \n  1   |    2  |  3   \n---------------------\n  " + str3[1][0] + "    |   " + str3[1][1] + "    |  " + str3[1][2] + "    \n  4   |   5   |   6  \n---------------------\n   " + str3[2][0] + "   |   " + str3[2][1] + "    |  " + str3[2][2] + "    \n  7   |  8    |  9   \n";
	cout << board;
	cout << "You can be O and I will be X\n";
	if (gofirst == 1){
		cout << "You go first.\n";
		
		cout << "Where would you like to place your O?\n";
		cin >> num;
		if (num == 1){
			str3[0][0] = "O";
		}
		else if(num == 2){
			str3[0][1] = "O";
		}
		else if(num == 3){
			str3[0][2] = "O";
		}
		else if(num == 4){
			str3[1][0] = "O";
		}
		else if(num == 5){
			str3[1][1] = "O";
		}
		else if(num == 6){
			str3[1][2] = "O";
		}
		else if(num == 7){
			str3[2][0] = "O";

		}
		
		else if (num == 8){
			str3[2][1] = "O";
		}
		else if (num == 9){
			str3[2][2] = "O";
		}
		gofirst = 2;
	}
	
	else if(gofirst == 2){
		cout << "I will go first.\n";
		num = rand() % 9 + 1;
		int temp;
		if (num > 3 && num < 7) temp = 1;
		else if (num > 7) temp = 2;
		else temp = 0;
		while (str3[(num - 3) / 3 ][temp] != " "){

			num = rand() % 9 + 1;
			if (num > 3 && num < 7) temp = 1;
		else if (num > 7) temp = 2;
		else temp = 0;

		}
 	if (num == 1){
			str3[0][0] = "X";
		}
		else if(num == 2){
			str3[0][1] = "X";
		}
		else if(num == 3){
			str3[0][2] = "X";
		}
		else if(num == 4){
			str3[1][0] = "X";
		}
		else if(num == 5){
			str3[1][1] = "X";
		}
		else if(num == 6){
			str3[1][2] = "X";
		}
		else if(num == 7){
			str3[2][0] = "X";

		}
		
		else if (num == 8){
			str3[2][1] = "X";
		}
		else if (num == 9){
			str3[2][2] = "X";
		}
		
	}
	gofirst = 1;
	}
}
int main(){
	games play;
	char str1;
	string str2;
	cout << "Do you want to play a game?\n";
	cin >> str2;
	while (str2 == "yes" || str2 == "yea" || str2 == "ya" || str2 == "YES" || str2 == "Y" || str2 == "y"){
	cout << "Which Game?\n\nA. Rock, Paper, Scissors\nB. Number Guess\nC. Tic Tac Toe\n";
	cin >> str1;
	if (str1 == 'A' || str1 == 'a'){
	
	play.userguess1();
	play.validate();
	play.result1();
	}
	else if(str1 == 'B' || str1 == 'b'){
	play.userguess2();
	play.check();
	play.result2();

	}
	else if(str1 == 'C' || str1 == 'c'){
		play.tictactoe();
		

	}
	cout << "Play again?\n";
	cin >> str2;
	}
	system("PAUSE");
	return 0;

}