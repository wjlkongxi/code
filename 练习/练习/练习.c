#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		num *= i;
//	}
//printf("%d\n", num);
//	return 0;

int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
				arr[i][j] = i * 4 + j;
		}
	}
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}