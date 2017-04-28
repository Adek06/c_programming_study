#include<stdio.h>

void main()
{
void exch(int *p,int n);
int a[5] = {1,7,3,4,5};
printf("现在的数组是：");
for(int i=0;i<5;i++)
	printf("%d ",*(a+i));
printf("\n");
exch(a,5);
printf("新的数组是:");
for(int i=0;i<5;i++)
	printf("%d",a[i]);
printf("\n");
}

void exch(int *p,int n)
{
int *a=p,*b=p+n-1;
int c=(n-1)/2,t;
for (int i=0;i<=c;i++,a++,b--)
{
t = *a;
*a = *b;
*b = t;
printf("a是%d,b是%d\n",*a,*b);
}
}
