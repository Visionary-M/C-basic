/*
    2026.8.26 14:05
    目的：测试for和if的嵌套使用
    功能：实现1-100中，奇数个数的输出
          实现1-100中，奇数和的输出
          实现1-100中，奇数平均值的输出
          实现1-100中，偶数和的输出
*/


#include <stdio.h>

int main(void)
{
    //变量
    int i;
    int sum_odd = 0;
    int sum_even = 0;
    int cnt_odd = 0; 
    float average = 0;

    //遍历分别求和
    for (i=1; i<=100; i++)
    {
        if (i%2 == 1)
        {
        cnt_odd ++;
        sum_odd += i;
        }
        else
        {
            sum_even += i;
        }

    }

    //奇数平均值
    average = (float)sum_odd / cnt_odd; 
    //由于C中的除法特性，两个整型相除，只会的得到整数,因此将sum_odd数值转化为浮点数
    //简易写法：average = 1.0 * sum_odd / cnt_odd;

    //输出
    printf("1-100之间的奇数个数是: %d\n", cnt_odd);
    printf("1-100之间的奇数和是: %d\n", sum_odd);
    printf("1-100之间的奇数平均值是: %f\n", average);
    printf("1-100之间的偶数和是: %d\n", sum_even);

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 1-100之间的奇数个数是: 50
 1-100之间的奇数和是: 2500
 1-100之间的奇数平均值是: 50.000000
 1-100之间的偶数和是: 2550
 ----------------------
*/