#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//除二余一
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	printf("%d", count);
//	return 0;
//}

//右移按位与

//int main()
//{
//	int n = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 32;i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列

//int main()
//{
//	int i = 0;    
//	int num = 0;    
//	int ret = 0;    
//	scanf("%d", &num);   
//	printf("奇数列是:");
//	for (i = 31; i >= 1; i -= 2)           
//	{
//		ret = (num >> i) & 1;
//		printf("%d ", ret);
//	}
//	printf("\n");   
//	printf("偶数列是:");
//	for (i = 30; i >= 0; i -= 2)           
//	{
//		printf("%d ", (num >> i) & 1); 
//	}          
//	printf("\n");   
//	return  0; 
//}


//3. 输出一个整数的每一位。

//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

‭011111001111‬   1999
‭100011111011‬   2299