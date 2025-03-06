#include <iostream>
using namespace std;

// Function to perform addition
double add(double a, double b) {
	return a + b;
}

// Function to perform multiplication
double multiply(double a, double b) {
	return a * b;
}

int main() {
	double num1, num2;

	// Get user input
	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	// Perform addition and multiplication
	double result_add = add(num1, num2);
	double result_multiply = multiply(num1, num2);

	// Display the results
	cout << "The sum of " << num1 << " and " << num2 << " is: " << result_add << endl;
	cout << "The product of " << num1 << " and " << num2 << " is: " << result_multiply << endl;

	return 0;
}
