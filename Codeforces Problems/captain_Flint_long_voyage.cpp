#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,b;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if (n%4==0)
        {
            b=n/4;
        }
        else
        {
            b=n/4+1;
        }
        for (int i = 0; i < n-b; i++)
        {
            cout<<9;
        }
        for (int i = n-b; i < n; i++)
        {
            cout<<8;
        }
        cout<<endl;
        
    }
    
    return 0;
}