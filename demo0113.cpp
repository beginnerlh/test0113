//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Left_Rotating(char arr[])
{
	int a = 0;
	int i = strlen(arr);//�ַ�������
	printf("������Ҫ���������ַ�->");
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
	printf("����������Ҫ�жϵ��ַ���->");
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