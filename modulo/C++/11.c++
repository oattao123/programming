#include <iostream>
using namespace std;

int main() 
{
    int a[42] = {};
    int t;
    int ans = 0;
    for (int i=0;i<10;i++)
    {
        cin >> t;
        a[t%42] = 1;
    }
    for (int i=0;i<42;i++)
    {
        ans = ans + a[i];
    }
    cout << ans;
    return 0;
}