#include<stdio.h>
int main()
{
	float a;//声明一个浮点数
	printf("请输入一个浮点数：");//打印提示信息
	scanf("%f",&a);//输入浮点数
	printf("小数点形式为:%.2f",a);//输出
	printf("\n指数形式为:%e",a);//隔行输出
	printf("\n16进制形式为：%a",a);//输出16进制
	return 0;
	
}
