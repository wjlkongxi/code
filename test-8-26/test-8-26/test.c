#define _CRT_SECURE_NO_WARNINGS 1
//day 14
//�ַ���strncat    strstr  ���Ƿ����Ӵ�


//day15

//�����������
//strcat �ַ�����׷��


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


//ģ��ʵ��my_strcat���ַ�����׷�ӣ�
#include<assert.h>

//int my_strcat(char * dest, const char*src)
//{
//	char*ret = dest;
//	assert(dest&&src);
//	//1.Ѱ��\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.����
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

//strcpy  �ַ����Ŀ���
//
//int main()
//{
//	char arr[20] = "hello wangjialong ";
//	char a[20] = { 0 };
//	strcpy(a, arr);
//	printf("%s\n", a);
//	return 0;
//}

//ģ��ʵ��strcpy

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


//�ַ����Ƚϴ�С strcmp

//int main()
//{
//	int ret = 0;
//	ret = strcmp("abcd", "abd");
//	if (ret < 0)
//	{
//		printf("С��\n");
//	}
//	else if (ret == 0)
//	{
//		printf("����\n");
//	}
//	else if (ret>0)
//	{
//		printf("����\n");
//	}
//	return 0;
//}
//syrcmp��ģ��ʵ��


