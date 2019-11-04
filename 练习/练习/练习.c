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


//#define MAXSIZE 100
//#include<stdio.h>
//
//// 定义数据结构，size为顺序表实际元素个数
//typedef struct {
//	int m[MAXSIZE];
//	int size;
//}list;
//
////创建
//void creat(list *s)
//{
//	int n, len;
//	printf("输入顺序表的长度：");
//	scanf("%d", &len);
//	s->size = len;
//	printf("输入顺序表的元素：");
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", &n);
//		s->m[i] = n;
//	}
//}
//
////输出
//void print(list *s)
//{
//	for (int i = 0; i < s->size; i++)
//		printf("%d ", s->m[i]);
//	printf("\n");
//}
//
////合并
//void combine(list *a, list *b, list *c)
//{
//	int i = 0, j = 0, k = 0;
//	//同时扫描两个表 
//	while (i<a->size && j<b->size)
//	{
//		if (a->m[i] <= b->m[j])
//		{
//			c->m[k] = a->m[i];
//			i++;
//			k++;
//		}
//		else
//		{
//			c->m[k] = b->m[j];
//			j++;
//			k++;
//		}
//	}
//	//A表扫完，B组未扫完 
//	if (i == a->size)
//	{
//		for (; j<b->size; j++)
//		{
//			c->m[k] = b->m[j];
//			k++;
//		}
//	}
//	if (j == b->size)
//	{
//		for (; i<a->size; i++)
//		{
//			c->m[k] = a->m[i];
//			k++;
//		}
//	}
//	c->size = k;
//}
//
//
//int main()
//{
//	list a;
//	list b;
//	list c;
//	creat(&a);
//	creat(&b);
//	print(&a);
//	print(&b);
//	combine(&a, &b, &c);
//	print(&c);



//#include <stdio.h>
//#define ERROR 0
//#define TRUE 1
//#define OVERFLOW -1
//#define maxsize 8
//#define  ElemType int
//typedef struct SeqList
//{
//	ElemType elem[maxsize];
//	int length;
//}SeqList;    /*线性表顺序存储结构*/
//int insert_SeqList(SeqList * L, int i, ElemType x)
//{
//	int j;
//	if (L->length == maxsize )
//	{
//		printf("表满");
//		return OVERFLOW;
//	}
//	if (i < 0||i>L->length)
//	{
//		printf("位置错");
//		return ERROR;
//	}
//	for (j = L->length; j >= i; j--)
//		L->elem[j + 1] = L->elem[j];
//	L->elem[i] = x;
//	L->length++;
//	return TRUE;
//}
//int main()
//{
//	int i;
//	SeqList L = {0};
//	printf("输入顺序表中的数值:\n");
//	for (i = 0; i<maxsize-1; i++)
//	{
//		scanf("%d", &(L.elem[i]));
//		L.length++;
//	}
//	/*printf("请输入要插入的位置和要插入的数据：");
//	int x;
//		scanf("%d %d", &i,&x);*/
//	insert_SeqList(&L, 1, 6);
//	for (i = 0; i<maxsize; i++)
//	{
//		printf("%d ", L.elem[i]);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, m, n;
//	scanf("%d %d", &m, &n);//输入两个小于1000的正整数，以空格隔开
//	if (m<n)
//	{
//		c = m;
//		m = n;
//		n = c;
//	}
//	 a = m;
//	 b = n;
//
//	while (b != 0)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("%d %d", a, m*n / a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int m, n;
//	int i = 0;//最大公约数
//	int j = 0;//最小公倍数
//	printf("请输入两个数，空格隔开：");
//	scanf("%d %d", &m, &n);
//	for (i = m; i > 0; i--)
//	{
//		if ((m%i == 0) && (n%i == 0))
//		{
//			break;
//		}
//	}
//	for (j = m;;j++)
//	{
//		if ((j%m == 0) && (j%n == 0))
//		{
//			break;
//		}
//	}
//	printf("%d %d\n",i,j); 
//		return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	double sum = 0, m,t=1,i,j;
//	/*int t = 1;
//	int i = 0;
//	int j = 0;*/
//	scanf("%lf", &m);
//	for (i = 1, j = 3; t>m; i++, j += 2)
//	{
//		sum += t;
//		t *= i / j;
//	}
//	printf("%.6f", sum * 2);
//	return 0;
//}

//double flag(int n);
//double mut(int m);
//int main()
//{
//	double sum = 0.0, a[10000];
//	int i = 0, j = 1, k = 0;
//	double m;
//	scanf("%lf", &m);        //有修改
//	for (i = 0, j = 1, k = 0; (flag(i) / mut(j)) >= m; i++, j += 2, k++)
//	{
//		a[k] = flag(i) / mut(j);
//		sum += a[k];
//	}
//	printf("%f", sum * 2);
//}
//double flag(int n)
//{
//	int i;
//	double sum = 1.0;
//	if (n>0)
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	if (n == 0) sum = 1.0;    //此句多余
//	return sum;
//}
//double mut(int m)
//{
//	int i;
//	double sum = 1.0;
//	for (i = 1; i <= m; i = i + 2)
//	{
//		sum = sum*i;
//	}
//	return sum;
//}
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int t = 0;
	int i = 0;
	int num = 0;
	scanf("%d", &n);
	int m = n;
	for (i = 0;; i++)       
	{
		t = n % 10;
		num+= t*pow(8, i); 
		if (n / 10 == 0)
		{
			printf("%d(8)=%d(10)\n", m,num);
			break; 
		}
		n = n / 10;
	}
	return 0;
}