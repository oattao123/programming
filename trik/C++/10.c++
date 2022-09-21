#include <stdio.h>

int main() 
{
    int i,p=1;
    char abc[51];
    scanf("%s",abc);
    for(i=0;abc[i]!='\0';i++)
    {
        if(abc[i]=='A')
        {
            if(p==1) p=2;
            else if(p==2) p=1;
        }
        else if(abc[i]=='B')
        {
            if(p==2) p=3;
            else if(p==3) p=2;
        }
        else if(abc[i]=='C')
        {
            if(p==1) p=3;
            else if(p==3) p=1;
        }
    }
    printf("%d",p);
    return 0;
}