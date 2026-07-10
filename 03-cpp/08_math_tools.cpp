#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int position = -7;
    int candies = 17;
    int students = 5;
    int square_area = 64;
    int side = 3;

    cout << "position = " << position << endl;
    cout << "abs(position) = " << abs(position) << endl;
    cout << endl;

    cout << candies << " 颗糖分给 " << students << " 个同学。" << endl;
    cout << "每人 " << candies / students << " 颗。" << endl;
    cout << "还剩 " << candies % students << " 颗。" << endl;
    cout << endl;

    cout << "面积是 " << square_area << " 的正方形，边长是 ";
    cout << sqrt(square_area) << endl;

    cout << side << " 的平方是 " << pow(side, 2) << endl;
    cout << side << " 的立方是 " << pow(side, 3) << endl;

    return 0;
}
