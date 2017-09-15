#include <iostream>
#include <cmath>
using namespace std;

void findArmstrong(int numberOne, int numberTwo) {
	int j;
	double n, digit, sum;
	sum = 0;
	
	for (int i = numberOne; i <= numberTwo; i++) {
		n = 0;
		sum = 0;
		j = i;
		while (j != 0) {
			n++;
			j = j/10;
		}
		
		j = i;
		
		while (j != 0) {
			digit = j % 10;
			
			sum += pow(digit, n);
			
			j = j/10;
		}
		
		if (sum == i) {
			cout << i << " ";
		}
	}
}

int main() {
	
	int a, b;
	
	cout << "Enter the first number: ";
	cin >> a;
	
	cout << "Enter the last number: ";
	cin >> b;
	
	findArmstrong(a, b);
	cout << endl;
	
	return 0;
}
