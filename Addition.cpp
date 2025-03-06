#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    //Ask user to enter first number 	
    cout << "Enter first number: ";
    cin >> num1;

    //Ask user to enter second number 
    cout << "Enter second number: ";
    cin >> num2;

    //Assign add function value to result varieble
    int result = add(num1, num2);

    //Display output
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
