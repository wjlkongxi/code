#define _CRT_SECURE_NO_WARNINGS 1
//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#include<stdio.h>
#include<math.h>
//1.
int main()
{
	int arr1[] = { 1, 3, 5, 7 };
	int arr2[] = { 2, 4, 6, 8 };
	int tmp;
	int i = 0;
	for (i = 0; i < 4; i++)
		{
			tmp = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = tmp;
		}
	for (i = 0; i < 4; i++)
	{
		printf(" %d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		printf(" %d ", arr2[i]);
	}
	return 0;
}
//2.
int main()
{
	int i = 0;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += pow (-1,i+1) * (1.0 / i);
	}
	printf("%lf ", sum);
	return 0;
}
////3.
int main()
{
	int num = 0;
	int count = 0;
	for (num = 1; num <= 100; num++)
	{
		if (num % 10 == 9)
		{
			count++;
		}
		if (num / 10 == 9)
		{
			count++;
		}
	}
	printf("count=%d ", count);
	return 0;
}