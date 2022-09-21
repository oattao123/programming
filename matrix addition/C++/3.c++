#include <iostream>
using namespace std;

int main() 
{
    int a[100][100] , b[100][100] , c[100][100];
    int m,n,i,j;
    cin >> m >> n ;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> a[i][j] ;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> b[i][j] ;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}