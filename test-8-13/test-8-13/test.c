#define _CRT_SECURE_NO_WARNINGS 1
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//
///*
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//*/
//
//
//3.
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
#include <stdio.h>
#include <math.h>
//1
//int main()
//{
//	int line= 0;
//	int i = 0;
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		int j = 0;
//		for (j = line-i; j >= 1; j--)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}	
//		printf("\n");
//	}
//	for (i = 1; i < line; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 2*(line- i)-1; j >= 1; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2
#include<math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100000;i++)
	{
		//判断i是否为水仙花数
		//求位数
		int count = 0;
		int tmp = i ;
		int sum = 0;
		while (tmp)
		{
			tmp /= 10;
			count++;
		}
		//求次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		//判断
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//3

//int main()
//
//{
//	int a = 0;//一个数字
//	int sn = 0;
//	int n = 0;//几项和
//	int i = 0;
//	int ret = 0;
//	scanf("%d %d", &a,&n);
//	for (i = 0; i < n; i++)
//	{
//		ret = 10 * ret + a;
//		sn += ret;
//	}
//	printf("%d ", sn);
//	return 0;
//}