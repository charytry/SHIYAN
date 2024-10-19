#include <stdio.h>
#include <stdbool.h>
int main()//实现输入数组后倒序打印此数组
{
    int i;
    int arr[8];
    for(i = 0; i <8; i++)//输入一串数组
    {
        printf("please input the one of the array:");
        scanf("%d",&arr[i]);//输入数组的每一个元素
    }
    for(i=7; i>=0; i--)//倒序输出数组
    {
        printf("%d",arr[i]);
    }
    return 0;
}
