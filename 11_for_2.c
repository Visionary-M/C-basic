/*
    2026.8.28 14:54
    目的：测试多个for语句嵌套使用的执行流程
*/

#include <stdio.h>

int main(void)
{
    int i, j;

    for(i = 0; i < 3; ++i)
        for (j = 4; j < 5; ++j)
            printf("AAAA\n");
    printf("BBBB\n");

    printf("\n");

    int x, y;

    for(x = 0; x < 3; ++x)
    {
        printf("cccc\n");
        for (y = 2; y < 5; ++y)
        {
            printf("aaaa\n");
        }
    }
    printf("bbbb\n");



    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 AAAA
 AAAA
 AAAA
 BBBB

 cccc
 aaaa
 aaaa
 aaaa
 cccc
 aaaa
 aaaa
 aaaa
 cccc
 aaaa
 aaaa
 aaaa
 bbbb
 ----------------------
*/