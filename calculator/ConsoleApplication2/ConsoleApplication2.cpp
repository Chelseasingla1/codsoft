#include<iostream>
#include<cmath>

using namespace std;

int main() {
	string operations;
	double a, b;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter  Operation(+, -, * , /): ";
	cin >> operations;
	cout << "Enter second number: ";
	cin >> b;

	if (operations == "+") {
		cout << a + b;
	}
	else if (operations == "-") {
		cout << a - b;
	}
	else if (operations == "*")
	{
		cout << a * b;
	}
	else if (operations == "/")
	{
		cout << a / b;
	}
	else {
		cout << "Not a recognized operation";
	}
	return 0;
}