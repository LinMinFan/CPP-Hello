#include <iostream>
using namespace std;

int main()
{
    float f, c;

    cout << "enter C temperature" << endl;
    cin >> c;
    f = c * 9 / 5 + 32;
    cout << "F temperature: " << f << endl;
    return 0;
}