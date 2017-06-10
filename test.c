#include <stdio.h>
#include <math.h>

void main(){
int n=2;
char a='a';
char A='A';
printf("%d\n",n*=2+3);
printf("%d\n",(int)n);
printf("%d\n",(int)a);
printf("%d\n",(int)A);

int n1=6;
int n2;
n2=n1<<2;
printf("%d\n",n2);

double n3=10000;
printf("%3.5f,%-50.5f\n",n3/3,n3/3);

printf("%f,%f\n",log(10),log10(10));

int n4=017;
printf("%d,%o,%x\n",n4,n4,n4);

int n5=1;
while (n5--) printf("%d\n",n5);

int n6=1,n7=5;
printf("%d ",(n6--)*(++n7));
printf("%d\n",n6);

char n8[]="iamhandsome";
char *n9=n8;
printf("%c,%c\n",*(n9+2),*n9+2);
}
