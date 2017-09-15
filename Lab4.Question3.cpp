#include <iostream>
using namespace std;

string max(int a, int b) {
	if (a > b) {
		return "\nThe first number is greater than the second one. ";
	}
	else if (a < b) {
		return "\nThe second number is greater than the first one. ";
	}
	else {
		return "\nBoth the numbers are equal.";
	}
}

int main() {
	
	int firstNumber, secondNumber;
	
	cout << " Enter the first number: \n";
	cin >> firstNumber;
	
	cout << " Enter the second number: \n";
	cin >> secondNumber;
	
	cout << max(firstNumber, secondNumber);
	cout << endl;
	
	return 0;
}
