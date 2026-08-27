/*
    2026.8.24 12:28
    目的：
    测试%x, %X, %#x, %#X 的用法
*/

#include <stdio.h>

int main(void)
{
    int x = 47;

    printf("%x\n", x);    //输出结果是: 2f
    printf("%X\n", x);    //输出结果是: 2F
    printf("%#x\n", x);   //输出结果是: 0x2f
    printf("%#X", x);     //输出结果是: 0X2F  推荐使用

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 2f
 2F
 0x2f
 0X2F
 ----------------------
*/