#include <stdio.h>
#include <math.h>
void main()
{
  int i,/**/j/**/;
  int a[4][4],sum;
  sum=/**/0/**/;
  printf("Please input 16 numbers:\n");
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      scanf("%d",&a[i][j]);
  for(i=0;i<4;i++)
  /**/sum+=a[i][0];/**/
  printf("%d\n",sum);
}
