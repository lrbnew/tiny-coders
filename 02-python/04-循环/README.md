# 🔄 关卡 4：循环

> 不用重复写代码，让程序自己重复做事！

---

## 🎯 本关目标

- [ ] 理解为什么需要循环
- [ ] 学会 `for` 循环
- [ ] 学会 `while` 循环
- [ ] 用循环打出九九乘法表！

## 📖 课程内容

### 为什么要用循环？

没有循环：
```python
print("加油！")
print("加油！")
print("加油！")
# 如果要打100次，要写100行代码！😭
```

有了循环：
```python
for i in range(100):
    print("加油！")
# 只需要2行！😄
```

### for 循环

```python
# 数数：从0数到4
for i in range(5):
    print(i)        # 输出：0 1 2 3 4

# 遍历一个列表
水果 = ["苹果", "香蕉", "橙子"]
for 每个水果 in 水果:
    print(每个水果)
```

### while 循环

```python
# 倒计时
count = 5
while count > 0:
    print(count)
    count = count - 1
print("发射！🚀")
```

## ✏️ 动手练习：九九乘法表

```python
for i in range(1, 10):
    for j in range(1, i + 1):
        print(j, "×", i, "=", i * j, end="  ")
    print()  # 换行
```

## 🏆 完成挑战

> 用循环打印出一个由 `*` 组成的三角形，高度由用户输入：
> ```
> *
> **
> ***
> ****
> ```

---

[⬅ 上一关：条件判断](../03-条件判断/README.md) ｜ [下一关：函数 ➡](../05-函数/README.md)
