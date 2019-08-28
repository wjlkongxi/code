#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//day 14
//字符串strncat    strstr  看是否是子串
//day15
//两数分组异或
//strcat 字符串的追加


//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。

void find_two_diff_num(int arr[], int sz, int* p1, int* p2)
{
	//1. 异或
	int i = 0;
	int tmp = 0;
	int pos = 0;
	for(i=0; i<sz; i++)
	{
		tmp ^= arr[i];
	}
	//2. 计算异或的结果tmp中二进制位哪一位为1
	for(i=0; i<32; i++)
	{
		if(((tmp>>i)&1)==1)
		{
			pos = i;
			break;
		}
	}
	//3. 分组
	for(i=0; i<sz; i++)
	{
		if(((arr[i]>>pos)&1) == 1)
			*p1 ^= arr[i];
	}
	*p2 = tmp ^ *p1;
}
int main()
{
	int arr[] = {1,2,3,4,5,1,2,3,4,6};
    int sz = sizeof(arr)/sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	find_two_diff_num(arr, sz, &num1, &num2);
	printf("%d %d\n", num1, num2);
    return 0;
}



//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
  int main()
{
	int money = 0;
	int empty = 0;
	int total = 0;
	scanf("%d", &money);
	total = money*2-1;
	/*total += money;
	empty = money;
	while(empty>=2)
	{
	total += empty/2;
	empty = empty/2 + empty%2;
	}*/
	printf("total = %d\n", total);
	return 0;
}

// strcat 的应用
//int main()
//{
//	char arr[20] = "hello ";
//	strcat(arr, "world");
//	printf("%s", arr);
//  return 0;
//}


//模拟实现my_strcat（字符串的追加）
#include<assert.h>

//int my_strcat(char * dest, const char*src)
//{
//	char*ret = dest;
//	assert(dest&&src);
//	//1.寻找\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//
//}	
//int main()
//{
//	char arr[20] = "hello ";
//	my_strcat(arr, "world");
//	printf("%s", arr);
//	return 0;
//}															

//strcpy  字符串的拷贝
//
//int main()
//{
//	char arr[20] = "hello wangjialong ";
//	char a[20] = { 0 };
//	strcpy(a, arr);
//	printf("%s\n", a);
//	return 0;
//}

//模拟实现strcpy

//char* my_strcpy(char*dest, const char*src)
//{
//	assert(dest&&src);
//	char *ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	const char arr[20] = "hello ";
//	char a[20] = { 0 };
//	my_strcpy(a,arr);
//	printf("%s\n", a);
//	return 0;
//}


//字符串比较大小 strcmp

//int main()
//{
//	int ret = 0;
//	ret = strcmp("abcd", "abd");
//	if (ret < 0)
//	{
//		printf("小于\n");
//	}
//	else if (ret == 0)
//	{
//		printf("等于\n");
//	}
//	else if (ret>0)
//	{
//		printf("大于\n");
//	}
//	return 0;
//}
//syrcmp的模拟实现


