/*
    2026.9.7 15:48
    目的：
        用于加深对基本类型指针的理解
    功能：
        互换两个数字
  
*/

#include <stdio.h>

void swap_1(int , int );
void swap_2(int *, int *);
void swap_3(int *, int *);

//主函数
int main(void)
{
    int a = 3;
    int b = 5;

    swap_1(a, b);
    printf("a = %d b = %d\n", a, b);

    swap_2(&a, &b);
    printf("a = %d b = %d\n", a, b);

    swap_3(&a, &b);
    printf("a = %d b = %d\n", a, b);
  
    return 0;
}

//无法完成互换
void swap_1(int a, int b)
{
    int t;

    t = a;
    a = b;
    b = t;

    return;
}

//无法完成互换，交换的是p和q的地址，而不是值
void swap_2(int * p, int * q)
{
    int * t; 

    t = p;
    p = q;
    q = t;

    return;
}

//成功，需要交换的并不是地址，而是值，因此用 *q 和 *p
void swap_3(int * p, int * q)
{
    int  t; 

    t = *p;
    *p = *q;
    *q = t;

    return;
}

/*
    在VScode中的输出结果是:
 ----------------------
 a = 3 b = 5
 a = 3 b = 5
 a = 5 b = 3
 ----------------------
*/