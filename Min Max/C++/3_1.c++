#include<stdio.h>
int main(){
    int i,n,j,Min,Max;
    Min = 2e9;
    Max =-2e9;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        //Max
        if(j > Max){
            Max = j;
        }
        if(j < Min){
            Min = j;
        }
    }
    printf("%d\n%d",Min,Max);
    return 0;
}