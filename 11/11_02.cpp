/*
2. Movie Profit 
Modify the Movie Data program written for Programming Challenge 1 to include two 
additional  members  that  hold  the  movie’s  production  costs  and  first-year  revenues.  
Modify the function that displays the movie data to display the title, director, release 
year, running time, and first year’s profit or loss. 
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MovieData {
	string title;
	string director;
	int year;
	int runningTime;
	double cost;
	double revenue;
};

void getMovie(MovieData);

void main() {
	MovieData mov1 = {"Mountain Adventure 3", "Dan Arnold", 1994, 84, 6210400, 18625.65};
	MovieData mov2 = {"The Princess and the Tree", "Jack Snyder", 2006, 112, 823800, 2467832.88};

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
	cout << setprecision(2) << fixed << "First year earnings: " << mov.revenue - mov.cost << endl;
}