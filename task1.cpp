# task1.cpp
NUMBER GUESSING GAME
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int secretNumber = rand() % 100 + 1;// Seed for random number generator
    int guess;
    int nguesses = 0;
    cout << "WELCOME TO THE NUMBER GUESSING GAME!!" << endl;
    cout << "We have selected a random number between 1 to 100 try guessing it!!!!!!" << endl;
    do
    {
        cout << "ENTER A NUMBER : " << endl;
        cin >> guess;
        nguesses++;
        if (guess < secretNumber)
        {
            cout << "ENTER HIGHER NUMBER PLEASE THE NUMBER YOU ENTERED IS TOO LOW!" << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "ENTER LOWER NUMBER PLEASE!" << endl;
        }
        else
        {
            cout << "CONGRATULATIONSSS!!! And attempts you required is " << nguesses << endl;
        }

    } while (guess != secretNumber);
}
