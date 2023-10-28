#include <iostream>
#include <random>
#include <string>
using namespace std;

void game()
{
    int a;
    string name;
    int no_of_rounds;
    random_device rd;
    uniform_int_distribution<int> d(1, 3);
    int computer_choice = d(rd);

    int computer_point = 0;
    int your_point = 0;
    int choice;
    int round = 1;
    cout << "Welcome....Let's play Rock, Paper and Scissor \n";
    cout << "Please Enter your name:" << endl;
    getline(cin, name);
    system("clear");

    cout << "How many rounds you want to play : \n";
    cin >> no_of_rounds;
    system("clear");

    while (no_of_rounds--)
    {

        cout << "ROUND " << round << " starts. \n\n";
        round++;

        cout << "1.Rock\n";
        cout << "2.Paper\n";
        cout << "3.Scissor\n";
        cout << "4.exit\n";

        cout << "Enter your choice : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << name << " selected rock\n\n";
            break;
        case 2:
            cout << name << " selected paper\n\n";
            break;
        case 3:
            cout << name << " selected scissor\n\n";
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "error invalid option\n";
            break;
        }

        switch (computer_choice)
        {
        case 1:
            cout << "computer selected rock\n\n";
            break;
        case 2:
            cout << "computer selected paper\n\n";
            break;
        case 3:
            cout << "computer selected scissor\n\n";
            break;
        }

        if (computer_choice == 1 && choice == 1 || computer_choice == 2 && choice == 2 || computer_choice == 3 && choice == 3)
        {
            computer_point = computer_point;
            your_point = your_point;
        }
        if (computer_choice == 1 && choice == 2 || computer_choice == 2 && choice == 3 || computer_choice == 3 && choice == 2)
        {
            your_point++;
        }
        if (computer_choice == 1 && choice == 3 || computer_choice == 2 && choice == 1 || computer_choice == 3 && choice == 1)
        {
            computer_point++;
        }

        cout << "end of " << round - 1 << " round:\n\n";
        cout << name << " points : " << your_point << "\n\n";
        cout << "computer points : " << computer_point << "\n\n";
        cout << "enter any number to continue : ";
        cin >> a;
        system("clear");
    }

    if (your_point > computer_point)
    {
        cout << name << " is the winner.\n\n";
    }
    else if (your_point < computer_point)
    {
        cout << "computer is the winner.\n\n";
    }
    else
        cout << "Match drawn.\n\n";

    cout << "End of the game.\n\n";
}
int main()
{
    game();
    int choice1;
    cout << "1. Play Again\n\n";
    cout << "2. Exit\n\n";
    cout << "Enter your choice : ";
    cin >> choice1;

    switch (choice1)
    {
    case 1:
        game();
        break;
    case 2:
        exit(0);
        break;
    default:
        cout << "Invalid option.\n\n";
        break;
    }

    return 0;
}