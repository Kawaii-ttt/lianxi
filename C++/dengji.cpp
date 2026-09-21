#include <stdio.h>
int main()
{
    int Age = 20, Num = 1101055;
    char Sex = 'M';
    char name[20] = "张三";
    float Score = 209.5;
    printf("姓名=%s 年龄=%d 学号=%d 性别=%c 成绩=%0.1f\n", name, Age, Num, Sex, Score);
    return 0;
}