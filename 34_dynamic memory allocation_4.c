/*
    2026.9.9 16:50
    目的：
        本代码无实际意义
        是用于进一步明确动态内存分配的重要性
        明确动态内存能够跨函数使用的优越性
        与 33_dynamic memory allocation_3.c 进行对比
   
*/

#include <stdio.h>
#include <stdlib.h>

void f(int ** q)
{
    *q = (int *)malloc(sizeof(int));
    // 等价于 p = (int *)malloc(sizeof(int));
    **q = 5;
}

int main(void)
{
    int * p;

    f(&p);
    printf("%d\n", *p);
    // 本程序分配的一个动态空间
    // 当函数运行时，所分配的动态空间并不会随着
    // 函数结束时释放
    // 因此此时这个语句是合法访问 p 所指向的空间
    free(p);

    return 0;
}