/*
    2026.8.25 16:02
    名称：数字排序(降序)
    功能：用户输入任意三个整数，将三个整数按照降序进行输出
    思路：
        1.目标：实现数字排序
        2.变量：a, b, c, 中间变量empty
        3.算法：
            a 与 b 进行比较
            a < b, 则 a 与 b 进行交换

            a 与 c 进行比较
            a < c, 则 a 与 c 进行交换

            b 与 c 进行比较
            b < c, 则 b 与 c 进行交换

            其中交换方式沿用 6_swap digits.c 中的思路
   
*/

#include <stdio.h>

int main(void)
{   
    //变量
    int a, b, c;
    int empty;

    //输入
    printf("请输入三个整数(中间以空格分隔): ");
    scanf("%d %d %d", &a, &b, &c);

    //大小排序
    if(a < b)
    {
        empty = a;
        a = b;
        b = empty;
    }
    
    if(a < c)
    {
        empty = a;
        a = c;
        c = empty;
    }

    if(b < c)
    {
        empty = b;
        b = c;
        c = empty;
    }

    //输出
    printf("%d %d %d", a, b, c);

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 请输入三个整数(中间以空格分隔): 5 8 9
 9 8 5
 ----------------------
*/