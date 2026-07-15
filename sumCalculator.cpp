#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n = 1;
    int ip;
    char op;
    cout << "enter your number : ";
    cin >> ip;

    cout << "o for odd sum , e for even sum , a for sum of all numbers : ";
    cin >> op;

    if (op == 'o')
    {

        for (n = 1; n <= ip; n = n + 1)
            if (n % 2 != 0)

            {
                sum = n + sum;
            }
    }
    else if (op == 'e')

    {
        for (n = 1; n <= ip; n = n + 1)
            if (n % 2 == 0)
            {
                sum = n + sum;
            }
    }
    else if (op == 'a')
    {
        for (n = 1; n <= ip; n = n + 1)
        {
            sum = sum + n;
        }
    }
    else
    {
        cout << "invalid operation " << endl;
    }

    cout << "sum : " << sum << endl;

    return 0;
}
