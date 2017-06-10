#include<string.h>
#include<math.h>
#include<stdio.h>
int fun2(int a[], int n, int b[],int c[])
{
/**/
int i=0,j=0,t=0,num=0,x;
for(;i<n;i++) if (a[i]>(-20)){b[j]=a[i];num++;j++;}
for(i=0;i<n;i++) c[i]=b[i];
for(i=0;i<n;i++){
  x=i;
  for(j=i+1;j<num;j++) if(c[x]>c[j]) x=j;
  if(x!=i){
    t=c[i];
    c[i]=c[x];
    c[x]=t;
  }
}
return num;
/**/
}
void main()
{
int n = 10,i,nb;
int aa[10] = {12, -10, -31, -18, -15, 50, 17, 15, -20, 20};
int bb[10],cc[10];
printf("There are %2d elements in aa.\n ",n);
printf("They are: ");
for(i=0; i<n; i++)
printf("%6d",aa[i]);
printf("\n");
nb=fun2(aa,n,bb,cc);
printf("Elements in bb are:");
for(i=0; i<nb; i++)
printf("%6d",bb[i]);
printf("\n");
printf("Elements in cc are:");
for(i=0; i<nb; i++)
printf("%6d",cc[i]);
printf("\n");
printf("There are %2d elements in bb.\n",nb);
}
