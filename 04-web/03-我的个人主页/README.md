# 🏠 关卡 3：我的个人主页

> 综合运用 HTML 和 CSS，做出一个完整的个人主页！

---

## 🎯 本关目标

- [ ] 设计并实现个人主页布局
- [ ] 包含：个人介绍、爱好、作品展示
- [ ] 页面美观，颜色搭配协调
- [ ] 能在浏览器中正常打开

## 📖 页面结构设计

```
┌─────────────────────────┐
│       顶部导航栏         │
├─────────────────────────┤
│   头像  │  姓名 + 简介   │
├─────────────────────────┤
│        我的爱好          │
├─────────────────────────┤
│        我的作品          │
├─────────────────────────┤
│        底部版权          │
└─────────────────────────┘
```

## 💻 起始模板

```html
<!DOCTYPE html>
<html lang="zh">
<head>
  <meta charset="UTF-8">
  <title>___的个人主页</title>
  <style>
    /* 在这里写你的 CSS 样式 */
    body {
      font-family: "微软雅黑", sans-serif;
      margin: 0;
      background: #f0f4ff;
    }
    header {
      background: #4a90e2;
      color: white;
      padding: 20px;
      text-align: center;
    }
    /* 继续完善… */
  </style>
</head>
<body>
  <header>
    <h1>欢迎来到___的主页！</h1>
  </header>
  
  <section id="about">
    <h2>关于我</h2>
    <p>___</p>
  </section>
  
  <!-- 继续添加更多内容 -->
</body>
</html>
```

## 🏆 完成挑战

> 给你的主页加一个「回到顶部」按钮，点击后平滑滚动到页面顶部！
> 提示：`scroll-behavior: smooth;`

---

[⬅ 上一关：加颜色和图片](../02-加颜色和图片/README.md) ｜ [🏠 返回网页目录](../README.md)
