#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n, m ;
        cin>>n>>m;
        int a[n],b[m];;

        int flag=0;
        for (int j = 0; j < n; j++)
        {
           cin>>a[j];
        }
        
        for (int k = 0; k < m; k++)
        {
            cin>>b[k];
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (a[j] == b[k])
                {
                    flag = 1;
                    cout<<"YES"<<endl;
                    cout<<"1 "<<a[j]<<endl;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}