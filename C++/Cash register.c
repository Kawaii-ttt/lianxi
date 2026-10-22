#include <stdio.h>

int main() {
    float price, count;
    while (1) {
        printf("输入单价和数量：");
        scanf("%f %f", &price, &count); // NOLINT(*-err34-c)
        if (price == 0) {
            printf("检测到0关闭收银机\n\n");
            break;
        }
        float all = price * count;
        if (all >= 100) {
            all = all * 0.9f;
            printf("总价是：%.2f | 满100打9折！\n\n", all);
        } else {
            printf("总价是：%.2f | 没打折。\n\n", all);
        }
    }
    return 0;
}
