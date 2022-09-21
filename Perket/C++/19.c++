#include <iostream>
#include <algorithm>
using namespace std;
int Min = 1000000000;
int n;
int a[10]={},b[10]={},S=1,B=0;
int praket(int A,int C,int j)
{
    A*=a[j]; C+=b[j];
    if(Min > abs(A-C)) Min = abs(A-C);
    for(int i=j+1;i<n;i++)
        praket(A,C,i);
}
int main()
{
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i] ;
    }
    for(int i=0;i<n;i++){
        praket(S,B,i);
    }
    cout << Min << endl;
}