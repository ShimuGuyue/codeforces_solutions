令 a < b

LCM(a, b) >= b

求出 a, b 使得 LCM(a, b)  == b

所以 b 是 a 的倍数

把 n 等分成 k 份，a 取一份，剩下的给 b

k 越小，b越小，结果越小

k的取值为 2 - sqrt(n)，因为如果存在 k >  sqrt(n)， 一定存在 k <sqrt(n)