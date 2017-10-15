/*	Kelsey Cameron
	December 2, 2011
	Period 1
	Purpose: To study morphemes
*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
	string userinput, yesno;
	cout << "Do you want to play the morphemes video game?\nType Y for yes or N for no.\n";
	cin >> yesno;
	while (yesno == "Y" || yesno == "y")
	{
	cout << "Please use no capitalizations for your answer.  \nType it like this(ie. ceed, cede)\n Do not type the word 'to'" << endl;
	cout << "What is the meaning for acri/acid? Example: acrid" << endl;
	cin >> userinput;
	if (userinput == "sharp" || userinput == "needle" || userinput == "sharp, needle")
	{
		cout << "Congratulations! You have passed Level 1!" << endl;
		cout << "What is the meaning for ann? Example: annual" << endl;
		cin >> userinput;
		if (userinput == "yearly")
		{
			cout << "Congratulations! You have passed Level 2!!" << endl;
			cout << "What is the meaning for ante? Example: antechamber" << endl;
			cin >> userinput;
			if (userinput == "before")
			{
				cout << "Congratulations! You have passed Level 3!!!" << endl;
				cout << "What is the meaning for aqua? Example: aquamarine" << endl;
				cin >> userinput;
				if (userinput == "water")
				{
					cout << "Congratulations! You have passed Level 4!!!!" << endl;
					cout << "What is the meaning for aud? Example: audible" << endl;
					cin >> userinput;
					if (userinput == "hear")
					{
					cout << "Congratulations! You have passed Level 5!!!!!" << endl;
					cout << "What is the meaning for auto? Example: automobile" << endl;
					cin >> userinput;

						if (userinput == "self")
						{
							cout << "Congratulations! You have passed Level 6!!!!!!" << endl;
					cout << "What is the meaning for cede or ceed? Example: recede" << endl;
					cin >> userinput;

						if (userinput == "to go" || userinput == "to yield" || userinput == "yield" || userinput == "go")
						{
						cout << "Congratulations! You have passed Level 7!!!!!!!" << endl;
					cout << "What is the meaning for ceive or cept? Example: take or catch" << endl;
					cin >> userinput;

						if (userinput == "take" || userinput == "catch")
						{
						
						cout << "Congratulations! You have passed Level 8!!!!!!!!" << endl;
					cout << "What is the meaning for chrom? Example: chromatic" << endl;
					cin >> userinput;

						if (userinput == "color")
						{
						cout << "Congratulations! You have passed Level 8!!!!!!!!" << endl;
					cout << "What is the meaning for chron? Example: chronicle" << endl;
					cin >> userinput;

						if (userinput == "time")
						{
						cout << "Congratulations! You have passed Level 9!!!!!!!!!" << endl;
					cout << "What is the meaning for circum? Example: circumference" << endl;
					cin >> userinput;

						if (userinput == "around")
						{
						cout << "Congratulations! You have passed Level 10!!!!!!!!!!" << endl;
					cout << "What is the meaning for cis? Example: Incision" << endl;
					cin >> userinput;

						if (userinput == "cut" || userinput == "to cut")
						{
							cout << "Congratulations! You have passed Level 11!!!!!!!!!!!" << endl;
					cout << "What is the meaning for cred? Example: Credible" << endl;
					cin >> userinput;

						if (userinput == "belief")
						{
							cout << "Congratulations! You have passed Level 12!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for dia? Example: Diameter" << endl;
					cin >> userinput;
					if (userinput == "through")
						{
							cout << "Congratulations! You have passed Level 13!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for deci or deca? Example: Decade" << endl;
					cin >> userinput;
					if (userinput == "ten" || userinput == "Ten")
						{
						cout << "Congratulations! You have passed Level 14!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for extra? Example: Extraneous" << endl;
					cin >> userinput;
					if (userinput == "outside, beyond" || userinput == "outside" || userinput == "beyond")
						{
							cout << "Congratulations! You have passed Level 15!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for graph? Example: Lithograph" << endl;
					cin >> userinput;
					if (userinput == "written or drawn" || userinput == "written" || userinput == "drawn")
						{
						cout << "Congratulations! You have passed Level 16!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for gust? Example: gusto" << endl;
					cin >> userinput;
					if (userinput == "taste")
						{
						cout << "Congratulations! You have passed Level 17!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for hex? Example: Hexadecimal" << endl;
					cin >> userinput;
							if (userinput == "six")
						{	
							cout << "Congratulations! You have passed Level 18!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for mono? Example: Monotheism" << endl;
					cin >> userinput;
							if (userinput == "one")
						{	
							cout << "Congratulations! You have passed Level 19!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for man? Example: Manuscript" << endl;
					cin >> userinput;
							if (userinput == "hand")
						{	
							cout << "Congratulations! You have passed Level 20!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for morph? Example: Morphing" << endl;
					cin >> userinput;
							if (userinput == "shape or form" || userinput=="shape" || userinput =="form" || userinput == "to shape or form")
						{	
							cout << "Congratulations! You have passed Level 21!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for neo? Example: Neoclassic" << endl;
					cin >> userinput;
							
					if (userinput == "new")
						{	
							cout << "Congratulations! You have passed Level 22!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for pathy? Example: Empathy" << endl;
					cin >> userinput;
						if (userinput == "emotion" || userinput == "Emotion")
						{	
							cout << "Congratulations! You have passed Level 23!!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for ped? Example: Pediatric" << endl;
					cin >> userinput;
								if (userinput == "child" || userinput == "Child")
						{	
							cout << "Congratulations! You have passed Level 24!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for poly? Example: Polytheistic" << endl;
					cin >> userinput;
								if (userinput == "many" || userinput == "Many")
						{	
							cout << "Congratulations! You have passed Level 25!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for retro? Example: Retroactive" << endl;
					cin >> userinput;
						if (userinput == "back" || userinput == "back")
						{	
							cout << "Congratulations! You have passed Level 26!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for semi? Example: Semicircle" << endl;
					cin >> userinput;
						if (userinput == "half")
						{	
							cout << "Congratulations! You have passed Level 27!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for spect? Example: Spectacles" << endl;
					cin >> userinput;

					if (userinput == "see" || userinput == "See")
						{	
							cout << "Congratulations! You have passed Level 28!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for tact or tang? Example: Tangible" << endl;
					cin >> userinput;
							if (userinput == "touch" || userinput == "Touch")
						{	
							cout << "Congratulations! You have passed Level 29!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for tri? Example: Triptych" << endl;
					cin >> userinput;
						if (userinput == "three" || userinput == "Three")
						{	
							cout << "Congratulations! You have passed Level 30!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for verd(e)? Example: Verdant" << endl;
					cin >> userinput;

						if (userinput == "green" || userinput == "Green")
						{	
							cout << "Congratulations! You have passed Level 31!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
					cout << "What is the meaning for vid or vis? Example: Visible" << endl;
					cin >> userinput;
						if (userinput == "see" || userinput == "See")
						{	cout << "...............................................................................................................................";
							Sleep(5000);
							
							cout << "CONGRATULATIONS!! YOU HAVE BEATEN ALL THE LEVELS!!! \nBASK IN THE ROYAL GLORY OF OFFICIALLY BEING SMART FOR THE FIRST TIME IN YOUR LIFE!!! \n\nGOOD JOB!!!!!!!";





							}

							}

							}
							}
							}


							}
							}
							}
							}
							}
							}		
						}
						}
						}
						}
						}
						}
						}
						}
						}
						}
						}
						}
						}
						}


					}



			}
			
		}

		}
		}
		}
		}
		}
		cout << "Do you want to play the morphemes video game again?\nType Y for yes or N for no.\n";
	cin >> yesno;
		}
		system("PAUSE");
		return 0;
		}
		