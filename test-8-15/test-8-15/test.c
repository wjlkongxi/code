#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表

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

//2.使用函数实现两个数的交换。

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

//3.实现一个函数判断year是不是润年。

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
//		printf(" 是闰年 ");
//	}
//	else
//	{
//		printf(" 不是闰年 ");
//	}
//	return 0;
//}

//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
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
	Init (arr,sz);//初始化
	Print(arr,sz);
	reverse(arr,sz);
	Print(arr, sz);
	Empty(arr, sz);
	Print(arr, sz);
	return 0;
}

//5.实现一个函数，判断一个数是不是素数。


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
//		printf("是素数");
//	}
//	else
//	{
//		printf("不是素数");
//	}	
//}


