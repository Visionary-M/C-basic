/*
    本代码为 printf 输出练习
*/

#include <stdio.h>
int main(void)
{
    //整数
    int number;

    printf("输入一个整数:");

    scanf("%d",&number);

    printf("你输入的整数是: %d \n",number);

    //字符
    char c;
    c = 'A';
    printf("c的值为 %c \n",c);

    //浮点数
    float f;
    f = 12.001234;
    printf("f 的值为 %f \n",f);

    //双精度数
    double d;
    d = 12.001234;
    printf("d 的值为 %le \n",d);

    return 0;
}