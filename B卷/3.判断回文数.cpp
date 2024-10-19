#include<stdio.h>
int h(int num)//实现将一个整数倒转
{
int c=0;
	while(num>0)//利用while循环逐个倒序输出末位数得倒序的整数
	{
		int lastnum;
		lastnum=num%10;//先把末位数取出
	
		num/=10;//除去已输出的数，剩下的数进入下一个循环
	    c=c*10+lastnum;	//此循环取出的末位数返还给主函数的a
	}
    return (c);
	
}
int main()
{
	int a,b;
	printf("请输入一个整数，为你判断是否为回文数：");//输入整数判断
	scanf("%d",&a);
	if(a>0)//输入的不为负数
	b=h(a);//调用函数，结果返给a
	if(a==b)//倒序前与倒序后进行判断
		printf("%d为回文数",a);
	else
		printf("%d不为回文数",a);
	return 0;
	//打印结果
}
