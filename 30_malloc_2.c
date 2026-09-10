/*
    2026.9.9 15:07
    目的：
        本代码无实际含义
        用于加深 malloc 函数分配动态内存
        free 释放所分配的内存的功能理解

*/

#include <stdio.h>
#include <stdlib.h>

void f(int * q)
{
    *q = 200;
}

int main(void)
{
    int * p = (int *)malloc(sizeof(int));
    //sizeof(int) 返回值是 int 所占的字节数
    *p = 10;

    printf("%d\n", *p);  //10
    f(p);
    printf("%d\n", *p);  //200

    free(p);

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 10
 200
 ----------------------
*/