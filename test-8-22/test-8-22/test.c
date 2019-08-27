#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[32] = { 0 };
//	for (int i = 31; i >=1; i--)
//	{
//		arr[i] = (value >> i) & 1;
//	}
//	int left = 0;
//	int right = 31;	
//	int tmp = 0;
//	while (left < right) 
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;	
//		right--;
//	}
//	unsigned int sum = 0;		
//	for (int i = 31; i >= 0; i--)
//	{
//		sum +=arr[i] * pow(2, i);
//	}
//	return sum;
//
//}
//
//int main()
//{
//	unsigned int value = 0;
//	scanf("%d", &value);
//	unsigned int ret= reverse_bit(value);
//	printf("%d", ret);
//	return 0;
//}




//2.不使用（a + b） / 2这种方式，求两个数的平均值。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	double aver = a+(b-a)/2.0;
//	printf("%lf", aver);
//	return 0;
//}

//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
 void findnum(int *src,int n, int *pnum )
 {	
	 int i;	int sum = 0;
	 for (i = 0; i < n; i++)	
	 {	
		 sum ^= src[i];
	 }
	 int pos;
	 for (pos = 0; !(sum & 1 << pos); pos++);

	 int num =0 ;
	 for (i = 0; i < n; i++)
	 {	
			 num ^= src[i];
	 }
	 *pnum = num;
 }
 int main()
 {	
	 int arr[] = { 5, 3, 9, 7, 5, 4, 7, 4, 2, 9, 2 };
	 int num;
	 findnum(arr, sizeof(arr) / sizeof(arr[0]), &num);	
	 printf("%d\n", num);
	 return 0;
 }



/*4.
有一个字符数组的内容为:"student a am i",
			请你将数组的内容改为"i am a student".
			要求：
			不能使用库函数。
			只能开辟有限个空间（空间个数和字符串的长度无关）*/


//#include <string.h>
//#include <assert.h>
// void reverve_swap(char *left, char *right)
// {
//	 assert(left != NULL); //断言不是空指针
//	 assert(right != NULL);
//	 while (left < right)
//	 {
//		 char tmp = *left;
//		 *left = *right;
//		 *right = tmp;
//		 left++;
//		 right--;
//	 }
// }
// char *reverve(char *p)
// {
//	 int len = strlen(p);
//	 char *start = p;
//	 char *end = NULL;
//	 char *ret = p;
//	 reverve_swap(p, p + len - 1); //逆序整个字符串
//	 while (*p)
//	 {
//		 start = p;
//		 while ((*p != ' ') && (*p != '\0')) //找到一块单词
//		 {
//			 p++;
//		 }
//		 end = p - 1;
//		 reverve_swap(start, end);//逆序单个单词
//		 if (*p == ' ') //找到空格
//			 p++;
//	 }
//	 return ret;
//
// }
// int main()
// {
//	 char arr[] = "student a am I";
//	 printf("交换前：%s\n", arr);
//	 printf("交换后：%s\n", reverve(arr));
//	 return 0;
// }
//