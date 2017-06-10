#include<stdio.h>
/**/int fun()/**/
{
int hen,cock,chicken,n=0;
for(cock=0;cock<=50;cock+=1)
  for(hen=0;hen<=100;hen=hen+1)
  {
    chicken=2*(100-hen-2*cock);
    /**/if(cock+hen+chicken==100)/**/
      {
        n++;
        printf("%d-->hen:%d,cock:%d,chicken:%d\n",n,hen,cock,chicken);
        if(n==20) printf("\n");;
      }
    }
return n;
}

void main()
{
int num;
num=fun();
printf("\nThere are %d solutions.\n",num);
}
