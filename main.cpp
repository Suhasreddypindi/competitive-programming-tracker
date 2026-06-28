#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Problem
{
public:
    string name;
    string platform;
    string difficulty;
    string topic;
    string dateSolved;
    int timeTaken;
};

void addProblem(vector<Problem>& problems)
{
    Problem problem;

    cin.ignore();

    cout << "\n========== Add Problem ==========\n";

    cout << "Problem Name           : ";
    getline(cin, problem.name);

    cout << "Platform               : ";
    getline(cin, problem.platform);

    cout << "Difficulty             : ";
    getline(cin, problem.difficulty);

    cout << "Topic                  : ";
    getline(cin, problem.topic);

    cout << "Date Solved (DD-MM-YYYY): ";
    getline(cin, problem.dateSolved);

    cout << "Time Taken (minutes)   : ";
    cin >> problem.timeTaken;

    problems.push_back(problem);

    cout << "\nProblem added successfully!\n";
}

string shorten(string text, int limit)
{
    if (text.length() <= limit)
        return text;

    return text.substr(0, limit - 3) + "...";
}

void viewProblems(const vector<Problem>& problems)
{
    if (problems.empty())
    {
        cout << "\nNo problems added yet.\n";
        return;
    }

    cout << "\n==================== Saved Problems ====================\n\n";

    cout << left
         << setw(35) << "Problem"
         << setw(15) << "Platform"
         << setw(10) << "Level"
         << setw(15) << "Topic"
         << setw(15) << "Date"
         << setw(8) << "Time"
         << "\n";

    cout << string(98, '-') << "\n";

    for (const auto &problem : problems)
    {
        cout << left
             << setw(35) << shorten(problem.name, 32)
             << setw(15) << problem.platform
             << setw(10) << problem.difficulty
             << setw(15) << problem.topic
             << setw(15) << problem.dateSolved
             << setw(8) << problem.timeTaken
             << "\n";
    }
}

void searchProblem(const vector<Problem>& problems)
{
    if (problems.empty())
    {
        cout << "\nNo problems added yet.\n";
        return;
    }

    cin.ignore();

    string searchName;
    bool found = false;

    cout << "\n===== Search Problem =====\n";
    cout << "Enter Problem Name: ";
    getline(cin, searchName);

    for (const auto& problem : problems)
    {
        if (problem.name == searchName)
        {
            cout << "\nProblem Found!\n\n";

            cout << "Problem    : " << problem.name << endl;
            cout << "Platform   : " << problem.platform << endl;
            cout << "Difficulty : " << problem.difficulty << endl;
            cout << "Topic      : " << problem.topic << endl;
            cout << "Date       : " << problem.dateSolved << endl;
            cout << "Time Taken : " << problem.timeTaken << " minutes\n";

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nProblem not found.\n";
    }
}

int main()
{
    vector<Problem> problems;

    int choice = 0;

    while (choice != 6)
    {
        cout << "\n==================================================\n";
        cout << "        Competitive Programming Tracker\n";
        cout << "==================================================\n";

        cout << "1. Add Problem\n";
        cout << "2. View Problems\n";
        cout << "3. Search Problem\n";
        cout << "4. Delete Problem\n";
        cout << "5. Statistics\n";
        cout << "6. Exit\n\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addProblem(problems);
            break;

        case 2:
            viewProblems(problems);
            break;

        case 3:
            searchProblem(problems);
            break;

        case 4:
            cout << "\nFeature not implemented yet.\n";
            break;

        case 5:
            cout << "\nFeature not implemented yet.\n";
            break;

        case 6:
            cout << "\nThank you for using Competitive Programming Tracker!\n";
            break;

        default:
            cout << "\nInvalid choice. Please try again.\n";
        }
    }

    return 0;
}