#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    
    cin>>t;
    for (int i = 0; i < t; i++)
    {   
        int flag=0;
        int hash_map[26] ={0};
        cin>>n;
        char a[n];
        cin>>a;
        for (int j = 0; j < strlen(a); j++)
        {
            hash_map[a[j]-97]++;
        }
        for (int k = 0; k < 26; k++)
        {
            if (hash_map[k]%2!=0)
            {
                flag=1;
                break;
            }
            
        }
        if (flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        

    }
    
    return 0;
}