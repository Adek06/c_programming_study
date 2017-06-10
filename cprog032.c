//cprog032.c

#include<stdio.h>
int fun(char *s)
{
/**/
int i,n=0;
while(*s) {
  if(*s==' ') n++;
  s++;
}
return n;
/**/
}
void main()
{
  char str[255];
  gets(str);
  printf("%d\n",fun(str));
}
