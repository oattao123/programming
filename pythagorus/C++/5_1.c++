#include <iostream>
#include <math.h>
int main()
{
    double a,b,c2,c;
    scanf("%lf %lf",&a,&b);
    c2 = a*a+b*b;
    c = sqrt(c2);
    printf("%.6lf",c);
    return 0;
}