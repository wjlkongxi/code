#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//day 14
//�ַ���strncat    strstr  ���Ƿ����Ӵ�
//day15
//�����������
//strcat �ַ�����׷��


//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�

void find_two_diff_num(int arr[], int sz, int* p1, int* p2)
{
	//1. ���
	int i = 0;
	int tmp = 0;
	int pos = 0;
	for(i=0; i<sz; i++)
	{
		tmp ^= arr[i];
	}
	//2. �������Ľ��tmp�ж�����λ��һλΪ1
	for(i=0; i<32; i++)
	{
		if(((tmp>>i)&1)==1)
		{
			pos = i;
			break;
		}
	}
	//3. ����
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



//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
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

// strcat ��Ӧ��
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


