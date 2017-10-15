/* Kelsey Cameron
9/26/11
Period 1
To create some random program and explore C++ through Paranoia!! */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{	bool playagain = false;

	cout << "If you wish to play the game of Paranoia, please type true on the following screen.\n"
		 << "If at any time in the game you wish to quit, please type False.";
	cin >> playagain;
	while (playagain == true){

	string userinput;
	cout << "You are walking home from work, when you see a stray dog on the\nside of the road. You really want to befriend the dog. How do you do that?\nPlease type all choices in letters(A, a, B, b, etc)\n"; 
	cout << "Do you	\nA. Try to pet him.\n";
	cout << "B. Run your skinny little butt home.\n";
	cout << "C. Jump onto the passing boat in the river that lives near your house, because \nyou think he will chase you.\n";
	cout << "D. Take a Gun and shoot the dog\n";
	cin >> userinput;

	// First Decision Choice B
	if (userinput == "A" || userinput == "a"){
	cout << "You try to pet the dog, but he bites you hard, and you have blood oozing out of your hand.\n";
	cout << "A neighbor sees the dog bite you, and the strange man tells you that if you stick the needle in your hand,";
	cout << " then the wound will magically heal. \nDo you plunge the long needle into your hand?\n";
	cout << "A. Yes\nB. NEVER!!!!!\n";
	cin  >> userinput; 
		if (userinput == "A" || userinput == "a"){
		cout << "You trust the man, even though he looks pretty suspicious..." << endl;
		cout << "Lucky for you, he is a world famous scientist, and not only \ndoes the dog bite instantaneously heal, but it gives you super sniffing powers \njust like a dog!!" << endl;
		cout << "You lift your nose into the air, and you sniff the man.  He asks 'Are you \npleased with your new super powers?'" << endl;
		cout << "Well, are you? Do you have any regrets about trusting this man?";
		cout << "A. Yes or B. No?" << endl;
		cin >> userinput;
			if (userinput == "B" || userinput == "b"){
		cout << "You tell him that you strongly dislike your new powers and\ndemand that he erase them from your body." << endl;
		cout << "He replies 'Alright then, I will reverse the needles magic.'\n";
		cout << "Unfortunately for you, something goes wrong when he tries to \nreverse his magic, and you are killed instantly, never to return alive again.\n"; 
		// User dies
			}
			else if (userinput == "A" || userinput == "a"){
		cout << "You are not EXTREMELY excited about your new smelling powers,\nbut at this point, all you care about is getting away from\n this strange man.";
		cout << "When you begin to walk away, he starts calling your name, and saying \n'COME BACK!!! IT IS YOUR DESTINY TO DIE!!!\n";
		cout << "You find this quite unnerving, so you break into a run,\nand you let your legs carry you to the nearest random place" << endl;
		cout << "It appears that you have sprinted all the way to the park.(probably your doggie powers)\n";
		cout << "When you arrive, you walk into the park, and come to a fork in the road." << endl << "Do you want to go A. Left or B. Right?" << endl;
		cin >> userinput;
			
		if (userinput == "A" || userinput == "a"){
			cout << "You take a left, and you continue to walk down the path." << endl;
			cout << "It begins raining, and lightning outside." << endl;
			cout << "Suddenly, you see the neighbor who gave you the dog powers" << endl;
			cout << "You hear him mutter to himself, 'They always told me that I was nothing in life! \nI have proven them wrong, and in doing so, I SHALL GAIN MY REVENGE!!!!\n";
			cout << "He lifts a dagger above the ground, and before you have time to notice, he has thrown\n the dagger visciously into your chest! He says 'I always knew you had paranoia.'\n";
			cout << "'Afraid of the abnormal huh?! Well now you don't have any chances to live anymore!! Just like I never did!!'" << endl;
			cout << "'He repeatedly stabs you about 15 more times, and by the time the police arrive, you have already bled to death." << endl;
			// User dies
		}
		else if (userinput == "B" || userinput == "b"){
			cout << "It's a good thing you went right, because you just \ngot a gut feeling that your neighbor has stabbed the \nnearest victim, in search of revenge of society never giving him a second chance... Creepy huh?\n";
			cout << "So when you take a right, the birds are chirping,\n the frogs are singing, everything is peaceful." << endl;
			cout << "Congratulations, you have lived through literally 1000 ways to die! You have won the game of Paranoia!!!" << endl;
			/* How to win */
		}
		}
	}
	/* Alternate choice for not sticking needle into hand */
	else if (userinput == "B" || userinput == "b"){
		cout << "Because you have not plunged the needle into your hand to stop the blood, \nyou bleed to death, and by the time the police come, you are already dead, with no trace of why you bled so much." << endl;
	}



}
	// First Decision Choice B
	else if (userinput == "B" || userinput == "b"){
		cout << "Wow, your a coward!!\n"
			 << "Did you get thrown on your head when you were young?(rhetorical question)\n"
			 << "Whatever, better safe than sorry.\n"
			 << "So your home, what do you do now?\n"
			 << "Do you A. take a shower(because you got REALLY dirty at the park!) or B. Surf the internet?\n";

		// Clean Freak
		if (userinput == "A" || userinput == "a"){
			cout << "You are in the middle of taking a shower, when suddenly, you feel VERY woozy...\n"
				 << "If feels like you are drunk, you are wobbling around and throwing up\n"
				 << "All of a sudden, the sinking realization hits you.\n"
				 << "The smell of carbon monoxide is flowing into your nose...\n"
				 << "You fall to the floor; permanantly dead.";
		}
		// Article about one of your neighbors
		else if (userinput == "B" || userinput == "b"){

			cout << "You decide to surf the net.  \nWhen you are on the internet, you find a very interesting,\n but a bit sadistic, article.\n"
				 << "It seems that one of your neighbors has recently stabbed someone with a dagger...\nThe article says that reported witnesses heard the murderer's last words.\n  They were 'Afraid of the abnormal huh?!\n Well now you don't have any chances to live anymore!!\n Just like I never did!!'"
				 << "The article mentions that the murderer had been\ndeveloping a type of scientific miracle, or curse...\n"
				 << "It was an injection that morphs the body's DNA, \nand gives you 'super sniffing' powers, just like a dog.\n"
				 << "The article also mentions that this man lives \non 1589 Sesame Street, Miami, Florida 57896.\n"
				 << "It says that whoever can capture him, and stop his evil doing,\n will be paid a sum of 1 million dollars.\n"
				 << "The challenge will be great, but I think that you have the power\n to stop him!! Will you try?\n"
				 << "A. Yes\nB.No!!!!!!! I'm too scared!!!\n";
			cin >> userinput;
			if (userinput == "A" || userinput == "a"){

				cout << "You use your amazing smelling \npowers to sniff out the demonous house that has been used \nas a tool for illegal transformations of all creatures, big and small\n" << endl
					 << "You enter the house, and you hear a hissing sound.\nYou begin to run away from where the sound seems to be coming from, but you are torn between traveling left or right...\n"
					 << "Do you turn A.Left or B. Right?\n";

				if (userinput == "A" || userinput == "a"){

					cout << "CORRECT!!!\n"
						 << "When nothing is right, turn left!"
						 << "This particular choice leads you away from the poisonous rattlesnake, \nand leads you yet another step closer to discovering the mysteries of this strange man.\n"
					     << "However, you hear a series of cries from various species of animals, \nand you witness the transformation of an evil mad scientist into a three-headed fire breathing dragon!\n"
						 << "Apparently, this horrible man is named Shmitz Mufasa.\nHe literally drained the lives of more than 100 animals to find the ideal potion combinations for the transformation of a human into a dragon!\n"
						 << "You use your pocket knife to cut past all of the vines \nblocking your way into his secret lair where Shmitz does his experiments.  \nBUT OH NO!!! YOU TRIP AND FALL on the last vine! \nIs all hope lost?\n"
						 << "In an effort to end this horrible nightmare, you take your knife and sling it halfway across the lair towards Shmitz's face.\n"
						 << "But he ducks!!! \nWhat will happen to you now that this horror has taken over?  \nWill you be enslaved? \nOr have the life drained out of you?"
						 << "Lucky for you, even though your knife doesn't kill him, \nyour knife actually landed on one of his potions, \nand it cracked the glass rather quickly!\n"
						 << "This potion reacts with the negative dipoles of the potion in his body, creating, \nquite literally, an implosion in the span of his heart!\n"; 
					// first alternate ending
					cout << "Congratulations, you have lived through literally 1000 ways to die! You have won the game of Paranoia!!!" << endl;



				}
				else if (userinput == "b" || userinput == "B"){
					cout << "I am sorry, but you picked the wrong choice.  \nAll of his subjects and sucessful experiments are in there, awaiting your entrance.\n";
					cout << "When you walk down the right hallway, his \npoisonous snake and hyena hybrid attacks you with it's poisonous claws, giving you only \n5 seconds of additional life before you lose the game of Paranoia.\n";



				}
			}
			// User loses from "Scardy cat fever"
			else if (userinput == "B" || userinput == "b"){
				cout << "Oh I'm sorry! I didn't know that you had scardy cat\n powers instead of super sniffing powers!\n"
					 << "Because of your mistake, a huge coyote races at you, and sinks it's \nalready-bloody-red teeth into your kitten-like fur.\n";
				cout << "Do you know what that means?\n\n\nYou die within minutes, and...\n\n\n\n\n\n\n\n\nGAME OVER! YOU LOST!!";


			}


		}
		if (userinput == "false" || userinput == "False"){

			break;
		}

	}








	}

	system("PAUSE");
	return 0;

}