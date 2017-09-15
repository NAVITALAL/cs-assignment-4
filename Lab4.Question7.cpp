#include <iostream>
using namespace std;

void findStrong(int numberOne, int numberTwo) {
	int i, digit, factorial, sumFactorials;
	
	for (int l = numberOne; l <= numberTwo; l++) {
		sumFactorials = 0;
		i = l;
		while (i != 0) {
			factorial = 1;
			digit = i % 10;
			i = i/10;
			
			for (int j = 1; j <= digit; j++) {
				factorial = factorial*j;
			}
			
			sumFactorials += factorial;
			
		}
		
		if (sumFactorials == l) {
			cout << l << " ";
		}
	}
}

int main() {
	
	int a, b;
	
	cout << "Enter the first number: ";
	cin >> a;
	
	cout << "Enter the last number: ";
	cin >> b;
	
	findStrong(a, b);
	cout << endl;
	
	return 0;
}
