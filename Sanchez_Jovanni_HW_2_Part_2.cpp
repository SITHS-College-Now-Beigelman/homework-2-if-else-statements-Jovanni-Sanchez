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

#include <array>
#include <iostream>
using namespace std;

int main()
{
    int currentJudge;            // Used for iteration.
    float lowestScore;           // Will be asigned to the lowest score.
    float highestScore;          // Will be asigned to the highest score.
    float theTotalScore;         // Will be assigned to the sum of all scores.
    array<float, 6> judgeScores; // A list that can only hold 6 floats.

    /* Hear me out, I know that arrays are advanced at my current level of knowledge,
    but 8 DIFFERENT VARIABLES were a pain to deal with. I had to type so much in order to
    get those 8 varaiables to even SLIGHTY work in the same way it does now. So I went ahead
    and taught myself how to use arrays. In the beginning it was annoying, but I got to this
    point. I'm so happy because now everything is automated, clean, and less bug-ridden due to
    having to deal with less variables. */

    for (currentJudge = 1; currentJudge <= judgeScores.size(); currentJudge = currentJudge + 1)
    {
        /* You may have noticed that we used judgeScores.size() as the limit for iterations
        instead of a int. judgeScores.size() returns the limit of things that are allowed in the
        list. The reason we do this is if the number of judges changes, all we have to do is change
        the size of the list (<float, 6>) to whatever is needed and that will update all for loops to
        the brand new limit of judges needed.  */

        float tmpJudgeScores; // A temporary float that only exist in this for loop.

        cout << "Judge " << currentJudge << ", what is your score?: ";
        cin >> tmpJudgeScores; // We iterate thorugh each judge and ask what their score is.

        while (tmpJudgeScores < 0 || tmpJudgeScores > 10)
        {
            cout << "Invalid Score. "
                 << "Remember, you're scoring the projects "
                 << "between 0.0 and 10.0.\n"
                 << "Enter a valid score: ";
            cin >> tmpJudgeScores;
            /* If the judge's score is less than 0 and greater than 10,
            its considered invalid, thus they are made to enter a new
            valid score. */
        }

        judgeScores[currentJudge] = tmpJudgeScores;
        // Once the judge enters a vaild score, it's stored within the list for later use.
    }

    for (currentJudge = 1; currentJudge <= judgeScores.size(); currentJudge++)
    {
        /* The purpose of this loop is to iterate through all the scores stored within the list
        after the first loop and add them together.'theTotalScore' value is zero, so we just add 0
        to all the values to eventually get the sum. The sum of the scores is asigned to the variable
        'theTotalScore'. */

        theTotalScore = theTotalScore + judgeScores[currentJudge];
    }

    /* This 'if' statement is used to find out the lowest score. We start out with the 1st score and
    the rest of the list. If the 1st score is not the lowest score, its ruled out. Possible scores are
    ruled out until the actual lowest score is found. Once found, it's assigned to the 'lowestScore'
    variable. */

    if (judgeScores[1] < judgeScores[2] && judgeScores[3] &&
        judgeScores[4] && judgeScores[5] && judgeScores[6])
    {
        lowestScore = judgeScores[1];
    }
    else if (judgeScores[2] < judgeScores[3] &&
             judgeScores[4] && judgeScores[5] && judgeScores[6])
    {
        lowestScore = judgeScores[2];
    }
    else if (judgeScores[3] < judgeScores[4] &&
             judgeScores[5] && judgeScores[6])
    {
        lowestScore = judgeScores[3];
    }
    else if (judgeScores[4] < judgeScores[5] && judgeScores[6])
    {
        lowestScore = judgeScores[4];
    }
    else if (judgeScores[5] < judgeScores[6])
    {
        lowestScore = judgeScores[5];
    }
    else
    {
        lowestScore = judgeScores[6];
    }

    /* The same rules for determining the lowest score apply for determining the highest
    score. Possible highest scores are ruled out until the highest score is found and assigned
    to the 'highestScore' variable. */

    if (judgeScores[1] > judgeScores[2] && judgeScores[3] &&
        judgeScores[4] && judgeScores[5] && judgeScores[6])
    {
        highestScore = judgeScores[1];
    }
    else if (judgeScores[2] > judgeScores[3] &&
             judgeScores[4] && judgeScores[5] && judgeScores[6])
    {
        highestScore = judgeScores[2];
    }
    else if (judgeScores[3] > judgeScores[4] &&
             judgeScores[5] && judgeScores[6])
    {
        highestScore = judgeScores[3];
    }
    else if (judgeScores[4] > judgeScores[5] && judgeScores[6])
    {
        highestScore = judgeScores[4];
    }
    else if (judgeScores[5] > judgeScores[6])
    {
        highestScore = judgeScores[5];
    }
    else
    {
        highestScore = judgeScores[6];
    }

    /* After the lowest and highest score are finally determined, we subtract them
    from the total score and diving it by four in order to print out the final score
    for the project. The final score of the project is average of the four remaining
    scores, excluding the lowest and highest score. */

    cout << "The Final score for this Hackathon project is: "
         << (theTotalScore - (lowestScore + highestScore)) / 4;

    return 0;
}