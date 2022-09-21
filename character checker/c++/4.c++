#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main ()
{
int i,sum,cu =0;
char S[1000];

scanf("%s",S);
sum = strlen(S);
for(i=0;i<sum;i++)
{
if(isupper(S[i]))
cu++;
}
if (cu==sum)
{
printf("All Capital Letter");
}
else if(cu==0)
{
printf("All Small Letter");
}
else
printf("Mix");
return 0;
}