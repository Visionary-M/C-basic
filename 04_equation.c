/*
思路：
    1.目标：实现一元二次方程 ax^2 + bx + c = 0
    2.变量：a, b, c, delta, x1, x2
    3.算法：
            a == 0
            该方程不是一元二次方程
            
            a != 0
            则结果如下
            delta > 0
            x1 = (-b + sqrt(delta)) / (2*a)
            x2 = (-b - sqrt(delta)) / (2*a)

            delta == 0
            x1 = (-b) / (2*a)
            x2 = x1

            delta < 0
            方程无解
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    //变量
    int a = 1;
    int b = 2;
    int c = 3;
    double delta;
    double x1;
    double x2;

    delta = b*b - 4*a*c;

    //判断
    if (a == 0)
    {
        printf("该方程不是一元二次方程");
    }
    else
    {
    
        //求解
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("该一元二次方程有两个解,x1 = %f,x2 = %f\n",x1,x2);
        }
        else if (delta == 0)
        {
            x1 = (-b) / (2*a);
            x2 = x1;
            printf("该一元二次方程有一个唯一解,x1 = x2 = %f\n",x1);
        }
        else
        {
            printf("该一元二次方程无解\n");
        }
    }
    
    return 0;
}