#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>

//strlen�����ַ����ĳ���

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

//strlen ��ģ��ʵ��

//@1.ָ����ʽ
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

//@2.�����ݹ���ʽ
//size_t my_strlen(const char * str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(str + 1);
//}

//@3.ָ���ָ��

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




//strcpy   �ַ����Ŀ���

//int main()
//{
//	char arr[20] = { 0 };
//	char *p = "wang";
//	strcpy(arr,p);
//	printf("%s\n", arr);
//	return 0;
//}

//strcpy ��ģ��ʵ��

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





//strcat �ַ�����׷�ӵ�

//int main()
//{
//	char arr[20]= "wang";
//	char *p = "jialong";
//	strcat( arr,p);
//	printf("%s", arr);
//	return 0;
//}

//strcat  ��ģ��ʵ��

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





//strncpy��Ӧ�ã�n���ַ��Ŀ�����

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

//strncpy ��ģ��ʵ��

