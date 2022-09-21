#include <iostream>
using namespace std;

int main() 
{
    int a[9],sum=0,m=0,n=0;
    for (int i = 0;i<9;i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int m = 0;m<9;m++)
    {
        for (int n =0;n<9;n++)
        {
            if((sum-a[m]-a[n]==100))
            {
                for(int i=0;i<9;i++)
                {
                    if(i!=m&&i!=n)
                    {
                        cout << a[i] << endl;
                    }
                }return 0;
            }
        }
    }
    return 0;
}