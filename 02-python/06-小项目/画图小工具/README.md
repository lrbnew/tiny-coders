# 🎨 项目：画图小工具

> 用 Python 的 turtle 模块，让程序帮你画出漂亮的图案！

---

## 🎯 项目说明

用 Python 内置的 `turtle`（小海龟）模块，通过编程控制一只小海龟在画布上移动，它走过的路径就会留下线条，形成各种图形！

## 💻 完整代码

```python
import turtle

# 设置画布
turtle.bgcolor("black")    # 背景黑色
turtle.speed(0)            # 最快速度

def 画正方形(边长, 颜色):
    turtle.color(颜色)
    for _ in range(4):
        turtle.forward(边长)
        turtle.right(90)

def 画彩色螺旋():
    颜色列表 = ["red", "orange", "yellow", "green", "cyan", "blue", "purple"]
    for i in range(100):
        turtle.color(颜色列表[i % 7])
        turtle.forward(i * 2)
        turtle.right(91)

def 画花朵(花瓣数):
    for _ in range(花瓣数):
        turtle.circle(50, 60)
        turtle.left(120)
        turtle.circle(50, 60)
        turtle.left(360 / 花瓣数 - 120)

# 运行
画彩色螺旋()
turtle.done()
```

## 🏆 挑战升级

1. 让用户选择画什么：正方形、花朵还是螺旋？
2. 让用户输入颜色和大小
3. 画一棵圣诞树 🎄

---

[⬅ 返回小项目目录](../README.md)
