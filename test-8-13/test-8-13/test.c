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
//	int n = 0;
//	int i = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		int j = 0;
//		for (j = 7-i; j >= 1; j--)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}	
//		printf("\n");
//	}
//	for (i = 1; i < 7; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 2*(7 - i)-1; j >= 1; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2
//int main()
//{
//	int a = 0;
//	int ge = 0;
//	int shi = 0;
//	int bai = 0;
//	for (a = 100; a <= 999; a++)
//	{
//		ge = a % 10;
//		shi = a / 10 % 10;
//		bai = a / 100;
//		if (a == pow(ge, 3) + pow(shi, 3) + pow(bai, 3))
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//3

int main()

{
	int a = 0;
	int sn = 0;
	int i = 0;
	int ret = 0;
	scanf("%d", &a);
	for (i = 1; i <= 5; i++)
	{
		ret = 10 * ret + a;
		sn += ret;
	}
	printf("%d ", sn);
	return 0;
}