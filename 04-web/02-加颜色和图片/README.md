# 🎨 关卡 2：加颜色和图片

> 用 CSS 给网页穿上漂亮的衣服，再插入图片让页面更生动！

---

## 🎯 本关目标

- [ ] 理解 CSS 是什么
- [ ] 给文字和背景换颜色
- [ ] 调整字体大小和居中
- [ ] 在页面里插入一张图片

## 📖 课程内容

### CSS 是什么？

CSS 是网页的「化妆师」，负责控制颜色、大小、位置等外观。

### 在 HTML 中使用 CSS

```html
<head>
  <style>
    /* 这里写 CSS */
    body {
      background-color: lightblue;   /* 背景颜色 */
      font-family: "楷体";           /* 字体 */
    }

    h1 {
      color: red;                    /* 文字颜色 */
      text-align: center;            /* 居中 */
    }

    p {
      font-size: 20px;               /* 字体大小 */
    }
  </style>
</head>
```

### 插入图片

```html
<img src="图片文件名.jpg" alt="图片描述" width="300">
```

## ✏️ 动手练习

给上一关的自我介绍页面加上样式：
1. 背景换成你喜欢的颜色
2. 标题居中，颜色改变
3. 加一张你喜欢的图片

## 🏆 完成挑战

> 用 CSS 制作一个颜色渐变的背景！
> 提示：`background: linear-gradient(颜色1, 颜色2);`

---

[⬅ 上一关：我的第一个网页](../01-我的第一个网页/README.md) ｜ [下一关：个人主页 ➡](../03-我的个人主页/README.md)
