#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int num = 1;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		num *= i;
	}
printf("%d\n", num);
	return 0;

}

