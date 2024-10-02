// Jovanni Sanchez
// October 1, 2024
// Homework 2, Part 1

/* Write a program that takes two integer inputs from the user, month and day,
and prints the season corresponding to the month (1 = January, 12 = December)
and day in the northern hemisphere. */

#include <iostream>
using namespace std;

int main()
{
    int givenMonth;
    int givenDay;

    cout << "Please enter a month numerically (1-12): ";
    cin >> givenMonth;

    while (givenMonth < 1 || givenMonth > 12)
    {
        cout << "Invalid month. "
             << "Please type a number 1 through 12 corresponding to "
             << "your month: ";
        cin >> givenMonth;
    }

    cout << "Please enter a day of the month (1-30): ";
    cin >> givenDay;

    while (givenDay < 1 || givenDay > 30)
    {
        cout << "Invalid month. "
             << "Please type a number 1 through 30 corresponding to "
             << "your day: ";
        cin >> givenDay;
    }

    if ((givenMonth >= 3 && givenMonth <= 6) || (givenDay >= 21 && givenDay <= 20))
    {
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Spring!";
    }
    else if ((givenMonth >= 6 && givenMonth <= 9) || (givenDay >= 21 && givenDay <= 22))
    {
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Summer!";
    }
    else if ((givenMonth >= 9 && givenMonth <= 12) || (givenDay >= 23 && givenDay <= 21))
    {
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Fall!";
    }
    else
    {
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Winter!";
    }

    return 0;
}