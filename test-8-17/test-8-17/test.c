#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.斐波拉契数列
//    递归
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

  /* 非递归*/
//int main()
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d", c);
//	return 0;
//} 


//2.求n^k


//int Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}	
//	else if (n == 1)
//	{
//		return n;
//	}	
//	else
//	{
//		return  n*Pow(n, k - 1);
//	}		
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("%d", ret);
//	return 0;
//}
//
////  3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//
//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return	DigitSum(n / 10) + n % 10;
//}
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//
//
//
////4.递归和非递归分别实现求n的阶乘
////   递归
//int Jiecheng(n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n*Jiecheng(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret;
//	scanf("%d", &n);
//	ret=Jiecheng(n);
//	printf("%d", ret);
//	return 0;
//}
//
//
//   /*非递归*/
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = n; i > 0; i--)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}
//
//
// //5.递归方式实现打印一个整数的每一位
//
//void Print(int n)
//{
//	if (n > 9)
//	{
//	  Print(n / 10);
//	}
//	printf("%d  ", n % 10);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//
//
//
//
////6.递归和非递归分别实现strlen
//
////递归
//
//int mystrlen(char* string)
//{
//	if (*string != '\0')
//	{
//		return 1 + mystrlen(string + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char  *string = "abcdef";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	return 0;
//}
//
////非递归
//
//int main()
//{
//	char *string = "abcdef ";
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
////7. 编写一个函数 reverse_string(char * string)（递归实现）
////实现：将参数字符串中的字符反向排列。
////要求：不能使用C函数库中的字符串操作函数。
////
//
//
 void reverse_string(char* str)
 {
	    if (*str == '\0')
		     {
		         return;
		     }
	     reverse_string(str + 1);
	    printf("%c", *str);
	 }

 int main()
 {
	     char* arr = "abcd";
	    reverse_string(arr);
		printf("\n");
		     return 0;
	 }