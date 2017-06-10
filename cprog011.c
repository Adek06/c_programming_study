//cprog011.c

#include <math.h>
#include <stdio.h>
double fun1(double x)
{
/**/
return (1+sin(x)+exp(x))/(1+x);
/**/
}
void main()
{
printf("fun1(0.76)=%8.3lf\n",fun1(0.76));
printf("fun1(3.00)=%8.3lf\n",fun1(3.00));
printf("fun1(3.76)=%8.3lf\n",fun1(3.76));
}
