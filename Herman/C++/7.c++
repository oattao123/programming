#include <stdio.h>

int main() 
{
    int r;
    double taxi;
    scanf("%d",&r);
    taxi = (2*r)*(2*r)/2;
    printf("%.6f\n%.6f",3.14159265358979323846*r*r,taxi);
    return 0;
}