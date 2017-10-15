/*	Kelsey Cameron
	Period 1
	April 10, 2012	*/

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class animate {
private:
	string contain;
	string Wave;
	int count;
	int loop;
	int numberOfLoop;
	int numOfWave;
public:
	void DNA();
	void wave();
	void person();
	void getDNALoop();
	void getWaveLoop();
	// contain is 85 characters long
	animate::animate(string = "                   O                             O                    ", string = "                     O                          ");
	
	// 34 and 36, 34 is middle
};
animate::animate(string str, string wav){
	contain = str;
	Wave = wav;
	


}
void animate::DNA(){

	
	for (loop = 0; loop < numberOfLoop; loop++){ 
	for (count = 0; count < 16; count++){

		cout << contain << endl;
		contain.insert(0, " ");
		contain.replace(21 + count, 2, "");
		Sleep(25);
}
	contain.replace(33, 3, "O O");
	for (count = 16; count < 30; count++){
		cout << contain << endl;
		
		contain.insert(34, "  ");
		contain.replace(0, 1, "");
		Sleep(50);



	}
	for (count = 0; count < 16; count++){

		cout << contain << endl;
		contain.insert(0, " ");
		contain.replace(21 + count, 2, "");
		Sleep(50);
}
	contain.replace(33, 3, "O O");
	for (count = 16; count < 30; count++){
		cout << contain << endl;
		
		contain.insert(34, "  ");
		contain.replace(0, 1, "");
		Sleep(25);



	}
	}
}
void animate::person(){






}
void animate::wave(){
	for (count = 0; count < 16; count++){

		cout << Wave << endl;
		Wave.insert(0, " ");
		Wave.replace(21 + count, 2, "");
		Sleep(25);
}
	/*	count = 0;
		loop = 0;
	for (count = 0; count < 30; count++){
		
		if (loop <= 0 && loop >= 30){
		cout << Wave << endl;
		Wave.insert(0, "  ");
		

		
		}
		
		if (loop > 30 && loop <= 60){
		Wave.replace(0, 2, "");
			
		}
		Sleep(100);
	}*/
}
void animate::getWaveLoop(){

	cout << "How many waves do you wish to see?" << endl;
	cin >> numOfWave;

}
void animate::getDNALoop(){
	cout << "How many iterations do you want the DNA loop to show?\nIf you don't want to see a DNA loop, type 0." << endl;
	cin >> numberOfLoop;





}

	int main(){
		animate str;
		//str.getWaveLoop();
		str.wave();
		str.getDNALoop();
		str.DNA();
		system("PAUSE");
		return 0;
		






	}

	/*
      How many iterations do you want the DNA loop to show?

	  DNA function
                   O                             O
                    O                           O
                     O                         O
                      O                       O
                       O                     O
                        O                   O
                         O                 O
                          O               O
                           O             O
                            O           O
                             O         O
                              O       O
                               O     O
                                O   O
                                 O O
                                  O
                                 O O
                                O   O
                               O     O
                              O       O
                             O         O
                            O           O
                           O             O
                          O               O
                         O                 O
                        O                   O
                       O                     O
                      O                       O
                     O                         O
                    O                           O
                   O                             O
                    O                           O
                     O                         O
                      O                       O
                       O                     O
                        O                   O
                         O                 O
                          O               O
                           O             O
                            O           O
                             O         O
                              O       O
                               O     O
                                O   O
                                 O O
								  O 
		 Wave function
O
  O
    O
      O
        O
          O
            O
              O
                O
                  O
                    O
                      O
                        O
                          O
                            O
                              O
                                O
                                  O
                                    O
                                      O
                                        O
                                          O
                                            O
                                              O
                                                O
                                                  O
                                                    O
                                                      O
                                                        O
                                                          O
How many iterations do you want the DNA loop to show?
If you don't want to see a DNA loop, type 0.









Press any key to continue . . .
Press any key to continue . . .
Press any key to continue . . .






	*/