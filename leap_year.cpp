/* Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year. */

#include <iostream>

int main() {
  
  int y = 0;  // Input the year = 0
  
  std::cout << "Enter year: ";  // Ask to enter a random year
  std::cin >> y;  // Make sure the input = year
  
  if (y < 1000 || y > 9999) {  // The restriction of the numeric input of a valid year
    
    std::cout << "Invalid entry.\n"; // invalid because if y < 1000 does not have the century, and if over 9999 it is not the year which is 4-digit number
    
  }
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {  // Leap year can be divided by 4 and 100, so group them 

    std::cout << y;
    std::cout << " falls on a leap year.\n";
    
  }
  else {
    
    std::cout << y;
    std::cout << " is not a leap year.\n"; // And so on the remaining
    
  }
  
}
