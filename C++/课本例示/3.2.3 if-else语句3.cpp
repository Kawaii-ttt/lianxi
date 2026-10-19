// 文件：3.2.3 if-else语句3.cpp
// 整体总结：演示 if-else 语句的执行流程。
// 当 a > b 成立时，把 a 赋给 x 并输出 a；否则把 b 赋给 x。
// 最后无论条件如何，都会再输出 b。
#include <stdio.h> // 引入标准输入输出库，使用 printf
void main()        // 程序主函数，原代码使用旧式 void main
{
    int a = 30, b = 20, x; // 定义 a、b、x，并初始化 a 为 30，b 为 20
    if (a > b)             // 判断 a > b，即 30 > 20，成立
    {                      // if 语句块开始
        x = a;             // 把 a 的值赋给 x
        printf("%d\n", a); // 输出 a 的值，预期输出 30
    } // if 语句块结束
    else               // 如果 a > b 不成立，则执行 else 分支
        x = b;         // 把 b 的值赋给 x；本例中 if 成立，本行不执行
    printf("%d\n", b); // 输出 b 的值，预期输出 20
}