#include <iostream>
using namespace std;
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
int main() {
 srand(static_cast<unsigned int>(time(0))); // seed the random number generato
 
int secretNumber = rand() % 100 + 1; // generate a random number between 1 and 100

 int guess;
 int attempt= 0;
cout << "     Welcome to the Guessing Game!\n";
cout << "\nI have chosen a number between 1 and 100.\n";
 do {
 cout << "Enter your guess: ";
 cin >> guess;
 ++attempt;
 if (guess > secretNumber) {
 cout << "Too high!\n";
 } else if (guess < secretNumber) {
 cout << "Too low!\n";
 } else {
 cout << "Congratulations! You guessed it right in " << attempt <<
" attempt! \n";
 break;
 }
 if (attempt >= 7){
 cout << "Sorry, you've reached the maximum number of attempt.\n";

 cout << "The secret number was: " << secretNumber << "\n";
 break;
 }
 } while (true);
 cout << "Thank you for playing the Guessing Game!\n";
 return 0;
}

