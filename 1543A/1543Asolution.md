如果 a == b, gcd(a ,b) == a == b，

如果一直进行第一种操作，gcd(a, b)可以无限大



令 a > b

gcd(a, b) == gcd(a - b, b)

令dif = a - b 值始终不变，因此 gcd(dif, b)最大值为 dif

只需将 b 变为 dif 的倍数

