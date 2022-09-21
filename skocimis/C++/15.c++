#include <stdio.h>
using namespace std;

int main()
{
    int a,b,c,f,g;
    scanf("%d %d %d",&a,&b,&c);
    f = b - a;
    g = c - b;
    if(f>g)
    {
        printf("%d",f - 1);
    }
    else
    {
        printf("%d",g - 1);
    }
}