#include <iostream>
using namespace std;

	int cube (int x){
	int y;
		y=x*x*x;

		return y;	
	}



	int main() {
	int a;
	cout <<"enter the number"<<endl;
	cin >> a;

	cout << "the cube of the number is " << cube(a) << endl;
	return 0;
}
