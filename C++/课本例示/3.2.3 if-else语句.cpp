// 文件：3.2.3 if-else语句.cpp
// 整体总结：原意是输入两个整数 a、b，若 b 为 0 则输出除零提示，
// 否则输出 a / b 的浮点结果。
#include <stdio.h> // 引入标准输入输出库，使用 scanf 和 printf
void main()        // 程序主函数，原代码使用旧式 void main
{
    int a, b;                        // 定义整型变量 a 和 b
    scanf("%d%d", &a, &b);           // 读取两个整数
    if (b == 0)                      // 判断 b 是否等于 0
        printf("Divided by zero\n"); // 如果 b 等于 0，输出除零提示
    else                             // 如果 b 不等于 0
        printf("%f", 1.0 * a / b);   // 把 a 转成浮点参与除法，输出 a / b 的浮点结果
}