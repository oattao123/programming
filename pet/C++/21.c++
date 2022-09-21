#include <stdio.h>

int main() 
{
    int arr[6];
    int max=0;
    for(int i=0; i<5; i++)
    {
        int tmp=0;
        for(int j=0;j<4;j++)
        {
            int a;
            scanf("%d", &a);
            tmp += a;
        }
        arr[i] = tmp;
    }
    for(int k=0;k<5;k++)
    {
        if(arr[k] > max)
        {
            max = arr[k];
        }
    }
    for(int c=0;c<5;c++)
    {
        if(arr[c]==max)
        printf("%d %d", c+1,max);
    }
}