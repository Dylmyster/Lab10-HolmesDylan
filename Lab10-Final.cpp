#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;

float gradeMark(float gradeNumber, float gradeInteger);
void joke();
int counter(int y);


int main() {
	cout << "Welcome to the function machine!" << endl;
	cout << "================================" << endl;
	cout << endl;
	cout << "Enter a number to select the program you want to run:" << endl;
	cout << endl;
	cout << "1: Calculate your grade on a test" << endl;
	cout << "2: Tell me a joke" << endl;
	cout << "3: Count to 10" << endl;
	cout << "Any other key: Exit" << endl;

	int selection;
	cin >> selection;

	if (cin.fail() || selection < 1 || selection > 3) {
		cout << endl;
		cout << "Have a nice day, goodbye!" << endl;
		system("PAUSE");
		return 0;
	}

	if (selection == 1) {
		float marksReceived = 0;
		float totalMarksAvailable = 0;
		double gradePercentage = 0;

		// Read in 2 integer values
		cout << "Please Enter a Mark" << endl;
		cin >> marksReceived;
		cout << "Total Mark:" << endl;
		cin >> totalMarksAvailable;




		/*
		   Pass the integer values to a function.
		   The function should calculates the grade
		   as a percentage out of 100 and return as
		   as a double
		*/

		gradePercentage = gradeMark(marksReceived, totalMarksAvailable);
		cout << gradePercentage << endl;



		cout << "You achieved a grade of: " << gradePercentage << "%" << endl;
	}
	else if (selection == 2) {
		// Ask the user for their name
		string name;
		cout << "What is your name?" << endl;
		cin >> name;


		// Call a function that tells them a joke
		cout << "Well " << name << " here is the joke:" << endl;

		joke();
		// The function should not return a value


	}
	else {
		int count = 0;

		// Replace the while loop with a for loop
		for (int x = 0; x < 10; x++) {
			// Call a function here to increase the count
			count = counter(count);



			cout << count << " " << endl;;
		}
	}
	system("PAUSE");
	return 0;
}



float gradeMark(float gradeNumber, float gradeInteger)
{
	float gradeGrade = (gradeNumber / gradeInteger) * 100;
	return gradeGrade;
}

void joke()
{
	cout << "A user inferface is like a joke. If you have to explain it, it's not that good." << endl;
}

int counter(int y)
{
	y++;
	return y;
}