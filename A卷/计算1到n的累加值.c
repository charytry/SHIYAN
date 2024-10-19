#include<stdio.h>

int main()
{
    int a,n,sum=0;//声明初变量
    printf("请输入n:");
    scanf("%d",&n);//利用scanf输入
    for(a=1; a<=n; a++)//循环将1到n的值累加到sum中
    {
        sum+=a;
    }
    printf("1到%d的累加和为:%d",n,sum);//打印输出值
    return 0;
}
