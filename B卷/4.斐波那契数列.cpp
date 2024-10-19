#include<stdio.h>
int FS(int n)//定义斐波那契数列递归函数
{
	int result;
	if(n==0||n==1)
		return (n);//按斐波那契数列定义，0和1就返回它本身
	else if(n>1)//其他就继续递归
		result=FS(n-1)+FS(n-2);
	return result;//返回整数结果
}

int main()
{
	int R,n;
	printf("请输入斐波那契数列的第n项：");//提示输入第n项
	scanf("%d",&n);//输入
	R=FS(n);//调用函数
	printf("斐波那契数列的第%d项为%d",n,R);//打印结果
	
	return 0;
	
}
