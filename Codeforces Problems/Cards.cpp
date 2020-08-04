#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count1 = 0, count2;
    cin >> n;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'z')
        {
            count1++;
        }
    }
    count2=(count1*4);
    count2=(n-count2)/3;
    for (int i = 0; i < count2; i++)
    {
        cout<<1<<" ";
    }
    for (int i = 0; i < count1; i++)
    {
        cout<<0<<" ";
    }
    
    return 0;
}