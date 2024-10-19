#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findzhongshu(int arr[],  int num)//判断主函数中num是否为众数的函数
{
	int times = 0;//定义出现次数
	for (int i = 0; i <20; i++)//遍历数组，找重复积累次数
	{
		if (arr[i] == num)
			times++;
	}
	if(times>10)//积累10次或以上，找到众数则返回真
	return 1;
	else
	return 0;//否则返回0，主函数重新生成随机数组，重新判断众数
}

int main() {
	srand(time(NULL));
	int arr[20];
	int get = 0;
	while (!get)
	{
		for (int i = 0; i < 20; i++) //生成数组与判断众数均放到while中，可实现若不符则重新生成数组重新判断
		{
			arr[i] =( rand() % 1000)%5 + 1;//仅%5随机性可能不够，这里直接扩大随机性
		}
		for (int num = 1; num <= 5; num++) //给1~5逐个以调用的函数判断是否为众数
		{
			if (findzhongshu(arr, num))//调用
			{
				get = 1;//找到众数，结束while循环
				break;//是则结束第二个for循环
			}
		}
	}
	printf("此随机数组为：\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr[i]);//循环输出每个元素
	}
	printf("\t众数为:");
	for (int num = 1; num <= 5; num++) //再次调用输出众数
	{
		if (findzhongshu(arr, num)) 
		{
			printf("%d ", num);//打印目标众数
		}
	}
	
	return 0;
}


