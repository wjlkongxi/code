#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

//void list(int b)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= b ; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	list(a);
//	return 0;
//}

//2.ʹ�ú���ʵ���������Ľ�����

//int change(int* pa, int * pb)
//{
//	int tmp = 0;
//	tmp = * pa;
//	* pa = * pb;
//	* pb = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	change(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//3.ʵ��һ�������ж�year�ǲ������ꡣ

//int is_leap_year(int y)
//{
//	if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	
//	if (is_leap_year(year)== -1)
//	{
//		printf(" ������ ");
//	}
//	else
//	{
//		printf(" �������� ");
//	}
//	return 0;
//}

//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
#include<string.h>
void Init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] =i;
	}
}

void reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		 int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Empty(int arr[], int sz)
{
	memset(arr, 0, sizeof(arr[0])*sz);
}


int main()
{
	int arr[10] = {0};
	int sz = sizeof (arr) / sizeof (arr[0]);
	Init (arr,sz);//��ʼ��
	Print(arr,sz);
	reverse(arr,sz);
	Print(arr, sz);
	Empty(arr, sz);
	Print(arr, sz);
	return 0;
}

//5.ʵ��һ���������ж�һ�����ǲ���������


//int  is_prime(int a)
//{
//	int i = 0;
//	for (i = 2; i < a ; i++)
//	{
//		if (a%i == 0)
//		{
//			return 0;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (is_prime(i) == -1)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
//	}	
//}


