#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>

//strlen计算字符串的长度

//int main()
//{
//	const char*str1 = "abcdef";
//	const char*str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

//strlen 的模拟实现

//@1.指针形式
//size_t my_strlen(const char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//@2.函数递归形式
//size_t my_strlen(const char * str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(str + 1);
//}

//@3.指针减指针

//size_t my_strlen(char * str)
//{
//	char *p = str;
//	while (*p != '\0')
//		p++;
//	return p - str;
//}
//int main()
//{
//	char arr[20] = "abcde";
//	int len =my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}




//strcpy   字符串的拷贝

//int main()
//{
//	char arr[20] = { 0 };
//	char *p = "wang";
//	strcpy(arr,p);
//	printf("%s\n", arr);
//	return 0;
//}

//strcpy 的模拟实现

//char *my_strcpy(char *dest, const char *arc)
//{
//	char* ret = dest;
//	assert(dest&&arc);
//	while (*dest++ = *arc++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char *p = "wang";
//	my_strcpy(arr, p);
//	printf("%s\n",arr);
//	return 0;
//}





//strcat 字符串的追加的

//int main()
//{
//	char arr[20]= "wang";
//	char *p = "jialong";
//	strcat( arr,p);
//	printf("%s", arr);
//	return 0;
//}

//strcat  的模拟实现

//char *my_strcat(char *dest, const char* arc)
//{
//	char* ret = dest;
//	assert(dest&&arc);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *arc++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "wang ";
//	char *p = "jialong";
//	my_strcat(arr, p);
//	printf("%s", arr);
//	return 0;
//}





//strncpy的应用（n个字符的拷贝）

//int main()
//{
//	char arr[20] = { 0 };
//	char *p = "abcdef";
//	int n = 0;
//	scanf("%d", &n);
//	strncpy(arr, p, n);
//	printf("%s\n", arr);
//	return 0;
//}


//strncpy 的模拟实现

//strstr的实现字符串中查找字符串(输出出现的第一个字符的地址)
//如果没有该字符，则输出空指针（null）
//int main()
//{
//	char arr[30] = "My name is wang jialong";
//	char * pch;
//	pch = strstr(arr, "shang");
//	printf("%s", pch);
//	return 0;
//}


//strstr 的模拟实现
//将两个字符串的地址分别记住s1,s2,p1和p2分别指向s1,s2,将


//char* my_strstr(const char*s1, const char*s2)
//{
//	const char *p1=s1;
//	const char *p2=s2;
//	const char*start = p1;
//	while (*start)
//	{
//		p1 = start;
//		p2 = s2;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char *)start;
//		}
//		start++;
//	}
//}
//
//int main()
//{
//	char arr[] = "abbbcdef";
//	char *ret=my_strstr(arr, "bcd");
//	if (ret != NULL)
//	{
//		printf("%s", ret);
//	}
//	else
//		printf("找不到\n");
//	return 0;
//}



//strchr  字符串中查找字符，输出第一个字符的地址，如果没有，
//这输出空指针（null）


//int main()
//{
//	char arr[] = "wangjialong";
//	char*ret = strchr(arr, 'o');
//	if (ret != NULL)
//	{
//		printf("%s", ret);
//	}
//	else
//		printf("找不到");
//	return 0;
//}


//strchr的模拟实现

char *my_strchr(const char* s1,const char *s2)
{
	const char*p1 = s1;
	while (*p1 == *s2)
	{
		s1 = p1;
		return s1;
	}
	p1++;
}

int main()
{
	char arr[] = "abcdefg";
	char *ret = my_strchr(arr, 'd');
	if (ret != NULL)
	{
		printf("%s", ret);
	}
	else
		printf("找不到");
	return 0;
}