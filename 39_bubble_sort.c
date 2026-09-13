/*
    2026.9.13 17:25
    目的：
        本代码用于练习和理解冒泡排序算法
    功能：
        数组通过指针传入函数
        函数依照冒泡排序将对应数组进行升序排列

*/

#include <stdio.h>

void sort(int * a, int len)
{
    int i, j;
    int t;

    for(i=0; i<len-1; ++i)
    {
        for(j=0; j<len-1-i; ++j)
        {
            if(a[j] > a[j+1])  // > 表示升； < 表示降
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}

int main(void)
{
    int a[6] = {10, 2, 8, -8, 11, 0};
    int i = 0;

    sort(a, 6);

    for(i=0; i<6; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 -8 0 2 8 10 11
 ----------------------
*/