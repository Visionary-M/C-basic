/*
    2026.8.25 15:00
    目的: 
    测试 if... else if... else...语句的用法
    功能:
    实现用户的分数查询，按照不同等级输出结果
*/

#include <stdio.h>

int main(void)
{
    float score;
    printf("请输入您的考试成绩: ");
    scanf("%f", &score);

    if(score > 100)
        printf("这是做梦!\n");
    else if (score >= 90 && score <= 100)
        printf("优秀!\n");
    else if (score >= 80 && score < 90)
        printf("良好!\n");
    else if (score >= 60 && score < 80)
        printf("及格!\n");
    else if (score >= 0 && score < 60 )
        printf("不及格, 继续加油!\n");
    else 
        printf("您输入的分数过低!\n");

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 请输入您的考试成绩: 150
 这是做梦!

 请输入您的考试成绩: 95
 优秀!

 请输入您的考试成绩: 88
 良好!

 请输入您的考试成绩: 66
 及格!

 请输入您的考试成绩: 23
 不及格, 继续加油!

 请输入您的考试成绩: -1000
 您输入的分数过低!
 ----------------------
*/