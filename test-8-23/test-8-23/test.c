#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
void Move(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while(left<right)
	{
		int tmp = 0;
		while((left<right)&&(arr[left]%2==1))
		{
			left++;
		}
		while((left<right) && (arr[right]%2==0))
		{
			right--;
		}
		if(left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
		left++;
		right--;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
	printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Move(arr, sz);
	Print(arr, sz);
	return 0;
}


//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9


void Find(int arr[3][3], int* prow, int* pcol, int k)
{
	int x = 0;
	int y = *pcol-1;
	while(y>=0 && x<=*prow-1)
	{
		if(arr[x][y] > k)
		{
			y--;
		}
		else if(arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*prow = x;
			*pcol = y;
		return;
		}
	}
	*prow = -1;
	*pcol = -1;
}

int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int row = 3;
	int col = 3;
	Find(arr, &row, &col, 7);
	if(row == -1 && col==-1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���:%d %d\n" ,row, col);
	}
	return 0;
}