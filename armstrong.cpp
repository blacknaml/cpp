#include <iostream>

using namespace std;

int no;

int main(){
	int no, mod, ans;

	cout << "Check the given number is Armstrong or not\n";
	cout << "Enter a number:\n";
	cin >> no;

	/* store value in global variable using scope resolution operator */
	::no = no;

	/* loop the process using while loop */
	while (no != 0){
		mod = no % 10;
		ans += (mod * mod * mod);
		no = no / 10;
	}

	/* compare ans with global variable using scope resolution operator */
	if(ans == ::no)
		cout << "It's a Armstrong Number.\n";
	else
		cout << "It's not a Armstrong Number.\n";

	return 0;
}