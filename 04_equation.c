/*
    2026.8.31 15:41
    目的：
        实现一元二次方程 ax^2 + bx + c = 0
        并通过do ... whlie 语句，实现较好的人机交互    
    思路：
        变量：a, b, c, delta, x1, x2
        算法：
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
    double a, b, c;
    double delta;
    double x1, x2;
    char ch;

    do
    {
        //用户输入
        printf("请输入一元二次方程的三个系数:\n ");
        printf("a = ");
        scanf("%lf", &a);

        printf(" b = ");
        scanf("%lf", &b);

        printf(" c = ");
        scanf("%lf", &c);

        delta = b*b - 4*a*c;

        //判断
        if (a == 0)
        {
            printf("该方程不是一元二次方程\n");
        }
        else
        {
            //求解
            if (delta > 0)
            {
                x1 = (-b + sqrt(delta)) / (2*a);
                x2 = (-b - sqrt(delta)) / (2*a);
                printf("该一元二次方程有两个解,x1 = %lf,x2 = %lf\n",x1,x2);
            }
            else if (0 == delta)
            {
                x1 = x2 = (-b) / (2*a);
                printf("该一元二次方程有一个唯一解,x1 = x2 = %lf\n",x1);
            }
            else
            { 
                printf("该一元二次方程无解\n");
            }
        }

        printf("您还想继续吗(Y/N): ");
        scanf(" %c", &ch); // %c 前面必须加一个空格

    } while ('y' == ch || 'Y' == ch);

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 请输入一元二次方程的三个系数:
 a = 1
 b = -5
 c = 6
 该一元二次方程有两个解,x1 = 3.000000,x2 = 2.000000
 您还想继续吗(Y/N): y
 请输入一元二次方程的三个系数:
 a = 1
 b = 2
 c = 1
 该一元二次方程有一个唯一解,x1 = x2 = -1.000000
 您还想继续吗(Y/N): y
 请输入一元二次方程的三个系数:
 a = 1
 b = 1
 c = 5
 该一元二次方程无解
 您还想继续吗(Y/N): y
 请输入一元二次方程的三个系数:
 a = 0
 b = 2
 c = 3
 该方程不是一元二次方程
 您还想继续吗(Y/N): n
 ----------------------
*/