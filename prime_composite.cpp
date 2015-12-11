#include <iostream>

using namespace std;

int main(){
	int i, no;

	/* Declaer boolean type variable */
	bool flag = true;

	cout << "Check the given number is Prime or Composite." << endl;
	cout << "Enter a number: " << endl;
	cin >> no;

	i = no / 2;

	/* Loop the process */
	while(i >= 2){
		if(no % i == 0){
			flag = false;
			cout << "It's a Composite Number." << endl;
			break;
		}
		i = i - 1;
	}

	if(flag)
		cout << "It's a Prime Number." << endl;

	return 0;
}