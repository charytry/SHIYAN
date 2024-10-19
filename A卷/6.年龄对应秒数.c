#include <stdio.h>

int main()//实现输入年龄输出对应秒数
{
    double y,s=3.156e7;//声明一年秒数
    int n;
    printf("输入年龄数:");
    scanf("%d",&n);//scanf输入年龄整数
    y=n*s;//计算公式
    printf("输入年龄对应秒数为:%e",y);//打印结果
    return 0;
}
