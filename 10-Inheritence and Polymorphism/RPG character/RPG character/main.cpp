#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
#include <vector>

using namespace std;

void createPlayer(vector <Player*>& players, bool& prompt);
void printPlayers(vector <Player*>& players);
void deleteData(vector <Player*>& players);

int main()
{
	vector <Player*> players;
	bool prompt = 1;
	int number_of_creation = 1;

	while (prompt == 1)
	{

		createPlayer(players, prompt);

	}

	printPlayers(players);

	deleteData(players);




	return 0;
}

void createPlayer(vector<Player*>& players,bool& prompt)
{
	int userPrompt;
	string name;

		cout << "do you want to create a character press 1 for yes and 0 for no" << endl;
		cin >> prompt;
		if (prompt == 1)
		{

			cout << "please choose the profession of your character: " << endl;
			cout << "1. Warrior\n2.Priest\n3.Mage" << endl;

			cin >> userPrompt;

			if (userPrompt == 1)
			{
			 
				cout << "please choose the race of your character: " << endl;
				cout << "1.HUMAN\n2.ELF\n3.DWARF\n4.ORC\n5.TROLL" << endl;

				cin >> userPrompt;

				if (userPrompt == 1)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Warrior(name, HUMAN, 200, 0);
					players.push_back(myplrptr);
				}

				else if (userPrompt == 2)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Warrior(name, ELF, 200, 0);
					players.push_back(myplrptr);
				}
				else if (userPrompt == 3)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Warrior(name, DWARF, 200, 0);
					players.push_back(myplrptr);
				}
				else if (userPrompt == 4)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Warrior(name, ORC, 200, 0);
					players.push_back(myplrptr);
				}
				else if (userPrompt == 5)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Warrior(name, TROLL, 200, 0);
					players.push_back(myplrptr);
				}


			}
			else if (userPrompt == 2)
			{
				cout << "please choose the race of your character: " << endl;
				cout << "1.HUMAN\n2.ELF\n3.DWARF\n4.ORC\n5.TROLL" << endl;

				cin >> userPrompt;

				if (userPrompt == 1)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Priest (name, HUMAN, 100, 200);
					players.push_back(myplrptr);
				}

				else if (userPrompt == 2)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Priest (name, ELF, 100, 200);
					players.push_back(myplrptr);
				}
				else if (userPrompt == 3)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Priest(name, DWARF, 100, 200);
					players.push_back(myplrptr);
				}
				else if (userPrompt == 4)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Priest(name, ORC, 100, 200);
					players.push_back(myplrptr);
				}
				else if (userPrompt == 5)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Priest(name, TROLL, 100, 200);
					players.push_back(myplrptr);
				}
			}

			else if (userPrompt == 3)
			{
				cout << "please choose the race of your character: " << endl;
				cout << "1.HUMAN\n2.ELF\n3.DWARF\n4.ORC\n5.TROLL" << endl;

				cin >> userPrompt;

				if (userPrompt == 1)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Mage(name, HUMAN, 150, 150);
					players.push_back(myplrptr);
				}

				else if (userPrompt == 2)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Mage(name, ELF, 150, 150);
					players.push_back(myplrptr);
				}
				else if (userPrompt == 3)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Priest(name, DWARF, 150, 150);
					players.push_back(myplrptr);
				}
				else if (userPrompt == 4)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Priest(name, ORC, 150, 150);
					players.push_back(myplrptr);
				}
				else if (userPrompt == 5)
				{
					cout << "please enter the name of your charcter" << endl;
					cin.get();
					getline(cin, name);
					Player* myplrptr = new Priest(name, TROLL, 150, 150);
					players.push_back(myplrptr);
				}
			}


		}
		else
			prompt = 0;
			return;
	
}

void printPlayers(vector <Player*>& players)
{

	for (int i = 0; i < players.size(); i++)
	{
		cout << "Player no." << i + 1 << endl;

		cout << "name: " << players[i]->getName()<< endl;

		cout << "race: " << players[i]->whatRace() << endl;

		cout << "HP" << players[i]->getHitPoints() << endl;

		cout << "MP: " << players[i]->getMagicPoints() << endl;

		cout << "Attack: " << players[i]->attack() << endl;


	}

}
void deleteData(vector <Player*>& players)
{
	for (int i = 0; i < players.size(); i++)
	{
		delete players[i];

		players[i] = nullptr;
	}

}