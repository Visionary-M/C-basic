/*
    2026.8.25 15:36
    功能:
    实现两个变量间的数据交换
    算法：
    取一中间量，用于存储原始量，
    进行对应赋值，即可实现交换
*/

#include <stdio.h>

int main(void)
{
    //变量
    int i = 3;
    int j = 4;
    int empty = 0;
    
    printf("原始数据: i = %d, j = %d\n", i, j);

    //交换
    empty = i;
    i = j;
    j = empty;

    printf("交换后: i = %d, j = %d\n", i, j);

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 原始数据: i = 3, j = 4
 交换后: i = 4, j = 3
 ----------------------
*/