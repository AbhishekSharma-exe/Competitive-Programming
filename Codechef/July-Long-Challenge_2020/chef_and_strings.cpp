#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long n,temp, sum = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        cin >> n;
        long a[n] ;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int k = 0; k < n - 1; k++)
        {
            temp = abs(a[i + 1] - a[i])-1;
            sum = sum + temp;
        }
        cout << sum << endl;
    }

    return 0;
}