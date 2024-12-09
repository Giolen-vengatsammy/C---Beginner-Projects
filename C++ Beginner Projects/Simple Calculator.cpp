#include <iostream>
#include <cmath>

using namespace std;
int main () {
    // Declare variables
    double number1, number2;
    string operation;

    // Prompt user to enter numbers
    cout << "Enter First Number: ";
    cin >> number1;
    cout << "Enter Operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter Second Number: ";
    cin >> number2;

    // Checking different entered operations
    if (operation == "+") {
        cout << number1 + number2;
        } else if (operation == "-") {
             cout << number1 - number2;
        } else if (operation == "*") {
             cout << number1 * number2;
        } else if (operation == "/" && number2 !=0) {
             cout << number1 / number2; 
        } else {
            cout << "Invalid operation or math error!" << endl;
            }

         return 0;

}