/*
    2026.9.5 14:50
    目的：
        以判断一个数是否为素数为例子
        用于探讨开发软件时，如何正确使用函数
    功能：
        求1到某个数之间（包括该数字）的素数，并输出
        用户从键盘输入一个数，来确定范围
        遍历范围内的数，并调用判断该数是否为素数的函数
        返回为真，输出该值
        返回为假，则到下一个值进行判断
        最终将对应值全部输出
    思路：
        使用一个函数来判断一个数字是否是素数
        优点：
            1> 代码比 21_function_4.c 更容易理解
            2> 代码的可重用性比 21_function_4.c 高
        缺点：
            可重用性仍然不是非常高
            如求1-10000个数字
            他们每个数字从1到它本身的素数
            则：
            for(i=2; i<=val; ++i)
            {
                if (is_prime(i))
                    printf("%d\n", i);
            }
            需要重复1000次
        
*/

#include <stdio.h>
#include <stdbool.h>

//判断是否为素数
bool is_prime(int val)
{
    int i;

    for(i=2; i<val; ++i)
    {
        if(0 == val % i)
            break;
    }
    
    if (i == val)
        return true;
    else
        return false;
}

//主函数
int main(void)
{
    int val;
    int i;

    printf("你要求的范围为: 1-");
    scanf("%d", &val);

    //遍历1-val
    for(i=2; i<=val; ++i)
    {
        if (is_prime(i))
            printf("%d\n", i);
    }

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 你要求的范围为: 1-5
 2
 3
 5
 ----------------------
*/