#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0, sum1 = 0, sum2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    sort(a, a + n);
    for (int i=n-1;sum1/2>=sum2;i--)
    {
        sum2+=a[i];
        count++;
        
    }
    
   cout<<count;
    
    return 0;
}