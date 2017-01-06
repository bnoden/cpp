/*
1. Movie Data 
Write a program that uses a structure named MovieData to store the following infor-
mation about a movie: 
Title 
Director 
Year Released 
Running Time (in minutes) 
The  program  should  create  two MovieData variables,  store  values  in  their  members,  
and pass each one, in turn, to a function that displays the information about the movie 
in a clearly formatted manner. 
*/

#include <iostream>
#include <string>
using namespace std;

struct MovieData {
	string title;
	string director;
	int year;
	int runningTime;
};

void getMovie(MovieData);

void main() {
	MovieData mov1 = {"Mountain Adventure 3", "Dan Arnold", 1994, 92};
	MovieData mov2 = {"The Princess and the Tree", "Jack Snyder", 2006, 46};

	cout << endl;

	getMovie(mov1);
	cout << endl;
	getMovie(mov2);
	cout << endl;

	return; 
}

void getMovie(MovieData mov) {
	cout << "Title: " << mov.title << endl;
	cout << "Director: " << mov.director << endl;
	cout << "Year: " << mov.year << endl;
	cout << "Running time: " << mov.runningTime << " mintutes" << endl;
}