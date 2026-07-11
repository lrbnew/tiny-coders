#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// 1. 绘制平方与平方根的“方阵”
void drawSquare(int side) {
    cout << "\n=============================================" << endl;
    cout << " ◆ 魔法阵：边长为 " << side << " 的正方形 (平方)" << endl;
    cout << "=============================================" << endl;
    cout << "算式: " << side << " * " << side << " = " << side * side << " (或者写成 " << side << "² = " << side * side << ")\n" << endl;
    
    for (int i = 0; i < side; i++) {
        cout << "  "; // 左侧缩进
        for (int j = 0; j < side; j++) {
            cout << "■ "; // 使用实心方块表示一个小格子
        }
        cout << endl;
    }
    cout << endl;
    cout << "💡 小学生理解指南：" << endl;
    cout << "1. 【平方 (Square)】：把一个数乘以自己。就像用这个数字当作【边长】拼出一个正方形，拼出来的【总格子数】就是它的平方！" << endl;
    cout << "   - 边长是 " << side << "，总面积(格子数)就是 " << side * side << "。" << endl;
    cout << "2. 【平方根 (Square Root)】：这是平方的【逆向魔法】！" << endl;
    cout << "   - 如果有人给你一个有 " << side * side << " 个格子的正方形，问你它的【边长】是多少？" << endl;
    cout << "   - 答案就是 " << side << "。所以，" << side * side << " 的平方根就是 " << side << " (写作 √" << side * side << " = " << side << ")！" << endl;
    cout << "=============================================" << endl;
}

