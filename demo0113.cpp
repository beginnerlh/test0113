//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Left_Rotating(char arr[])
{
	int a = 0;
	int i = strlen(arr);//字符串长度
	printf("请输入要左旋几个字符->");
	scanf("%d", &a);
	for (a=a-1; a >= 0; a--)
	{
		int tmp = arr[0];
		for (int j = 0; j < i; j++)
		{

			arr[j] = arr[j + 1];
		}
		arr[i - 1] = tmp;
	}
	//for (int j = 0; j < i; j++)
	//{
	//	printf("%c", arr[j]);
	//}
	printf("%s\n", arr);
}
int Judge()
{
	char arr1[1000] = { 0 };
	char arr2[1000] = { 0 };
	printf("请输入两个要判断的字符串->");
	scanf("%s", &arr1);
	scanf("%s", &arr2);
	int a = strlen(arr1);
	int b = strlen(arr2);
	if (a == b)
	{
		for (int i = 0; i < a; i--)
		{
			int tmp = arr1[0];
			for (int j = 0; j < a - 1; j++)
			{

				arr1[j] = arr1[j + 1];
			}
			arr1[a - 1] = tmp;
			if (strcmp(arr1, arr2) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	/*char arr[] = "ABCDEFG";
	Left_Rotating(arr);*/
	int a=Judge();
	printf("%d\n", a);
	system("pause");
	return 0;
}