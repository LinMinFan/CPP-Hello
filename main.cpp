#include <iostream>
using namespace std;

int main()
{
    int num, factorial, sum;
    sum = 0;

    cout << "enter a num" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        factorial = 1;

        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }

        sum +=  factorial;
    }

    cout << "sum is : " << sum << endl;
    
    return 0;
}