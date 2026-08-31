/*
    2026.8.31 16:19
    目的：理解switch语句的逻辑
    功能：模拟电梯输入楼层
          到达对应的楼层给用户提示
*/

#include <stdio.h>

int main(void)
{
    int val;

    printf("请输入您想到达的楼层: ");
    scanf("%d", &val);

    switch (val)
    {
    case 1:
        printf("1层到了! \n");
        break;

    case 2:
        printf("2层到了! \n");
        break;

    case 3:
        printf("3层到了! \n");
        break;

    default:
        printf("暂时还没有这个楼层哦! \n");
        break;
    }

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 请输入您想到达的楼层: 1
 1层到了!

 请输入您想到达的楼层: 2
 2层到了!

 请输入您想到达的楼层: 3
 3层到了! 

 请输入您想到达的楼层: 5
 暂时还没有这个楼层哦!
 ----------------------
*/