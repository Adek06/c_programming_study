//Cprog022.c
#include<string.h>
#include<math.h>
#include<stdio.h>
void fun2(char a[],char b[],char c[])
{
/**/
char t[15]={};
if (strcmp(a,b)>0){strcpy(t,a);strcpy(a,b);strcpy(b,t);}
if (strcmp(b,c)>0){strcpy(t,b);strcpy(b,c);strcpy(c,t);}
if (strcmp(a,b)>0){strcpy(t,a);strcpy(a,b);strcpy(b,t);}
/**/
}
void main()
{
  char str1[15]="Fuzhou",str2[15]="Fujian",str3[15]="China";
  fun2(str1,str2,str3);
  printf("The ordered strings is:%s,%s,%s\n",str1,str2,str3);
}
