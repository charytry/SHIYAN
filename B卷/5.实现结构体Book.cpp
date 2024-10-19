#include <stdio.h>
#include <string.h>

typedef struct Book //结构体，各成员为要求的书籍信息
{
	
	char article[66];
	char writer[66];
	char ISBN[66];
	float price;
	
} Book;

void addbook(Book book[],int counts)//实现添加书籍信息的函数
{
	int a,j;
	for(j=0;j<100;j++)
	{
		
		printf("请输入要添加的书名噢：");
		scanf("%s",book[j].article);
		printf("请输入此书的作者：");
		scanf("%s",book[j].writer);
		printf("请输入此书ISBN码：");
		scanf("%s",book[j].ISBN);
		printf("请输入此书价格:");
		scanf("%f",&book[j].price);
		counts++;
		
		printf("若要停止添加请输入0，输入非0继续添加:");//自主选择是否继续添加或返回菜单
		scanf("%d",&a);
		if(a==0)
			break;
		
	}
	
}

void findbookByName(Book book [],int i)//利用书名找对应ISBN号函数
{
	char article[66];
	printf("请输入要查找书籍的书名:");
	scanf("%s",article);
	for(int j=0;j<=i;j++)
	{
		if(strcmp(article,book[j].article)==0) //利用字符串长度判断是否对应来找相应的书籍
		{
			printf("%s的ISBN号为%s",article,book[j].ISBN);
		}
	}
}

void findbookByISBN(Book book[],int i)//利用ISBN号查找对应书籍的所有信息函数
{
	char findISBN[30];
	printf("请输入要找书籍的ISBN号:");
	scanf("%s",findISBN);
	for(int j=0;j<=i;j++)//遍历所有书籍查找ISBN号对应的书籍
	{
		if(strcmp(book[j].ISBN,findISBN)==0)
		{
			printf("书名为:%s\n",book[j].article);
			printf("作者为:%s\n",book[j].writer);
			printf("书的价格为:%f\n",book[j].price);
		}
	}
}

void checkbook(Book book[],int num)//显示所有书籍信息函数
{
	for(int j=0;j<num;j++)
	{
		printf("书名为:%s\n",book[j].article);
		printf("书的ISBN码为%s\n",book[j].ISBN);
		printf("作者为:%s\n",book[j].writer);
		printf("书的价格为:%.2f\n",book[j].price);
		
	}
}

int main()
{
	
	int choice,num=0;
	struct Book book[100];
	
	printf("菜单：\n1.添加书籍\n 2.根据书名查找对应·ISBN号\n 3.根据ISBN查找对应的书\n 4.显示书籍信息\n");
	printf("请输入：\n(如：输入“1”则选择“1.添加书籍”）");
	scanf("%d",&choice);
	
	while(choice!=0)
	{		
		switch (choice) //利用分支选择菜单的选项
		{
		case 1:
			addbook(book,num);
			num++;
			break;
		case 2:
			findbookByName(book,num);	
			break;
		case 3:
			findbookByISBN(book,num);
			break;
		case 4:
			printf("num值为：%d",&num);
			checkbook(book,num);
			break;
		default:
			printf("请重新输入1~4的整数");//让用户重新输入
			break;
		}
		printf("\n请继续选择菜单中要操作的项目：");
		scanf("%d",&choice);	
	}
	
	return 0;
}

