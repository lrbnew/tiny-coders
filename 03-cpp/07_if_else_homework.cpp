#include <iostream>
using namespace std;

int main() {
    int homework;

    cout << "今天作业还剩几题？";
    cin >> homework;

    if (homework < 0) {
        cout << "题数不能是负数，作业本不会倒贴题目。" << endl;
    } else if (homework == 0) {
        cout << "作业清空！文具盒已经开始放假。" << endl;
    } else if (homework <= 3) {
        cout << "只剩 " << homework << " 题，胜利已经在门口探头。" << endl;
    } else if (homework <= 10) {
        cout << "还有 " << homework << " 题，先别和沙发深情对视。" << endl;
    } else if (homework > 20) {
        cout << "超过 20 题，可能要被打屁股了，赶紧写！" << endl;
    } else {
        cout << "还有 " << homework << " 题，建议先打开本子，铅笔正在等你。" << endl;
    }

    return 0;
}
