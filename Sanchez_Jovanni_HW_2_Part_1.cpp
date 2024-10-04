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

    /* Here I get the user's Month and Day */

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
    fall between these ranges: (Within the range of days) AND
    (Withn the range of months). It must not exceed the start date
    nor the end date. */

    if ((givenMonth >= 3 && givenMonth <= 5) &&
            (givenDay >= 21 && givenDay <= 31) ||
        (givenMonth >= 4 && givenMonth <= 6) &&
            (givenDay >= 1 && givenDay <= 20))
    {
        /*
        For a day to be in Spring, it must:
        - Be within March 21 through May 31
        or
        - Be within April 1 through June 20
        */
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Spring!";
    }
    else if ((givenMonth >= 6 && givenMonth <= 8) &&
                 (givenDay >= 21 && givenDay <= 31) ||
             (givenMonth >= 7 && givenMonth <= 9) &&
                 (givenDay >= 1 && givenDay <= 22))
    {
        /*
        For a day to be in Summer, it must:
        - Be within June 21 through August 31
        or
        - Be within July 1 through September 22
        */
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Summer!";
    }
    else if ((givenMonth >= 9 && givenMonth <= 11) &&
                 (givenDay >= 23 && givenDay <= 31) ||
             (givenMonth >= 10 && givenMonth <= 12) &&
                 (givenDay >= 1 && givenDay <= 21))
    {
        /*
        For a day to be in Fall, it must:
        - Be within September 23 through November 31
        or
        - Be within October 1 through December 21.
        */
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Fall!";
    }
    else
    {
        /* If its neither Spring, Summer, or Fall, then
        it must be Winter. */
        cout << "On " << givenMonth << "/"
             << givenDay << ", it is now Winter!";
    }

    return 0;
}