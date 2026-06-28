#include <iostream>
#include <vector>
#include <string>

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

int main()
{
    vector<Problem> problems;

    int choice = 0;

    while (choice != 6)
    {
        cout << "\n=========================================\n";
        cout << "     Competitive Programming Tracker\n";
        cout << "=========================================\n";

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
            cout << "\n[Add Problem Coming Soon]\n";
            break;

        case 2:
            cout << "\n[View Problems Coming Soon]\n";
            break;

        case 3:
            cout << "\n[Search Problem Coming Soon]\n";
            break;

        case 4:
            cout << "\n[Delete Problem Coming Soon]\n";
            break;

        case 5:
            cout << "\n[Statistics Coming Soon]\n";
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