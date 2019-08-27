#define _CRT_SECURE_NO_WARNINGS 1
//day 14
//字符串strncat    strstr  看是否是子串


//day15

//两数分组异或
//strcat 字符串的追加


#include<stdio.h>
#include<string.h>
//
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


