// 文件：3.2.3 if-else语句2.cpp
// 整体总结：从键盘读取一个字符；如果它是大写字母 A 到 Z，
// 就转换成对应的小写字母输出；否则原样输出。
#include <stdio.h> // 引入标准输入输出库，使用 getchar 和 putchar
void main()        // 程序主函数，原代码使用旧式 void main
{
    int c;                    // 定义整型变量 c，用来保存读取到的字符
    c = getchar();            // 从标准输入读取一个字符，存入 c
    if (c >= 'A' && c <= 'Z') // 判断 c 是否在大写字母 A 到 Z 的范围内
        putchar(c + 32);      // 如果是大写字母，加上 32 得到对应小写字母并输出
    else                      // 如果不是大写字母
        putchar(c);           // 原样输出该字符
}