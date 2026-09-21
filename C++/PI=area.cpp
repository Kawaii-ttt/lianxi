#define PI 3.14159
#include <stdio.h>
int main()
{
    float r, area;
    printf("请输入圆的半径：");
    scanf("%f", &r);
    area = PI * r * r;
    printf("圆的面积为：%.2f\n", area);
    return 0;
}