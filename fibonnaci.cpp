#include <iostream>
using namespace std;

int main(){
	int a = 0, b = 1, temp, no;

	cout << "Program for Fibonnaci Series." << endl;
	cout << "Enter a number: " << endl;
	cin >> no;

	while(b < no){
		cout << b << endl;
		temp = a + b;
		a = b;
		b = temp;
	}

	return 0;
}