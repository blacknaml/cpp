#include <iostream>
using namespace std;

int main(){
	int no, i = 1, sum = 0;

	cout << "Check the given number is Perfect Number or not." << endl;
	cout << "Enter a number: " << endl;
	cin >> no;

	while(i < no){
		if(no % i == 0){
			sum += i;
		}
		i++;
	}

	if(sum == no)
		cout << no << " is a Perfect Number." << endl;
	else 
		cout << no << " is not a Perfect Number." << endl;

	return 0;
}