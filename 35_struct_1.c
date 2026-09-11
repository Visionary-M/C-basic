/*
    2026.9.11 15:30
    目的：
        本代码无实际意义
        用于学习结构体的基础定义
        以及了解其用法和相关知识

    结构体：
        用于模拟一个复杂的事物
        而将基本属性汇总于一起
    实际意义：
        把一些基本类型数据组合在一起，
        形成一个新的复合数据类型
   
*/

#include <stdio.h>

// 结构体的定义

// 方式1
// 结构体单独定义，
// 结构体变量于主函数中定义
// 推荐使用第一种

struct Student_1 
{
    int age;     // 年龄
    float score; // 分数
    char sex;    // 性别
};

// 方式二
// 结构体的定义后紧跟变量名

struct Student_2 
{
    int age;     // 年龄
    float score; // 分数
    char sex;    // 性别
} st2;

// 方式三
// 不定义类型名
// 直接定义变量

struct 
{
    int age;     // 年龄
    float score; // 分数
    char sex;    // 性别
} st3;


int main(void)
{
    struct Student_1 st1 = {80, 99.5, 'F'};
    // 用所创建的数据类型定义了一个名为 st 的变量
    // st 是变量名，并对该结构体变量进行了赋值

    return 0;
}