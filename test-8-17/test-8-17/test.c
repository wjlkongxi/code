#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.쳲���������
    //�ݹ�
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

//�ǵݹ�
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


//2.��n^k


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

// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19


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



//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//1.�ݹ�
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


//2.�ǵݹ�
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		ret *= i;
	}
	printf("%d", ret);
	return 0;
}