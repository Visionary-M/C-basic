/*
    2026.9.11 15:30
    目的：
        本代码无实际意义
        用于解决结构体变量和结构体
        指针变量作为函数传递的问题
    功能：
        通过函数，完成对结构体变量的输入和输出
        定义了两个函数
        InputStudent：对学生结构体进行输入
        OutputStudent：对学生结构体进行输出
        
        当只进行输出时，可以传递变量地址，
        也可以传递变量数据，但以传递地址更为优先

    指针的优点之一：
        1> 快速的传递数据
        2> 消耗内存小
        3> 执行速度快
        
*/

#include <stdio.h>
#include <string.h>

struct Student_1
{
    int age;
    char sex;
    char name[100];
};

void InputStudent (struct Student_1 *);
void OutputStudent(struct Student_1 *);

int main(void)
{
    // 初始化
    struct Student_1 st1;

    InputStudent(&st1);  // 对结构体变量输入
    OutputStudent(&st1);  // 对结构体变量输出

    return 0;
}

// 对结构体变量输入 必须发送其地址
void InputStudent (struct Student_1 * pstu)
{
    pstu->age = 10;
    strcpy(pstu->name,"张三"); 
    // 对于字符串，不能写成 stu.name = "张三"
    pstu->sex = 'F';
}

// 对结构体变量输出 
// 可以直发送结构体变量的地址（更优先）
// 也可以发送结构体变量的内容
void OutputStudent(struct Student_1 * pstu)
{
    printf("%d %c %s", pstu->age, pstu->sex, pstu->name);
}

/*
    在VScode中的输出结果是:
 ----------------------
 10 F 张三
 ----------------------
*/