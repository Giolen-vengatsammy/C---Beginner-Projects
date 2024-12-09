#include <iostream>

using namespace std;
int main(){

// Declare variables
int sum = 0;
int array[12];
int average;
string month[] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
cout << "Monthly Expense Calculator" << endl;

cout << "*****************************" << endl;

for(int i = 0; i<12; i++){
    cout << "Expense for " << month[i] << ":" << endl;
    cin >> array[i];
    sum = sum + array[i];
}

// Calculation of the monthly average expense
average = sum/12;

cout << "*****************************" << endl;

cout << "The total expense for the household for the year is: R" << sum << endl;
cout << "The average expense for a single month is: R" << average << endl;
    return 0;
}