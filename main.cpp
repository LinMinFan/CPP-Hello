#include <iostream>
using namespace std;

// 練習：饅頭之家住了大綠、小綠、阿藍、阿紫等四個人，其中大綠是小綠的姐姐，而且比她大三歲，阿藍則是比小綠年齡的兩倍少五歲，而阿紫年齡的十位數和阿藍相同、個位數和大綠相同。已知小綠的年齡，你能推算出阿紫是幾歲嗎？

int main()
{
    // 設定輸出為繁體中文
    setlocale(LC_ALL, "zh_TW.UTF-8");

    int age1, age2;

    cout << "enter sg age : ";

    cin >> age1;

    age2 = (age1 * 2 - 5) / 10 * 10 + (age1 + 3) % 10;

    cout << "pp age is : " << age2;

    return 0;
}