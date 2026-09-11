/*
    2026.9.11 15:30
    目的：
        本代码无实际意义
        用于学习如何 取得或改变 结构体变量中的任一成员
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

    //第一种方式
    st1.age = 10;  

    //第二种方式
    struct Student_1 * pst = & st1; // 不能改成st1
    pst->age = 88; // 等价于 (*pst).age 和 st1.age
    st1.score = 66.6f;
    // 66.6 在 C 中默认是 double 型
    // 如果希望一个实数是 float 类
    // 则必须在末尾加 f 或 F
    // 因此 66.6 为 double ，66.6f 和 66.6F为 float

    printf("%d %f\n", st1.age, pst->score);

    return 0;
}

/*
    在VScode中的输出结果是:
 ----------------------
 88 66.599998
 ----------------------
*/