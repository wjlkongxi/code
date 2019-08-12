#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.交换两个指定整形值
//int main()
//{
//	int x = 2; 
//	int y = 5;
//	int t;
//	t = x; x = y; y = t;
//	printf("x=%d y=%d ", x, y);
//	return 0;
//}
//2.交换两数的内容，异或
//int main()
//{
//	int x = 2;
//	int y = 3;
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	printf("x=%d y=%d ", x, y);
//	return 0;
//}
//3.求十个整数中的最大值
//int main()
//{
//	int max = 0;
//	int i = 0;
//	int arr[] = { 1, -5, 3, 4, 22, 6, 7, 0, 9, 10 };
//	max = arr[i];
//	for (i = 0; i <10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//4.
//排序三个数由大到小
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[] = { 10, 5, 55 };
//	max = arr[0];
//		for (i = 0; i < 3; i++)
//		{
//			if (arr[i]>max)
//			{
//				max = arr[i];
//			}
//		}
//		for (i = 0; i < 3; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//     return 0;
//
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int t = 0;
	scanf("%d %d %d", &x, &y, &z);
	if (x < y)
	{
		t = x; x = y; y = t;
	}
	if (x < z)
	{
		t = x; x = z; z = t;
	}
	if (y < z)
	{
		t = y; y = z; z = t;
	}
	printf("%d %d %d", x, y, z);
	return 0;

}
//5.求两个数的最大公约数
//int main()
//{
//
//}