#include <iostream>
using namespace std;

int main(){
	long int f = 1, no;

	cout << "Program calculate factorial" << endl;
	cout << "Enter a number:" << endl;
	cin >> no;

	do {
		f = no * f;
		no = no - 1;
	} while(no >= 1);

	cout << "Factorial: " << f << endl;

	return 0;
}