先把 A 和 B 合并，

因为 X 是整数，

所以 pow(X, n) 是整数，

所以 B / A 是整数即 B % A == 0

然后分析特殊情况：

0 乘任何数都得 0

任何数乘 0 都得 0

最后根据 B / A 的正负性，暴力枚举得到 X 的值