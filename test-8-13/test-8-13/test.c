#define _CRT_SECURE_NO_WARNINGS 1
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//
///*
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��
//*/
//
//
//3.
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//��λ��
		int count = 0;
		int tmp = i ;
		int sum = 0;
		while (tmp)
		{
			tmp /= 10;
			count++;
		}
		//��η���
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		//�ж�
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
//	int a = 0;//һ������
//	int sn = 0;
//	int n = 0;//�����
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