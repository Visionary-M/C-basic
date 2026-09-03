/*
    2026.9.3 13:49
    目的：学习函数的定义和调用
    功能：定义比较的小输出最大值的函数，
          进行函数的调用，并比较对应的变量
*/

#include <stdio.h>

//函数的定义
//void 表示函数没有返回值
//max 是函数的名字
///i 和 j 是函数的形式参数，简称形参

//函数1：找到最大值，并输出
void max1(int i, int j)    
{
    if (i > j)
        printf("%d\n",i);
    else
        printf("%d\n",j);
}

//函数2：只找出最大值，并返回，输出操作于主函数中实现
int max2(int i, int j)    
{
    if (i > j)
        return i;
    else
        return j;
}


//主函数
//int 表示返回一个值
//void 表示不传入参数
//main 为主函数名称

int main(void)
{
    //变量
    int a, b, c, d, e, f;

    a = 1, b = 2, c = 3, d = 9, e = -5, f = 100;

    //函数的调用
    max1(a, b);
    max1(c, d);
    max1(e, f);

    printf("\n");

    printf("%d\n", max2(a, b));
    printf("%d\n", max2(c, d));
    printf("%d\n", max2(e, f));

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 2
 9
 100

 2
 9
 100
 ----------------------
*/