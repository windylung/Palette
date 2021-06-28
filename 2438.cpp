#include<iostream>
using namespace std;

void printStars(int numOfStar) {
	for (int i = 0; i < numOfStar; i++)
		cout << "*";
}

void printNewLine() {
	cout << "\n";
}

void printSpaces(int numOfSpace) {
	for (int i = 0; i < numOfSpace; i++)
		cout << " ";
}

void printNumberLessThanX(int number, int x) {
	if (number < x)
		cout << number;
}


void main() {

	int num;
	cin >> num;
	
	for (int i = 1;i <= num;i++) {
		printStars(i);
		printNewLine();
	}
}