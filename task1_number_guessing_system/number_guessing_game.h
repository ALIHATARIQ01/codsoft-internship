#pragma once
#include <iostream>
#include <ctime> // to genrate random number--

using namespace std;
class NumberGG
{
private:
	int Attempts;   //the attempts that you done n gues number that you guess
	int SN;    //secrete number
	int GuessTheNumber()
	{
		int guess;
		cout << "ENTER THE NUMBER _________ ";
		cin >> guess;
		return guess;
	}

public:
	NumberGG()
	{
		this->Attempts = 0;
		this->SN =rand()%250 ;
		srand(static_cast<unsigned int>(time(nullptr)));
	}
	void play()
	{
		char tocontinue;
		cout << "\t\t\t\tTHIS IS YOUR NUMBER GUESSING GAME GAME MADE BY YOURSELF--------\n\n";
		cout << "\t\t\t\tTHIS GAME IS NOW GOING TO START .........!\n\n";
		cout << "\t\t\t\tthere is small help for you that ...............\n\n";
		cout << "\t\t\t\tYOU CAN GUESS THE NUMBER BETEEN 1 TO 250.............. \n\n";
		do {
			int guess = GuessTheNumber();
			Attempts++;
			{
				if (guess < SN)
				{
					cout << "\t\tTHE NUMBER IS  LOW ...........PLEASE TRY AGAIN------\n\n";
				}
				else if (guess > SN)
				{
					cout << "\t\tTHE NUMBER IS  HIGH....................PLEASE TRY AGAIN\n\n";

				}
				else if(guess == SN)
				{
					cout << "\t\tCONGRATULATIONS   YOU WON HURRAY----------\n\n";
				}
			}
			cout << "DO YOU WANT TO CARRY ON THIS GAME ---------(Y/N)";
			cin >> tocontinue;
		} while (tocontinue=='Y'|| tocontinue=='y');
	}



};

