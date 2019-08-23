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

unsigned int reverse_bit(unsigned int value)
{
	int arr[32] = { 0 };
	for (int i = 31; i >=1; i--)
	{
		arr[i] = (value >> i) & 1;
	}
	int left = 0;
	int right = 31;	
	int tmp = 0;
	while (left < right) 
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;	
		right--;
	}
	unsigned int sum = 0;		
	for (int i = 31; i >= 0; i--)
	{
		sum +=arr[i] * pow(2, i);
	}
	return sum;

}

int main()
{
	unsigned int value = 0;
	scanf("%d", &value);
	unsigned int ret= reverse_bit(value);
	printf("%d", ret);
	return 0;
}




//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

/*4.
��һ���ַ����������Ϊ:"student a am i",
			���㽫��������ݸ�Ϊ"i am a student".
			Ҫ��
			����ʹ�ÿ⺯����
			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�*/
