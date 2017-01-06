/*
6. Soccer Scores 
Write a program that stores the following data about a soccer player in a structure: 

Player’s Name 
Player’s Number 
Points Scored by Player 

The program should keep an array of 12 of these structures. Each element is for a dif-
ferent player on a team. When the program runs it should ask the user to enter the data 
for each player. It should then show a table that lists each player’s number, name, and 
points scored. The program should also calculate and display the total points earned by 
the team. The number and name of the player who has earned the most points should 
also be displayed.

Input Validation: Do not accept negative values for players’ numbers or points scored.
*/

#include <iostream>
#include <string>
using namespace std;

struct Player {
	string name;
	int number;
	int points;
};

void main() {
	const int TEAM_SIZE = 12;

	Player players[TEAM_SIZE];

	int num = 0, totalPoints = 0, mvp = 0;
	for (int i = 0; i < TEAM_SIZE; i++) {
		num++;
		cout << "Player " << num << endl;
		cout << "Name: ";
		cin >> players[i].name;
		cout << "Number: ";
		cin >> players[i].number;
		cout << "Points: ";
		cin >> players[i].points;
		totalPoints+=players[i].points;
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < TEAM_SIZE; i++) {
		if (players[mvp].points < players[i].points) {mvp = i;}

		cout << players[i].name << "\t" << players[i].number << "\t"
			"points: " << players[i].points << endl;
	}

	cout << "\nTeam points scored: " << "\t" << totalPoints << endl;

	cout << "\nMost Valuable Player: " << "\t" << players[mvp].name << "\t"
		<< players[mvp].number << endl;

	cout << endl;


	return; 
}