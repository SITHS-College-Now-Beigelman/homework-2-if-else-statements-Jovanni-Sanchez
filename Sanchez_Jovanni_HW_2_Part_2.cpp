// Jovanni Sanchez
// October 1, 2024
// Homework 2, Part 2

/* We are running a hackathon and giving a prize for the best project!
The score for each hackathon project is determined by a panel of 6 judges.
Each judge gives a score between 0.0 and 10.0. The final score for a project
is determined by discarding the highest and lowest of the six scores, and
averaging the remaining 4. Create a program to calculate the final score
for a hackathon project. Your program should take the 6 judge scores as inputs
and compute and print the final score for a hackathon project. */

#include <iostream>
using namespace std;

int main()
{
    float judgeOneScore;
    float judgeTwoScore;
    float judgeThreeScore;
    float judgeFourScore;
    float judgeFiveScore;
    float judgeSixScore;

    cout << "Judge 1, what is your score?: ";
    cin >> judgeOneScore;

    while (judgeOneScore < 0 || judgeOneScore > 10)
    {
        cout << "Invalid Score. "
             << "Remember, you're scoring the projects "
             << "between 0.0 and 10.0. "
             << "Enter a valid score: ";
        cin >> judgeOneScore;
    }

    cout << "Judge 2, what is your score?: ";
    cin >> judgeTwoScore;

    while (judgeTwoScore < 0 || judgeTwoScore > 10)
    {
        cout << "Invalid Score. "
             << "Remember, you're scoring the projects "
             << "between 0.0 and 10.0. "
             << "Enter a valid score: ";
        cin >> judgeTwoScore;
    }

    cout << "Judge 3, what is your score?: ";
    cin >> judgeThreeScore;

    while (judgeThreeScore < 0 || judgeThreeScore > 10)
    {
        cout << "Invalid Score. "
             << "Remember, you're scoring the projects "
             << "between 0.0 and 10.0. "
             << "Enter a valid score: ";
        cin >> judgeThreeScore;
    }

    cout << "Judge 4, what is your score?: ";
    cin >> judgeFourScore;

    while (judgeFourScore < 0 || judgeFourScore > 10)
    {
        cout << "Invalid Score. "
             << "Remember, you're scoring the projects "
             << "between 0.0 and 10.0. "
             << "Enter a valid score: ";
        cin >> judgeFourScore;
    }

    cout << "Judge 5, what is your score?: ";
    cin >> judgeFiveScore;

    while (judgeFiveScore < 0 || judgeFiveScore > 10)
    {
        cout << "Invalid Score. "
             << "Remember, you're scoring the projects "
             << "between 0.0 and 10.0. "
             << "Enter a valid score: ";
        cin >> judgeFiveScore;
    }

    cout << "Judge 6, what is your score?: ";
    cin >> judgeSixScore;

    while (judgeSixScore < 0 || judgeSixScore > 10)
    {
        cout << "Invalid Score. "
             << "Remember, you're scoring the projects "
             << "between 0.0 and 10.0. "
             << "Enter a valid score: ";
        cin >> judgeSixScore;
    }

    return 0;
}