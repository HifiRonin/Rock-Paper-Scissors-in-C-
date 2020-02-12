// Rock Paper Scissors
//Perry Walker 2020
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int main()
{
	/*Variables for storing Player Choice,Comp Choice and arguments 
	for srand to generate the random Comp Choice
	*/
	int Player;
	int Comp;
	char yn;
	srand((unsigned)time(0));

	Comp = 1 + rand() % 3;
	//Main code simply stating name of program and the rules
	cout << "-----------------------------------------------------------------\n";
	cout << "-----------------------------------------------------------------\n";
	cout << "-----------------------ROCK--------------------------------------\n";
	cout << "-------------------------PAPER-----------------------------------\n";
	cout << "---------------------------SCISSORS------------------------------\n";
	cout << "-----------------------------------------------------------------\n";
	cout << "-----------------------------------------------------------------\n";
	cout << "-----------------------PERRY-WALKER------------------------------\n";
	cout << "--------------------------2020-----------------------------------\n";
	cout << endl << endl;
	cout << "Rules: Rock Beats Scissors, Scissors Beats Paper, Paper Beats Rock." << endl;
	cout << endl;
	cout << endl;
	cout << "Type in 1 for Rock , 2 for Paper , and 3 for Scissors." << endl;
	cout << "Enter Your Choice in now." << endl;
	cin >> Player;
	cout << "The Computer is now choosing...." << endl;
	system("pause");
	//IF statements for a draw
	if (Comp == 1 and Player == 1)
	{
		cout << "DRAW" << endl;
	}
	else if (Comp == 2 and Player == 2)
	{	
		cout << "DRAW" << endl;
	}
	if (Comp == 3 and Player == 3) 
	{
		cout << "DRAW" << endl;
	}
	//Win and lose conditions if COMP = rock
	if (Comp == 1 and Player == 2) 
	{
		cout << "YOU WIN" << endl;
	}
	else if (Comp == 1 and Player == 3)
	{
		cout << "YOU LOSE, TRY AGAIN" << endl;
	}
	//Win and lose conditions if COMP = paper
	if (Comp == 2 and Player == 3) 
	{
		cout << "YOU WIN" << endl;
	}
	else if (Comp == 2 and Player == 1)
	{
		cout << "YOU LOSE, TRY AGAIN" << endl;
	}
	//Win and lose conditions if COMP = scissors
	if (Comp == 3 and Player == 1)
	{
		cout << "YOU WIN" << endl;
	}
	else if (Comp == 3 and Player == 2)
	{
		cout << "YOU LOSE, TRY AGAIN" << endl;
	}
	cout << "Would You Like To Play Again? y/n" << endl;
	cin >> yn;
	//The if lines below are for if the player wishes to play again or not
	if (yn == 'y') 
	{
		return main();
	}
	else if (yn =='Y') 
	{
		return main();
	}
	if(yn == 'n')
	{
		return 0;
	}
	if (yn == 'N')
	{
		return 0;
	}
}
//This took a lot longer than I am proud to admit 