#include <iostream>

#define DEFAULT_SIZE 10 // C-NOTATION

using namespace std;
int main() {
	//int numbers[10];
	//int vector[10];
	
	// 1)
	//int array[10];

	//int length = 10;
	const int SIZE = 10;  // C++ notation
	int array[SIZE];

	array[0] = 10;
	array[SIZE-1] = 7;

	return 0; 
}

