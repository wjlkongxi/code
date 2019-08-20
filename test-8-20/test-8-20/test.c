#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1

	
int main()	
{
	int arr[20][20] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= n;i++)
	{
		arr[i][1] = 1;
		arr[i][i] = 1;
	}
	for (i = 3; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}