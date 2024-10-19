#include<stdio.h>
double h(double a,double b)//输入两个数实现调和平均数计算
{
	
	if(a!=0&&b!=0)
	{
	double h,p;
	p=1.0/a+1.0/b;
	h=2/p;          //计算调和平均数
	return h;       //返回计算结果
	}
	else
		return -1;//若输入了0则返回-1
}
int main()//主函数
{
	double a,b,result;
	printf("输入第一个数:");
	scanf("%lf",&a);
	printf("输入第二个数:");
	scanf("%lf",&b);
	result=h(a,b);
	
	if(result==-1)                     //判断输入的数不能为0
		printf("输入数不应为0");
	else
	printf("两个数调和平均数结果为%lf",result);  //输出调和平均数结果
	return 0;
	
}
