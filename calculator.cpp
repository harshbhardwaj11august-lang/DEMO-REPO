#include <iostream>
using namespace std;
int main()
{
    char command = 'y';
    while (command == 'y' || command == 'Y')
    {

        int a;
        int b;
        char op;
        cout << "ENTER THE FIRST NUMBER : ";
        cin >> a;
        cout << "ENTER THE SECOND NUMBER : ";
        cin >> b;

        cout << "choose your operation + - * / : ";
        cin >> op;
        if (op == '+')
        {
            int sum = a + b;
            cout << "answer " << sum;
        }
        else if (op == '-')
        {
            int difference = a - b;
            cout << "answer " << difference;
        }
        else if (op == '*')
        {
            int product = a * b;
            cout << "answer " << product;
        }
        else if (op == '/')
        {

            float answer = (float)a / (float)b;
            cout << "answer " << answer;
        }
        else
        {
            cout << "invalid operator";
        }
        cout << endl;

        cout << "DO YOU WANT TO CONTINUE : Y/N : ";
        cin >> command;

        cin.ignore();
    }

    cout << "GOOD BYE ! ";

    return 0;
}
