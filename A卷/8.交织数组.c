#include<stdio.h>

int main()//输入两个数组使其实现相互交织
{
    char a[3];
    char b[3];
	//声明两个数组
    printf("请连续输入三个数：");
	scanf("%s",a);	
	printf("请连续输入三个数：");
    scanf("%s",b);
	//输入这两个数组
    printf("数组交织为：");
    for(int i=0; i<3; i++)//交叉打印实现数组交织
    {
        printf("%c",a[i]);
        printf("%c",b[i]);
    }
    return 0;
}
