/*
    2026.9.3 15:34
    目的：练习函数的定义，以及对函数返回结果的后续处理
    功能：
        判断一个数字是否是素数
        用户从键盘输入一个数
        调用判断该数是否为素数的函数
        最终根据函数的返回值，输出对应的结果
*/

#include <stdio.h>
#include <stdbool.h>

//判断用户输出的数是否为素数
bool is_prime(int val)
{
    int i;

    for(i=2; i<val; ++i)
    {
        if(val % i == 0)
            break;
    }
    
    if (i == val)
        return true;
    else
        return false;
}

int main(void)
{
    int m;
    
    //输入
    printf("请输入你要判断的数: ");
    scanf("%d", &m);

    //对函数的返回结果进行处理
    if(is_prime(m))
        printf("是的, 这个数是素数!");
    else
        printf("不, 这个数不是素数!");
    
    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 请输入你要判断的数: 13
 是的, 这个数是素数!

 请输入你要判断的数: 4
 不, 这个数不是素数!
 ----------------------
*/