#include <iostream>

using namespace std;

int main(){
	int marks;

	cout << "Enter a the marks of a subject for grade calculation:\n";
	cin >> marks;

	if(marks >= 90)
		cout << "Grade: A+\n";
	else if(marks >= 80)
		cout << "Grade: A\n";
	else if(marks >= 60)
		cout << "Grade: B\n";
	else if(marks >= 40)
		cout << "Grade: C\n";
	else 
		cout << "Grade: D\n";

	return 0;
}