#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        cout<<".";
        if(i%3==2)
        {
            cout<<".*.";
        }
        else
        {
            cout<<".#.";
        }
    }
    cout<<"."<<endl;
    for(int i=0;i<a.length();i++)
    {
        if(i%3==2)
        {
            cout<<".*.*";
        }
        else
        {
            cout<<".#.#";
        }
    }
    cout<<"."<<endl;
    for(int i=0;i<a.length();i++)
    {
        if(i%3==2)
        {
            cout<<"*."<<a[i]<<".*";
        }
        else
        {
            if(i%3!=0 || i==0)
            {
                cout<<"#";
            }
            cout<<"."<<a[i]<<".";
            if(i==a.length()-1)
            {
                cout<<"#";
            }
        }
    }
    cout<<endl;
    for(int i=0;i<a.length();i++)
    {
        if(i%3==2)
        {
            cout<<".*.*";
        }
        else
        {
            cout<<".#.#";
        }
    }
    cout<<"."<<endl;
    for(int i=0;i<a.length();i++)
    {
        cout<<".";
        if(i%3==2)
        {
            cout<<".*.";
        }
        else
        {
            cout<<".#.";
        }
    }
    cout<<"."<<endl;
    return 0;
}