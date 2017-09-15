#include <iostream>
using namespace std;

void findPrimes(int numberOne, int numberTwo) {
	int numOfDivisors = 0;

	for (int i = numberOne; i <= numberTwo; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				numOfDivisors++;
			}
		}
		if (numOfDivisors == 2) {
			cout << i << " ";
		}
		numOfDivisors = 0;
	}
}

int main() {
	
	int a, b;
	
	cout << "Enter the first number: ";
	cin >> a;
	
	cout << "Enter the last number: ";
	cin >> b;
	
	findPrimes(a,b);
	cout << endl;
	
	return 0;
}
