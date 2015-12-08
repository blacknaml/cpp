#include <iostream>

using namespace std;

int main(){
	int no;

	cout << "Enter a number:\n";
	cin >> no;

	if(no%2 != 0)
		cout << "The given no is ODD!\n";
	else 
		cout << "The given no is EVEN!\n";

	return 0;
}