/*
17.    
Math Tutor
Write a program that can be used as a math tutor for a young student. The program 
should display two random numbers to be added, such as 
247 + 129 =
The  program  should  then  pause  while  the  student  works  on  the  problem.  When  the  
student is ready to check the answer, he or she can press a key and the program will 
display the correct solution: 
247 + 129 = 376   
*/

#include <iostream>
#include <iomanip>
using namespace std;

int num1, num2, solution, answer, correct, incorrect;;

void CheckAnswer(int, int);

int main() {
	
	int problems = 1;

	correct = 0, incorrect = 0;

	while (problems <= 10) {
		
		cout << "Problem " << problems << ": \n" << endl;
		num1 = rand()%1000;
		num2 = rand()%1000;
		solution = num1 + num2;
		cout << setw(5) << right << num1 << endl;
		
		cout << left << "+";
		cout << setw(4) << right << num2 << endl;
		if (solution > 999) {
			cout << " ";
		}
		else if (solution < 1000) {
			cout << "  ";
		}
		cin >> answer;

		CheckAnswer(solution, answer);
		
		cin.get();
		problems++;
		srand(answer);
	}

	cout << "You got " << correct << " correct and " << incorrect << " incorrect." << endl;
	if (correct == 10) {
		cout << "Perfect!" << endl;
	}
	else if (correct >= 7) {
		cout << "Not bad!" << endl;
	}
	else if (correct < 7) {
		cout << "You should study more!" << endl;
	}

	return 0;
}

void CheckAnswer(int sol, int ans) {
	if (ans == sol) {
		cout << "Correct!\n" << endl;
		correct+=1;
	}
	else if (ans != sol) {
		cout << "Incorrect! The correct answer is " << sol << ".\n" << endl;
		incorrect+=1;
	}
}
