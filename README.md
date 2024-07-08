#include <iostream>
using namespace std;

int main() {
    
    int guess;
    
    int tries = 0;
    
    cout << "I have a number from 1 to 10\n";
    cout << "Please guess it: ";
    cin >> guess;
    
    while (guess != 8 && guess < 50) {
        
        cout << "Wrong guess, try again: ";
        cin >> guess;
        
    }
    if (guess == 8) {
        cout << "You got it\n";
    }
    return 0;
    
}
