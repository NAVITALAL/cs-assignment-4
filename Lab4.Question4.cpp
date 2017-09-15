#include <iostream>
using namespace std;

void function(int Num){
	if(Num%2 == 0){
	cout<<Num<<" is Even" << endl;
	}
	else{ 
	cout<<Num<<" is Odd"  << endl;
	}	
}
   

int main(){
	int Num;
	cout << "Number: ";   
	cin >> Num;
	function(Num);

	return 0;
}
