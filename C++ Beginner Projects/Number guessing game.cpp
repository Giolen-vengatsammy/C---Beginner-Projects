#include <iostream>
using namespace std;

int main() {

// Declare variables
int num;
int guess;
int tries = 0;
srand(time(0));
num = (rand() % 100) + 1;

cout << "NUMBER GUESSING GAME" << endl;
cout << "******************** \n";

do{
    cout << "Enter a guess between (1-100): "<< endl;
    cin >> guess;
    tries++;

    if(guess > num){
        cout << "Wrong! Your guess is too high!" << endl;
        
        }else if(guess < num){
        cout << "Wrong! Your guess is too low!" << endl;
        
        }else {
            cout << "CORRECT! # of tries: " << tries << endl;
        }

} while(guess != num);

cout << "End of Game. Thank YOU!";

    return 0;
}