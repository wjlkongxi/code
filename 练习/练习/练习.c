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
//{  ElemType *elem;     //指向数据元素的基地址 
//int  length;          //线性表的当前长度       
//}SqList;
//Status InitList_Sq(SqList *L)
//{    //构造一个空的顺序表L  
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
//	int i=1,j=1,e,f;         //下面是主要的算法
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
//	InitList_Sq(&LC);//提示：请输入有序表LA的元素个数
//	cin>>n;         //提示：输入有序表LB中的元素
//	CreateList_Sq(LA, n);    
//	TraverseList_Sq(LA);//提示：请输入有序表LB的元素个数
//	cin>>m;        //提示：输入有序表LB中的元素
//	CreateList_Sq(LB, m);     
//	TraverseList_Sq(LB);//在此处调用有序表合并函数
//	MergeList_SqMergeList_Sq(LA,LB,LC);//提示：LA和LB合并后的集合LC为：//
//	TraverseList_Sq(LC);
//	return 0;
//}


#define MAXSIZE 100
#include<stdio.h>

// 定义数据结构，size为顺序表实际元素个数
typedef struct {
	int m[MAXSIZE];
	int size;
}list;

//创建
void creat(list *s)
{
	int n, len;
	printf("输入顺序表的长度：");
	scanf("%d", &len);
	s->size = len;
	printf("输入顺序表的元素：");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &n);
		s->m[i] = n;
	}
}

//输出
void print(list *s)
{
	for (int i = 0; i < s->size; i++)
		printf("%d ", s->m[i]);
	printf("\n");
}

//合并
void combine(list *a, list *b, list *c)
{
	int i = 0, j = 0, k = 0;
	//同时扫描两个表 
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
	//A表扫完，B组未扫完 
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