#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include <string.h>
#include <assert.h>

void reverse(char*left, char* right)
{
	assert(left && right);
	while(left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char arr[], int k)
{
	int len = strlen(arr);
	int j = 0;
	for(j=0; j<k; j++)
	{
		char ch = arr[0];
	    int i = 0;
		for(i=0; i<len-1; i++)
		{
			arr[i] = arr[i+1];
		}
		arr[len-1] = ch;
	}	
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 10);
	printf("%s\n", arr);
	return 0;

}




//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC



int is_left_move(char*str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1 != len2)
		return 0;
	strncat(str1, str1, len1);
	if(strstr(str1, str2))
	{
		return 1;
	}
		else
	{
		return 0;
	}
}
int main()
{
	char arr[20] = "AABCD";
	int ret = is_left_move(arr, "BCDAA");
	if(ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}

