/*
    2026.9.13 22:46
    目的：
        通过本代码，我们将前面学的动态构造数组，
        指针，结构体以及冒泡排序的知识做了一个
        汇总的练习
        用于考察对前面知识点的掌握程度
        至此，有关嵌入式C语言的学习正式告一段落
    功能：
        一个学生信息管理系统
        通过输入函数，排序函数，输出函数
        实现老师对于学生信息的管理
*/

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int age;
    float score;
    char name[100];
}; 

//由于编译的顺序，结构体的定义不能在其函数声明后
void input_information (struct Student *, int);
void output_information(struct Student *, int);
void bubble_sort(struct Student *, int);

int main(void)
{
    int len;
    struct Student * pArr;

    // 学生数组的动态创建
    printf("请输入学生的个数：\n");
    printf("len = ");
    scanf("%d", &len);

    pArr = (struct Student *)malloc(len * sizeof(struct Student));

    // 输入
    input_information(pArr, len);

    // 输出
    output_information(pArr, len);

    //按照分数降序并输出
    bubble_sort(pArr, len);
    output_information(pArr, len);

    return 0;
}

//学生信息的输入
void input_information (struct Student * pArr, int len)
{
    int i;

    for(i=0; i<len; ++i)
        {
            printf("请输入第%d个学生的信息:\n", i+1);
            printf("学生的姓名：");
            scanf("%s", pArr[i].name);

            printf("学生的年龄：");
            scanf("%d", &pArr[i].age); //是否使用取地址符要看，其结构体成员对应的数据类型
            
            printf("学生的成绩：");
            scanf("%f", &pArr[i].score);
            printf("\n");
        }
}

//学生信息的输出
void output_information(struct Student * pArr, int len)
{
    int i;

    printf("\n\n学生的信息是:");

    for(i=0; i<len; ++i)
    {
        printf("\n");
        printf("第%d个学生的信息: \n", i+1);
        printf("学生的姓名：%s \n", pArr[i].name);
        printf("学生的年龄：%d \n", pArr[i].age);
        printf("学生的成绩：%.2f \n", pArr[i].score);
    }
}

//降序排序函数
void bubble_sort(struct Student * pArr, int len)
{
    int i, j;
    struct Student t;

    for(i=0; i<len-1; ++i)
    {
        for(j=0; j<len-1-i; ++j)
        {
            if(pArr[j].score < pArr[j+1].score)  // > 表示升； < 表示降
            {
                t = pArr[j];
                pArr[j] = pArr[j+1];
                pArr[j+1] = t;
            }
        }
    }
}

/*
    在VScode中的输出结果是:
 ----------------------
 输入学生的个数：
 len = 4
 请输入第1个学生的信息:
 学生的姓名：小白
 学生的年龄：14
 学生的成绩：52.6

 请输入第2个学生的信息:
 学生的姓名：小黑
 学生的年龄：13
 学生的成绩：66.4

 请输入第3个学生的信息:
 学生的姓名：小明
 学生的年龄：14
 学生的成绩：84.5

 请输入第4个学生的信息:
 学生的姓名：小红
 学生的年龄：13
 学生的成绩：77.2



 学生的信息是:
  第1个学生的信息: 
 学生的姓名：小白 
 学生的年龄：14 
 学生的成绩：52.60 

 第2个学生的信息: 
 学生的姓名：小黑 
 学生的年龄：13 
 学生的成绩：66.40 

 第3个学生的信息: 
 学生的姓名：小明 
 学生的年龄：14 
 学生的成绩：84.50 

 第4个学生的信息: 
 学生的姓名：小红 
 学生的年龄：13 
 学生的成绩：77.20 


 学生的信息是:
 第1个学生的信息: 
 学生的姓名：小明 
 学生的年龄：14 
 学生的成绩：84.50 

 第2个学生的信息: 
 学生的姓名：小红 
 学生的年龄：13 
 学生的成绩：77.20 

 第3个学生的信息: 
 学生的姓名：小黑 
 学生的年龄：13 
 学生的成绩：66.40 

 第4个学生的信息: 
 学生的姓名：小白 
 学生的年龄：14 
 学生的成绩：52.60 
 ----------------------
*/