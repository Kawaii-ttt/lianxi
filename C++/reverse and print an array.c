#include <stdio.h>

int main(void) {
    int arr[5];
    int i;
    printf("请输入 5 个整数：\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("倒序输出结果是：\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
