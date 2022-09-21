#include<stdio.h>

int main(void)

{

           int A,B,C,min,mid,max,i;

           char string[3];

           scanf("%d %d %d",&A,&B,&C);

           scanf("%s",string);

           if(A<=B&&A<=C)

            {

                     min=A;

                    if(B<=C)

                    {mid=B;

                      max=C; }

                     else

                     {mid=C;

                      max=B; }

            }



             if(B<=A&&B<=C)

             {

                      min=B;

                      if(A<=C)

                      {mid=A;

                        max=C; }

                      else

                       {mid=C;

                        max=A;}

              }



             if(C<=A&&C<=B)

             {

                   min=C;

                   if(A<B)

                   {

                        mid=A;

                        max=B;

                    }

                   else

                   {mid=B;

                    max=A;}

             }

            for(i=0;i<3;i++)

             {

                if(string[i]=='A')

                 printf("%d ",min);

                else if(string[i]=='B')

                   printf("%d ",mid);

                else

                  printf("%d ",max); 

              }

                 return 0;

}