#include<stdio.h>
#include<string.h>
 void h(char* a,char* b)//利用指针传参拼接两个数组
{
	strcat(a,b);	
}
int main()
{
	char a[40]={"i like dian chuang"};
	char b[15]={"\nlet me donate"};	
	h(a,b);//调用函数
	printf("拼接后的数组为：%s",a);//打印结果
	return 0;
}
