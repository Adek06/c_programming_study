//Cprog031.c
#include <math.h>
#include <stdio.h>

double fun1(double x)
{
/**/
if (x<3) return 1.2;
if (x==3) return 10;
if (x>3) return 2*x+1;
/**/
}
void main()
{
  printf("fun1(0.76)=%8.3lf\n",fun1(0.76));
  printf("fun1(3.00)=%8.3lf\n",fun1(3.00));
  printf("fun1(3.76)=%8.3lf\n",fun1(3.76));
}
