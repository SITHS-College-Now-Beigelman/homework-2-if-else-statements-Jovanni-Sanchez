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

    /* Here we get the user's Month and Day */

    cout << "Please enter a month numerically (1-12): ";
    cin >> givenMonth;

    while (givenMonth < 1 || givenMonth > 12)
    {
        cout << "Invalid month. "
             << "Please type a number 1 through 12 corresponding to "
             << "your month: ";
        cin >> givenMonth;
    }

    cout << "Please enter a day of the month (1-29, 1-30, 1-31): ";
    cin >> givenDay;

    /* For certain months, the limit is either lowered or raised */

    if (givenMonth == 1 || givenMonth == 3 || givenMonth == 5 ||
        givenMonth == 7 || givenMonth == 8 || givenMonth == 10 ||
        givenMonth == 12) // For every month with 31 days
    {
        // Getting real technical now...
        // I got to learn a more efficent way of doing this :c
        while (givenDay < 1 || givenDay > 31)
        {
            cout << "Invalid day. "
                 << "Please type a number 1 through 31 corresponding to "
                 << "your day: ";
            cin >> givenDay;
        }
    }
    else if (givenMonth == 2) // why are you special ;-;
    {
        // Leap year is stupid and so is feburary >:(
        while ((givenDay < 1 || givenDay > 29) && (givenMonth == 2))
        {
            cout << "Invalid day. "
                 << "Please type a number 1 through 29 corresponding to "
                 << "your day in Feburary: ";
            cin >> givenDay;
        }
    }
    else // Everything else
    {
        while ((givenDay < 1 || givenDay > 30))
        {
            cout << "Invalid day. "
                 << "Please type a number 1 through 30 corresponding to "
                 << "your day: ";
            cin >> givenDay;
        }
    }

    /* Below is the actual functions that determine the seasons */
    /* To determine if a day is in a certain season, it has to be
    one of these: (The start date) or (Withn the range of months)
    or (The end date) */

    if ((givenMonth == 3 && givenDay == 21) ||
        (givenMonth >= 3 && givenMonth <= 6) ||
        (givenMonth == 6 && givenDay == 20))
    {
        // For a day to be in Spring, it must:
        // Be March 21
        // or
        // Be within March through June
        // or
        // Be June 20
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Spring!";
    }
    else if ((givenMonth == 6 && givenDay >= 21) ||
             (givenMonth >= 6 && givenMonth <= 9) ||
             (givenMonth == 9 && givenDay <= 22))
    {
        // For a day to be in Summer, it must:
        // Be June 21
        // or
        // Be within June through September
        // or
        // Be September 22
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Summer!";
    }
    else if ((givenMonth == 9 && givenDay >= 23) ||
             (givenMonth >= 9 && givenMonth <= 12) ||
             (givenMonth == 12 && givenDay >= 21))
    {
        // For a day to be in Fall, it must:
        // Be September 23
        // or
        // Be within September through December
        // or
        // Be December 21
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Fall!";
    }
    else
    {
        // If all else fails, its Winter
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Winter!";
    }

    return 0;
}