#define PI 3.14159
#include <stdio.h>
int main()
{
    float r;
    printf("请输入圆的半径：");
    scanf("%f", &r); // NOLINT(*-err34-c)
    const float area = PI * r * r;
    printf("圆的面积为：%.2f\n", area);
    return 0;
}