#include <iostream>
using namespace std;

void printYesNo(int value) {
    if (value == 1) {
        cout << "YES";
    } else {
        cout << "NO ";
    }
}

void drawAndGate(int left, int right) {
    int result = left && right;

    cout << "\n[AND: &&  与]" << endl;
    cout << "两边都要 YES，门才会打开。" << endl;
    cout << endl;
    cout << " homework done? "; printYesNo(left);  cout << " ----\\" << endl;
    cout << "                              >---- ";
    if (result) {
        cout << "[ OPEN ]  可以出门玩" << endl;
    } else {
        cout << "[CLOSED]  先别冲向操场" << endl;
    }
    cout << " bag ready?     "; printYesNo(right); cout << " ----/" << endl;
    cout << endl;
    cout << "记法: && 像两个门卫，两个都点头才放行。" << endl;
}

void drawOrGate(int left, int right) {
    int result = left || right;

    cout << "\n[OR: ||  或]" << endl;
    cout << "只要有一个 YES，就算通过。" << endl;
    cout << endl;
    cout << " has umbrella? "; printYesNo(left);  cout << " ----\\" << endl;
    cout << "                             )---- ";
    if (result) {
        cout << "[ SAFE ]  今天不怕淋成面条" << endl;
    } else {
        cout << "[ WET  ]  书包可能要喝水" << endl;
    }
    cout << " not raining?  "; printYesNo(right); cout << " ----/" << endl;
    cout << endl;
    cout << "记法: || 像两条路，有一条能走就行。" << endl;
}

void drawNotGate(int value) {
    int result = !value;

    cout << "\n[NOT: !  非]" << endl;
    cout << "把条件反过来。" << endl;
    cout << endl;
    cout << " sleepy? ";
    printYesNo(value);
    cout << " ----[ ! ]---- ";
    if (result) {
        cout << "NOT sleepy: YES  大脑像小火箭" << endl;
    } else {
        cout << "NOT sleepy: NO   眼皮准备关门" << endl;
    }
    cout << endl;
    cout << "记法: ! 像反转按钮，YES 变 NO，NO 变 YES。" << endl;
}

int main() {
    int homeworkDone;
    int bagReady;
    int hasUmbrella;
    int raining;
    int sleepy;

    cout << "=== 与、或、非 ASCII 闯关图 ===" << endl;
    cout << "请用 1 表示 YES，用 0 表示 NO。" << endl;
    cout << endl;

    cout << "作业写完了吗？";
    cin >> homeworkDone;

    cout << "书包收好了吗？";
    cin >> bagReady;

    cout << "带雨伞了吗？";
    cin >> hasUmbrella;

    cout << "现在下雨吗？";
    cin >> raining;

    cout << "现在困吗？";
    cin >> sleepy;

    drawAndGate(homeworkDone, bagReady);
    drawOrGate(hasUmbrella, !raining);
    drawNotGate(sleepy);

    cout << "\n小结:" << endl;
    cout << "&& : 两边都是真，结果才是真。" << endl;
    cout << "|| : 有一边是真，结果就是真。" << endl;
    cout << "!  : 把真假反过来。" << endl;

    return 0;
}
