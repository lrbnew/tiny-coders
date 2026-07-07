#include <iostream>
using namespace std;

int main() {
    int age;
    int height;

    cout << "请输入你的年龄：";
    cin >> age;

    cout << "请输入你的身高，单位厘米：";
    cin >> height;

    cout << endl;
    cout << "===== 小学生档案卡 =====" << endl;
    cout << "年龄：" << age << " 岁" << endl;
    cout << "身高：" << height << " 厘米" << endl;
    cout << "C++ 学习状态：刚开始，但已经能让电脑说话了。" << endl;

    return 0;
}
