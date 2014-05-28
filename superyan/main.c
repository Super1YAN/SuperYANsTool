#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int root_formula(void);

int main()
{
    while(1)
    {
    root_formula();
    }
    return 0;
}

int root_formula(void)                             /* 一元二次方程求根公式 */
{
    float x1,x2,delta,a,b,c,x,y;
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    delta = b*b-4*a*c;
    x = -b/2*a;
    y = -delta/4*a;
    printf("peak point: (%f,%f)\n",x,y);
    if (delta>0)
    {
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        printf("x1 = %f      x2 = %f\n \n",x1,x2);
    }
    else if (delta==0)
    {
        x1 = (-b+sqrt(delta))/2*a;
        x2 = x1;
        printf("x1 = x2 = %f\n \n",x1);
    }
    else if (delta<0)
    {
        printf("No real roots.\n \n");
    }
    return 0;
}
