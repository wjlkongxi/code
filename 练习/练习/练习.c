#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	printf("%d\n", num);
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//				arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//using namespace std;
//#define  MAXSIZE 100 
//#define TRUE 1#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
//typedef int Status;
//typedef int ElemType;
//typedef  struct 
//{  ElemType *elem;     //ָ������Ԫ�صĻ���ַ 
//int  length;          //���Ա�ĵ�ǰ����       
//}SqList;
//Status InitList_Sq(SqList *L)
//{    //����һ���յ�˳���L  
//	L-> elem=new ElemType[MAXSIZE];  
//	if(! L-> elem) exit(OVERFLOW);       
//	L-> length=0;               
//	return OK;
//}
//Status CreateList_Sq(SqList &L,int n)
//{
//	int i;
//	if(!L.elem||n<0||n>MAXSIZE)
//		return ERROR;
//	for(i=1;i<=n;i++)cin>>L.elem[i-1];  
//	L.length=n;
//	return OK;
//}
//void TraverseList_Sq(SqList &L)
//{
//	int i; 
//	cout<<L.elem[0];
//	for(i=1;i<=L.length-1;i++)
//	{       
//		cout<<','<<L.elem[i];
//	}    
//	cout<<endl;
//}
//void ListInsert_Sq(SqList &L,int e)
//{  
//	L.elem[L.length] = e;
//	L.length++;    
//}
//int ListLength(SqList L)
//{   
//	return L.length;
//}
//void GetElem(SqList L, int i, int &e)
//{     
//	e = L.elem[i - 1];
//}
//bool LocateElem(SqList L, int e)
//{
//	int i;
//	for (i = 0; i < L.length; i++)
//	if (e == L.elem[i])
//		return true;
//	return false;
//}
//void MergeList_Sq(SqList L,SqList p,SqList q)
//{ 
//	int i=1,j=1,e,f;         //��������Ҫ���㷨
//	while((i<=ListLength(L))&&(j<=ListLength(p)))
//	{
//		GetElem(L,i,e);
//		GetElem(p,j,f);
//		if(e<=f)
//		{
//			ListInsert_Sq(q,e);
//		    i++; 
//		}
//		else 
//		{
//			ListInsert_Sq(q,f);
//			j++;
//		}
//	}
//	while(i<=L.length)
//	{
//		GetElem(L,i,e);
//		ListInsert_Sq(q,e);
//		i++;
//	}
//	while(j<=p.length)
//	{
//		GetElem(p,j,f);
//		ListInsert_Sq(q,f);
//		j++;
//	}
//	TraverseList_Sq(q);
//}
//int main()
//{
//	SqList LA, LB,LC;
//	int m,n;
//	InitList_Sq(&LA);
//	InitList_Sq(&LB);
//	InitList_Sq(&LC);//��ʾ�������������LA��Ԫ�ظ���
//	cin>>n;         //��ʾ�����������LB�е�Ԫ��
//	CreateList_Sq(LA, n);    
//	TraverseList_Sq(LA);//��ʾ�������������LB��Ԫ�ظ���
//	cin>>m;        //��ʾ�����������LB�е�Ԫ��
//	CreateList_Sq(LB, m);     
//	TraverseList_Sq(LB);//�ڴ˴����������ϲ�����
//	MergeList_SqMergeList_Sq(LA,LB,LC);//��ʾ��LA��LB�ϲ���ļ���LCΪ��//
//	TraverseList_Sq(LC);
//	return 0;
//}


#define MAXSIZE 100
#include<stdio.h>

// �������ݽṹ��sizeΪ˳���ʵ��Ԫ�ظ���
typedef struct {
	int m[MAXSIZE];
	int size;
}list;

//����
void creat(list *s)
{
	int n, len;
	printf("����˳���ĳ��ȣ�");
	scanf("%d", &len);
	s->size = len;
	printf("����˳����Ԫ�أ�");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &n);
		s->m[i] = n;
	}
}

//���
void print(list *s)
{
	for (int i = 0; i < s->size; i++)
		printf("%d ", s->m[i]);
	printf("\n");
}

//�ϲ�
void combine(list *a, list *b, list *c)
{
	int i = 0, j = 0, k = 0;
	//ͬʱɨ�������� 
	while (i<a->size && j<b->size)
	{
		if (a->m[i] <= b->m[j])
		{
			c->m[k] = a->m[i];
			i++;
			k++;
		}
		else
		{
			c->m[k] = b->m[j];
			j++;
			k++;
		}
	}
	//A��ɨ�꣬B��δɨ�� 
	if (i == a->size)
	{
		for (; j<b->size; j++)
		{
			c->m[k] = b->m[j];
			k++;
		}
	}
	if (j == b->size)
	{
		for (; i<a->size; i++)
		{
			c->m[k] = a->m[i];
			k++;
		}
	}
	c->size = k;
}


int main()
{
	list a;
	list b;
	list c;
	creat(&a);
	creat(&b);
	print(&a);
	print(&b);
	combine(&a, &b, &c);
	print(&c);
}