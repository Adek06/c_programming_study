#include<stdio.h>

void sort(int p[],int n)
{
printf("开始排序\n");
int t,k;
for (int i=0;i<n-1;i++){
	k=i;
	for (int x=i+1;x<n;x++)
		if (p[k]<p[x]) k=x;
	if(k!=i) 
	{
		t=p[i];
		p[i]=p[k];
		p[k]=t;
		printf("pk is %d,pi is %d\n",p[k],p[i]);
	}
}
}


void main()
{
int a[5]={12,51,134,532,123};
int *p;
printf("现在的数字是：");
for (int i=0;i<5;i++) printf("%d ",a[i]);
printf("\n");
p = a;
sort(p,5);
printf("现在的数字是：");
for (int i=0;i<5;i++) 
{
	printf("%d ",*p);
	p++;
}
}
