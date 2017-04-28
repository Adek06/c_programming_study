#include<stdio.h>

main()
{
int a[3];
int i;
printf("输入三个数字：");
for(i=0;i<3;i++)
	scanf("%d",a+i);
for(i=0;i<3;i++)
	printf("%d",*(a+i));
printf("\n");
}
