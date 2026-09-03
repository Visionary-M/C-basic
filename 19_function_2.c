/*
    2026.9.3 14:25
    目的：学习函数的一些注意事项
*/

#include <stdio.h>

//括号中的void表示该函数不能接收数据
//int 表示函数的返回值是int类型
int f(void) 
{
    return 10;
}

//函数名前面的void表示该函数没有返回值
void g(void) 
{
//  return 10; //error 与g函数的定义相矛盾
}

//因为函数的返回值类型是int
//最终返回的值是10，而不是10.5
int h(void)
{
    return 10.5;
}

int main(void)
{
    int j;
    j = 88;

    j = f();
    printf("%d\n",j);

//  j = g(); //error 因为g函数没有返回值

    j = h();
    printf("%d\n",j);

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 10
 10
 ----------------------
*/