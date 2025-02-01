#include <iostream>
using namespace std;

int main()
{
    int num1, num2, tmp;

    cout << "input two num" << endl;
    cin >> num1 >> num2;

    cout << "=== line ===" << endl;

    tmp =  num1;
    num1 =  num2;
    num2 =  tmp;
    cout << num1 << " " << num2;

    return 0;
}