#include<stdio.h>
#include<string.h>
void copyarry(int(*arr1)[4],int(*arr2)[4])//二维数组以指向数组的指针传递
{
    for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
		arr1[i][j]=arr2[i][j];//二维数组的拷贝处理
		}
	}
	
	printf("拷贝后的二维数组为：\n");
	for(int i=0;i<3;i++)
	{
	    for(int j=0;j<4;j++)
		{
			printf("%d\t",arr1[i][j]);//打印拷贝后的二维数组
		}
		printf("\n");
	}

}

int main()
{
	int arr1[3][4]={{1,2,3,6},{6,66,666,66},{8,88,888,88}};
	int arr2[3][4]={{22,222,22,2},{33,333,33,3},{77,777,77,7}};
	copyarry(arr1,arr2);
	return 0;
}
