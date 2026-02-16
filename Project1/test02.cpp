#include <iostream>

#define DEFAULT_SIZE 20

using namespace std;
int main() {
	int marks[DEFAULT_SIZE];

	int lenght;

	do {
		cout << "Input the number of mark(1-20): ";
		cin >> lenght;
	} while (lenght <= 0 && lenght > DEFAULT_SIZE);

	cout << "Input students mark: " ;
	for (int index = 0; index < lenght; index++)
	{
		cin >> marks[index];
	}

	double avg = 0;

	for (int index = 0; index < lenght; index++)
	{
		avg += marks[index];
	}

	cout << "The average mark: " << avg / lenght << endl;

	return 0;
}


