#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		num *= i;
//	}
//printf("%d\n", num);
//	return 0;

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

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define LIST_INIT_SIZE  100
#define LISTINCREMENT  10
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
typedef int ElemType;
typedef struct 
{
	ElemType *elem;
	int length;	
	int listsize;
}SqList;
Status InitList_Sq(SqList &L)
{	
	L.elem=(ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	//首地址
	if(!L.elem)	
		exit(OVERFLOW);	
	L.length=0;
	L.listsize=LIST_INIT_SIZE;	
	return OK;
}
int LocateElem(SqList &L,int e)
{
	int i,j;	
	for(i=0;i<L.length;i++)	
	{
		if(e==L.elem[i])		
			j=i+1;	
	}
	printf("%d",j);
	return OK;
}
int ListLength(SqList L)
{
	// 初始条件：顺序线性表L已存在。操作结果：返回L中数据元素个数
	return L.length;
}       
int GetElem(SqList &L,int i,ElemType &e)
{
	if(i>L.length||i<1)
		exit(OVERFLOW);
	e=L.elem[i-1];
	return OK;
}
Status ListInsert_Sq(SqList &L,int i,ElemType e)
{
	ElemType *newbase,*p,*q;	
	if(i>L.length+1||i<1)
		return ERROR;
	if(L.length>=L.listsize)
	{
		newbase=(ElemType *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));
		if(!newbase)	
			exit(OVERFLOW);
		L.elem=newbase;
		L.listsize+=LISTINCREMENT;
	}
	//q=L.elem+i-1; //插入位置  等价于  
	q=&(L.elem [i-1]);
	for(p=L.elem+L.length-1;p>=q;--p)			
		*(p+1)=*p;	
	*q=e;		
	++L.length;
	return OK;
}
Status ListDelect_Sq(SqList &L,int i,ElemType &e)
{
	ElemType *p,*q;	if(i<1||i>L.length)
		return ERROR;
	p=L.elem+i-1; 
	e=*p;
	q=L.elem+L.length-1;	
	for(++p;p<=q;++p)
	{
		*(p-1)=*p;
	}	
	L.length--;	
	return OK;
} 
void ListPrint(SqList L)//线性表输出
{
	ElemType *p;
	printf("线性表中的元素为：\n");
	for(p=L.elem;p<L.elem+L.length;p++)
	{
		printf("%d",*p);
	}
}
void MergeList_Sq(SqList LA,SqList LB,SqList &LC)
{
	int *pa,*pb,*pc;	
	int *pa_last,*pb_last;
	pa=LA.elem;
	pb=LB.elem;
	LC.length=LC.listsize=LA.length+LB.length;
	pc=LC.elem=(ElemType *)malloc(LC.listsize * sizeof(ElemType));
	if(!LC.elem)
		exit(OVERFLOW);
	pa_last=LA.elem+LA.length-1;
	pb_last=LB.elem+LB.length-1;
	while(pa<=pa_last&&pb<=pb_last)
	{	
		if(*pa<=*pb)	
			*pc++=*pa++;		
		else	
			*pc++=*pb++;	
	}	
	while(pa<=pa_last)
		*pc++=*pa++;	
	while(pb<=pb_last)
		*pc++=*pb++;
} 
void main()
{
	SqList LA;
	SqList LB;

	SqList LC;	
	int i,a;	
	ElemType e;
	InitList_Sq(LA);
	InitList_Sq(LB);
	InitList_Sq(LC);
	printf("input five data \n");	
	for(i=1;i<=5;i++)
	{
		scanf("%d",&e);	
		ListInsert_Sq(LA,i,e);
	}
	printf("输入五个数：\n"); 	
	for(a=1;a<=5;a++)
	{
		scanf("%d",&e);			
		ListInsert_Sq(LB,a,e);	
	}
	ListPrint(LA);
	printf("\n");
	ListPrint(LB);
	printf("\n");
	MergeList_Sq(LA,LB,LC);
	printf("\n");
	ListPrint(LC);
}
