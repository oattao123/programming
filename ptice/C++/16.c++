#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[]="ABCABCABCABC";
    char b[]="BABCBABCBABC";
    char c[]="CCAABBCCAABB";
    int x=0,y=0,z=0,m;
    scanf("%d",&m);
    char t[m+1];
    scanf("%s",t);
    for(int i;i<strlen(t);i++)
    {
        if(a[i%12]==t[i])
        {
            x++;
        }
        if(b[i%12]==t[i])
        {
            y++;
        }
        if(c[i%12]==t[i])
        {
            z++;
        }
    }
    if(x>y && x>z)
    {
        cout << x << endl << "Adrian";
    }
    else if(y>x && y>z)
    {
        cout << y << endl << "Bruno";
    }
    else if(z>x && z>y)
    {
        cout << z << endl << "Goran";
    }
    else if(x>y && x==z)
    {
        cout << x << endl << "Adrian" << endl << "Goran";
    }
    else if(x==y && x>z)
    {
        cout << x << endl << "Adrian" << endl << "Bruno";
    }
    else if(y>x && y==z)
    {
        cout << y << endl << "Bruno" << endl << "Goran";
    }
    else if(x==y && x==z)
    {
        cout << x << endl << "Adrian" << endl << "Bruno" << endl << "Goran";
    }

}