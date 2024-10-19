#include <stdio.h>

int main() 
{
    int asciivalue;
    printf("请输入一个ascii码值:"); //显示输入信息
    scanf("%d", &asciivalue); //用户输入信息
    printf("对应的字符为:%c\n", asciivalue);//结果输出，使用格式控制符%c
    return 0;
}
