#include <iostream>
using namespace std;

int main()
{
    int n = 7, space, start;
    int mid = (n + 1) / 2;

    for (int i = 1; i <= 7; i++)
    {
        if (i <= mid)
        {
            space = mid - i;
            start = (i * 2) - 1;
        } else
        {
            space = i - mid;
            start = ((n + 1 - i) * 2) - 1;
        }

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= start; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    
    return 0;
}