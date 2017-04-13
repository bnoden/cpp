/*
1. Flight times in the United States can be estimated using a formula based on the direction of travel and distance between airports.
Regardless of the distance or direction, there is also a fixed amount of time for the take-off and landing cycles.
Needed information:
• It takes 0.2 hours for takeoff and climb-out from the origin airport.
• It takes 0.4 hours for approach and landing at the destination airport.
• The aircraft ground speed after climb-out when traveling west is 480 miles/hour.
• The aircraft ground speed after climb-out when traveling east is 540 miles/hour.
• The aircraft ground speed after climb-out when traveling north or south is 510 miles/hour.
Given this data, the flight time (FT) can be estimated as:
FT = 0.20 + 0.40 + (distance / groundSpeed);
Write a C++ program that asks the user for the distance traveled (0-6000) expressed in whole miles and the flight direction as a
character (N, S, W, E). For each flight entered output the approximate flight time to the nearest 1/100 of an hour in a time format.
Check for case and valid inputs; use constants as needed. To pad numbers with leading zeros you need to insert a 0 into the output
format-using the setfill() manipulator.
For example: To travel from Dallas/Fort Worth to Chicago O’Hare. The distance is 801 miles and the general direction of travel is north.
The travel time can be computed as follows:
0.20 + 0.40 + (801 / 510) = 0.6 + 1.57 = 2.17 (two decimal places)
Finally, convert decimal answer to time. Format (HH:MM:SS):
2.17 = 02:10:12
Output should look similar to below.
Sample Runs:
Enter the distance traveled: 1883
Enter the direction: E
The estimated flight time is: 4.09 or 04:05:24
Enter the distance traveled: 1100
Enter the direction: S
The estimated flight time is: 2.76 or 02:45:36
*/

#include <iostream>
#include <iomanip>
using namespace std;

double getTime(double, char);
void timef(double);

int main() { 
	const double MIN_DISTANCE = 0.0;
	const double MAX_DISTANCE = 6000.0;
	int distance = -1;
	double travelTime;
	char direction = ' ';

	while (distance < 0 || distance > MAX_DISTANCE) {
		cout << "Enter the distance traveled: ";
		cin >> distance;
	}

	while (toupper(direction) != 'N' && toupper(direction) != 'S' &&
		toupper(direction) != 'E' && toupper(direction) != 'W') {
		cout << "Enter the direction: ";
		cin >> direction;
	}
	travelTime = getTime(distance, direction);

	cout << setprecision(2) << fixed;
	cout << "\nThe estimated flight time is: " << travelTime << " or ";
	timef(travelTime);
	cout << endl;

	return 0; 
}

double getTime(double dist, char dir) {
	double speed;
	dir = toupper(dir);

	if (dir == 'N' || dir == 'S') { speed = 510; }
	else if (dir == 'E') { speed = 540; }
	else if (dir == 'W') { speed = 480; }

	return (0.20 + 0.40 + (dist/speed));
}

void timef(double num) {
	double minute, second;
	minute = (num - floor(num)) * 60;
	second = (minute - floor(minute)) * 60;

	cout << setfill('0') << setw(2) << int(floor(num)) << ":";
	cout << setfill('0') << setw(2) << int(floor(minute)) << ":";
	cout << setfill('0') << setw(2) << int(floor(second));
}