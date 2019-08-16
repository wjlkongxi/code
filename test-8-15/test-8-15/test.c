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

void init(int arr[6])
{
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		arr[i] = i;
	}
}

int main()
{
	int arr[6] = {0,5,6,2,74,1};
	init (arr);//初始化
	empty();
	reverse();
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


