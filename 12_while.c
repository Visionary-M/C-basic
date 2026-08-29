/*
    2026.8.29 14:23
    目的：测试while语句的使用
    功能：从键盘输入一个数字
          如果数字是回文数
          则返回yes，否则返回no
*/

#include <stdio.h>

int main(void)
{
    //变量
    int val;  //存放待判断的数字
    int m;
    int sum = 0;

    //输入
    printf("请输入您需要判断的数字: ");
    scanf("%d", &val);

    //换位求和
    m = val;
    while (m)
    {
        sum = sum * 10 + m%10;
        m /= 10;
    }

    //判断
    if(sum == val)
        printf("Yes!\n");
    else
        printf("No!\n");
    
    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 请输入您需要判断的数字: 12
 No!

 请输入您需要判断的数字: 12321
 Yes!
 ----------------------
*/