/*
    2026.9.10 16:35
    目的：
        本代码无实际含义
        用于学习和理解多级指针的定义

*/

#include <stdio.h>

int main(void)
{
    int i = 10;
    int * p = &i;
    int ** q = &p;
    int *** r = &q;

 // r = &p // error 因为 r 是 int *** 类型
 // r 只能存放 int ** 类型变量的地址
    printf("i = %d\n", ***r);

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 i = 10
 ----------------------
*/