// 2. 绘制立方的“多层方阵” (3次方)
void drawCube(int side) {
    cout << "\n=============================================" << endl;
    cout << " ◆ 3D 魔法阵：边长为 " << side << " 的立方体 (3次方/立方)" << endl;
    cout << "=============================================" << endl;
    cout << "算式: " << side << " * " << side << " * " << side << " = " << side * side * side << " (或者写成 " << side << "³ = " << side * side * side << ")\n" << endl;
    
    cout << "我们可以把它拆成 " << side << " 层，每一层都是一个 " << side << "x" << side << " 的正方形：\n" << endl;
    
    for (int layer = 1; layer <= side; layer++) {
        cout << "  [第 " << layer << " 层] (高度位置):" << endl;
        for (int i = 0; i < side; i++) {
            // 用空格缩进做出一点立体感
            cout << "  ";
            for (int k = 0; k < side - layer; k++) {
                cout << "  ";
            }
            for (int j = 0; j < side; j++) {
                cout << "■ ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    cout << "💡 小学生理解指南：" << endl;
    cout << "1. 【立方 (Cube)】：把一个数连乘三次。就像拼一个立体的积木魔方！" << endl;
    cout << "2. 计算方法：每一层有 " << side << " * " << side << " = " << side * side << " 个积木。总共有 " << side << " 层。" << endl;
    cout << "   - 所以总共需要：" << side * side << " (每层) * " << side << " (层) = " << side * side * side << " 个小积木！" << endl;
    cout << "=============================================" << endl;
}

// 3. 用 ASCII 字符画函数图像
void plotFunction(int choice) {
    // 画面尺寸：高 15，宽 45
    const int HEIGHT = 15;
    const int WIDTH = 45;
    vector<string> grid(HEIGHT, string(WIDTH, ' '));

    // 绘制坐标轴
    // x 轴在底部第 HEIGHT - 2 行
    int xAxisRow = HEIGHT - 2;
    // y 轴在最左侧第 3 列
    int yAxisCol = 3;

    // 填充轴线
    for (int x = 0; x < WIDTH; x++) {
        grid[xAxisRow][x] = '-';
    }
    for (int y = 0; y < HEIGHT; y++) {
        grid[y][yAxisCol] = '|';
    }
    grid[xAxisRow][yAxisCol] = '+';
    grid[0][yAxisCol] = '^'; // y轴箭头
    grid[xAxisRow][WIDTH - 1] = '>'; // x轴箭头

    // 填充函数点
    // 屏幕上的 x 列从 yAxisCol+1 到 WIDTH-2
    for (int col = yAxisCol + 1; col < WIDTH - 2; col++) {
        double x_math = 0;
        double y_math = 0;

        if (choice == 1) {
            // y = x^2 (平方)
            x_math = (col - yAxisCol) * 0.1; // x 范围：0 到 4.0
            y_math = x_math * x_math;       // y 范围：0 到 16.0
        } else if (choice == 2) {
            // y = 2^x (指数乘方)
            x_math = (col - yAxisCol) * 0.1; // x 范围：0.1 到 4.0
            y_math = pow(2.0, x_math);       // y 范围：1.0 到 16.0
        } else if (choice == 3) {
            // y = sqrt(x) (平方根)
            x_math = (col - yAxisCol) * 3.0; // x 范围：3.0 到 120.0
            y_math = sqrt(x_math);           // y 范围：1.7 到 11.0
        }

        // 将数学上的 y_math 转换为屏幕上的行号 row
        // 数学 y 轴向上，而屏幕行号向下 (第 0 行在最顶部)
        // 缩放因子：假定 y 轴最大能容纳 12.0
        int row = xAxisRow - (int)(y_math * 1.0); 
        
        if (row >= 0 && row < xAxisRow) {
            grid[row][col] = '*';
        }
    }

    // 打印图像和解释
    cout << "\n=============================================" << endl;
    if (choice == 1) {
        cout << " 📈 平方曲线：y = x² (x 的平方)" << endl;
        cout << "=============================================" << endl;
        cout << "💡 观察要点：" << endl;
        cout << "   - 曲线像一个碗的右半边，越往右走，爬坡的速度【越变越快】！" << endl;
        cout << "   - 比如：1的平方是1，2的平方是4，3的平方是9...增加速度在加速！" << endl;
    } else if (choice == 2) {
        cout << " 🚀 指数爆炸曲线：y = 2ˣ (2 的 x 次方)" << endl;
        cout << "=============================================" << endl;
        cout << "💡 观察要点：" << endl;
        cout << "   - 这是著名的【指数爆炸】！刚开始比平方(x²)还要矮，" << endl;
        cout << "     但只要 x 稍微变大，它就会像冲天火箭一样，垂直飞上天！" << endl;
        cout << "   - 翻倍的力量：1 -> 2 -> 4 -> 8 -> 16 -> 32 -> 64 -> 128...无敌的速度！" << endl;
    } else if (choice == 3) {
        cout << " 🐢 平方根曲线：y = √x (x 的平方根)" << endl;
        cout << "=============================================" << endl;
        cout << "💡 观察要点：" << endl;
        cout << "   - 这是个【慢性子】曲线。刚开始起步挺快，但越往右走，" << endl;
        cout << "     爬坡就【越变越慢】，越来越平缓！" << endl;
        cout << "   - 因为它是平方的逆运算：想要 y 增加 1，x 就得变成原来的平方！" << endl;
        cout << "     比如 y 想从 3 变成 10，x 必须从 9 猛增到 100！" << endl;
    }

    cout << "\n   y (数值大小)" << endl;
    for (int r = 0; r < HEIGHT; r++) {
        cout << "   " << grid[r] << endl;
    }
    cout << "   " << string(yAxisCol + 1, ' ') << "x (自变量)" << endl;
    cout << "=============================================" << endl;
}

int main() {
    // 设置中文编码支持（在某些系统上有用）
    // setlocale(LC_ALL, "");

    cout << "===================================================" << endl;
    cout << "      🌟 小学生数学图形魔法世界 (C++ 版) 🌟        " << endl;
    cout << "  在这里，我们将用生动的图形，帮你彻底搞懂：" << endl;
    cout << "      【乘方】 (Power) / 【平方根】 (Square Root)" << endl;
    cout << "===================================================" << endl;

    while (true) {
        cout << "\n🧙 请选择你要施展的数学图形魔法：" << endl;
        cout << "  1. 🔑 拼出【平方】和【平方根】的魔法正方形阵" << endl;
        cout << "  2. 🎂 拼出【立方】(3次方) 的 3D 积木蛋糕" << endl;
        cout << "  3. 📈 绘制【平方】(y = x²) 曲线图" << endl;
        cout << "  4. 🚀 绘制【指数/2的次方】(y = 2ˣ) 火箭图" << endl;
        cout << "  5. 🐢 绘制【平方根】(y = √x) 慢行图" << endl;
        cout << "  0. 🚪 离开数学魔法世界" << endl;
        cout << "👉 请输入选项数字 (0-5): ";

        int choice;
        if (!(cin >> choice)) {
            // 处理输入错误，防止死循环
            cin.clear();
            string dummy;
            cin >> dummy;
            cout << "❌ 哎呀，你念错咒语了！请输入 0 到 5 之间的数字。" << endl;
            continue;
        }

        if (choice == 0) {
            cout << "\n✨ 叮！数学魔法书合上了。加油，小勇士，我们下次再见！" << endl;
            break;
        }

        if (choice == 1) {
            cout << "💬 请输入正方形的边长 (建议 1 到 8 之间的整数): ";
            int side;
            cin >> side;
            if (side < 1 || side > 15) {
                cout << "⚠️ 哎呀，边长太小或者太大啦，屏幕装不下！请输入 1 到 15 的数字。" << endl;
            } else {
                drawSquare(side);
            }
        } else if (choice == 2) {
            cout << "💬 请输入立方体的边长 (建议 2 到 5 之间的整数): ";
            int side;
            cin >> side;
            if (side < 1 || side > 8) {
                cout << "⚠️ 哎呀，边长太小或者太大啦，屏幕装不下！请输入 1 到 8 的数字。" << endl;
            } else {
                drawCube(side);
            }
        } else if (choice >= 3 && choice <= 5) {
            plotFunction(choice - 2);
        } else {
            cout << "❌ 没有这个魔法选项，请重新选择！" << endl;
        }
    }

    return 0;
}
