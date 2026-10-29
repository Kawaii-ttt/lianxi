#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001); // 终端中文不乱码用
    int Password, a;
    printf("请输入银行卡密码：\n");
    scanf("%d", &Password); // NOLINT(*-err34-c)
    if (Password == 1234)
    {
        printf("密码正确\n请选择服务项目\n");
        printf("1.改密\n");
        printf("2.查询\n");
        printf("3.转账\n");
        printf("4.取款\n");
        printf("5.电子现金\n");
        printf("6.存款\n");
        printf("0.取卡\n");
        scanf("%d", &a); // NOLINT(*-err34-c)
        switch (a)
        {
        case 1:
            printf("你在改密界面");
            break;
        case 2:
            printf("你在查询界面");
            break;
        case 3:
            printf("你在转账界面");
            break;
        case 4:
            printf("你在取款界面");
            break;
        case 5:
            printf("你在电子现金服务界面");
            break;
        case 6:
            printf("你在存款界面");
            break;
        case 0:
            printf("取卡");
            break;
        default:
            printf("你输入的值有误");
        }
    }
    else
    {
        printf("密码错误");
    }
    return 0;
}