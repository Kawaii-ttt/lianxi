#include <stdio.h>
int main()
{
    const int Age = 20;
    const int Num = 1101055;
    const char Sex = 'M';
    char name[20] = "张三";
    const float Score = 209.5f;
    printf("姓名=%s 年龄=%d 学号=%d 性别=%c 成绩=%0.1f\n", name, Age, Num, Sex, Score);
    return 0;
}