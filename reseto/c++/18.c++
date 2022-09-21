#include <stdio.h>
int main()
{
    int N, K;
    int chk=0;
    int arr[1001];
    scanf("%d %d", &N, &K);
    for(int i=0; i<N-1; i++)
    {
        arr[i]=i+2;
    }
    for(int j=0; j<N-1; j++)
    {
        if(arr[j]!= 0)
        {
            int tmp = arr[j];
            for(int l=0; l<N-1; l += tmp)
            {   
                if(arr[j+l]!=0 && j+l < N-1)
                {
                    chk++;
                if(chk==K)
                {    
                    printf("%d\n",arr[j+l]);
                    return 0;
                } 
                arr[j+l] = 0; 
                }
            }
        }
    }
}