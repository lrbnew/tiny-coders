#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float price = 2.5;
    float count = 3;
    float total = price * count;

    cout << "饼干单价：" << price << " 元" << endl;
    cout << "购买数量：" << count << " 块" << endl;

    cout << fixed << setprecision(2);
    cout << "应付金额：" << total << " 元" << endl;

    float average = total / 2;
    cout << "如果两个人平分，每人付：" << average << " 元" << endl;

    return 0;
}
