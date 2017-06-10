//961.c

#include <stdio.h>
#include <conio.h>
#include <math.h>

double fun(float x){
/**/
if (x<2) return -1;
if (x=2) return tan(x)+3.2;
if (x>2) return (x*x*x*x*x)/(log(2*x+1000));
/**/

}

int main(){
float x;
printf("Input x :");
scanf("%f",&x);
printf("fun(%.3f)= %.3lf\n",x,fun(x));
getch();

}
