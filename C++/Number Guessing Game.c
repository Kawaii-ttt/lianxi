#include <stdio.h>
#define SECRET_NUMBER 7

int main() {
    int guess;
    printf("猜数字（1-10之间）\n");
    while (1) {
        printf("输入你的数字：");
        scanf("%d", &guess); // NOLINT(*-err34-c)
        if (guess > SECRET_NUMBER) {
            printf("你的数'%d'太大了\n", guess);
        } else if (guess < SECRET_NUMBER) {
            printf("你的数'%d'太小了\n", guess);
        } else {
            printf("你猜对了！答案是%d", SECRET_NUMBER);
            break;
        }
    }
}
