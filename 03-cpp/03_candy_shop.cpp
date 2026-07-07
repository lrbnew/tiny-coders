#include <iostream>
using namespace std;

int main() {
    int money;
    int price = 2;

    cout << "你带了几元钱？";
    cin >> money;

    int candy = money / price;
    int left = money % price;

    cout << "每颗糖 " << price << " 元。" << endl;
    cout << "你可以买 " << candy << " 颗糖。" << endl;
    cout << "还剩 " << left << " 元。" << endl;

    return 0;
}
