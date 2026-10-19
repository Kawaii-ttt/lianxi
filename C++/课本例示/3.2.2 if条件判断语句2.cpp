// 文件：3.2.2 if条件判断语句2.cpp
// 整体总结：输入两个整数 a、b；如果 a > b，就用加减法交换 a 和 b，
// 最后输出交换后的 a、b，使输出顺序为较小值在前、较大值在后。
#include <stdio.h> // 引入标准输入输出库，使用 scanf 和 printf
void main()        // 程序主函数，原代码使用旧式 void main
{
    int a, b;              // 定义整型变量 a 和 b
    scanf("%d%d", &a, &b); // 从键盘读取两个整数，分别存入 a 和 b
    if (a > b)             // 判断 a 是否大于 b
    {                      // if 语句块开始
        a = a + b;         // 把 a 和 b 的和暂存到 a 中
        b = a - b;         // 用新 a 减去 b，得到原来的 a，并赋给 b
        a = a - b;         // 用新 a 减去新 b，得到原来的 b，并赋给 a，完成交换
    } // if 语句块结束
    printf("%d,%d\n", a, b); // 输出交换后的 a、b
}