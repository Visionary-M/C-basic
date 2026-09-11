/*
    2026.9.11 15:30
    目的：
        本代码无实际意义
        用于学习对结构体进行赋值，以及输出
*/

#include <stdio.h>

struct Student_1
{
    int age;
    float score;
    char sex;
};

int main(void)
{
    // 初始化
    struct Student_1 st1 = {80, 99.5, 'F'};

    // 赋值
    struct Student_1 st2;
    st2.age = 10;
    st2.score = 88;
    st2.sex = 'F';

    // 输出
    printf("%d %f %c \n", st1.age, st1.score, st1.sex);
    printf("%d %f %c \n", st2.age, st2.score, st2.sex);

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 80 99.500000 F 
 10 88.000000 F
 ----------------------
*/