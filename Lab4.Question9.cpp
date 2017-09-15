#include <iostream>
using namespace std;

void findPerfect(int numberOne, int numberTwo) {
	int divisor, sum;
	sum = 0;
	
	for (int j = numberOne; j <= numberTwo; j++) {
		for (int i = 1; i <= j/2; i++) {
			if (j % i == 0) {
				divisor = i;
				sum += divisor;
			}
		}
		
		if (sum == j) {
			cout << j << " ";
		}
		sum = 0;
	}
}

int main() {
	
	int a, b;
	
	cout << "Enter the first number: ";
	cin >> a;
	
	cout << "Enter the last number: ";
	cin >> b;
	
	findPerfect(a, b);
	cout << endl;
	
	return 0;
}
