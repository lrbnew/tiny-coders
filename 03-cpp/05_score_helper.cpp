#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "请输入一次考试分数：";
    cin >> score;

    if (score >= 90) {
        cout << "优秀！作业本都想给你鼓掌。" << endl;
    } else if (score >= 80) {
        cout << "不错！再细心一点会更强。" << endl;
    } else if (score >= 60) {
        cout << "及格！基础要继续补牢。" << endl;
    } else {
        cout << "别灰心，先把错题怪兽一个个抓出来。" << endl;
    }

    return 0;
}
