#include <iostream>
using namespace std;

float Diameter(float r){
	
	return 2*r;
}

float Circumference(float r){
	
	return 2*3.14*r;
}

float Area(float r){
	
	return 3.14*r*r;
}


int main() {
	// your code goes here
	
	int radius;
	
	cout << " Enter the radius of the circle " ;
	cin >> radius;
	
	cout << "The diameter of the circle is " << Diameter(radius) << endl;
	cout << "The circumference of the circle is " << Circumference(radius) << endl;
	cout << "The area of the circle is " << Area(radius) << endl;
	
	return 0;
}
