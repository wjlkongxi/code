#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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




//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	double aver = a+(b-a)/2.0;
//	printf("%lf", aver);
//	return 0;
//}

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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
��һ���ַ����������Ϊ:"student a am i",
			���㽫��������ݸ�Ϊ"i am a student".
			Ҫ��
			����ʹ�ÿ⺯����
			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�*/


//#include <string.h>
//#include <assert.h>
// void reverve_swap(char *left, char *right)
// {
//	 assert(left != NULL); //���Բ��ǿ�ָ��
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
//	 reverve_swap(p, p + len - 1); //���������ַ���
//	 while (*p)
//	 {
//		 start = p;
//		 while ((*p != ' ') && (*p != '\0')) //�ҵ�һ�鵥��
//		 {
//			 p++;
//		 }
//		 end = p - 1;
//		 reverve_swap(start, end);//���򵥸�����
//		 if (*p == ' ') //�ҵ��ո�
//			 p++;
//	 }
//	 return ret;
//
// }
// int main()
// {
//	 char arr[] = "student a am I";
//	 printf("����ǰ��%s\n", arr);
//	 printf("������%s\n", reverve(arr));
//	 return 0;
// }
//