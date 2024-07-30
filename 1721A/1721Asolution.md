```c++
abcd -> aaaa：四个颜色
    //b->a
    //c->a
    //d->a
aabc || abbc -> aaaa：三个颜色
    //b->a || bb->aa
    //c->a
aaab || aabb || abbb -> aaaa：两个颜色
    //b->a || bb->aa || bbb->aaa
aaaa -> aaaa：一个颜色，不变
```

