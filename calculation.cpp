#include <iostream>

using namespace std;

int main() {
	int a, b;

	cout << "Enter a value:\n";
	cin >> a;

	cout << "Enter another value:\n";
	cin >> b;

	cout << "Sum: " << a + b << "\n";
	cout << "Substract: " << a - b << "\n";
	cout << "Multiplication: " << a * b << "\n";
	cout << "Division: " << a / b << "\n";
	cout << "Modulus: " << a % b << "\n";

	return 0;
}