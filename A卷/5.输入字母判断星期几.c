#include<stdio.h>
int main()
{
	int stop=1,a;
	char day;
	printf("由于首字母有重复，现规定一周中重复的天在前的一天为大写");
while(stop!=0)//利用while可重复查询
{printf("\n请输入day：");
	scanf("%c",&day);
	switch (day)//使用switch函数分支输出
	{
	case 'S':
		printf("S is Sunday\n");
		break;
	case 'm':
		printf("m is Monday\n");
		break;
	case'T':
		printf("T is Tuesday\n");
		break;
	case'w':
		printf("w is Wensday\n");
		break;
	case't':
		printf("t is Thusday\n");
		break;
	case'f':
		printf("f is Friday\n");
		break;
	case's':
		printf("s is Saturday\n");
		break;
		
	default:
		printf("输入的字母不合格，请留意开头的提示信息");//提示错误
		break;
	}
	printf("若要结束查询请输入1,否则继续输入字母查询：");//设定退出程序
	scanf("%d",&a);
	if(a==1)
		stop=0;
	else
		stop=1;
	
}return 0;
}
