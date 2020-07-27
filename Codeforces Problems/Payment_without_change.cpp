#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int q, a, b, n, S;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b >> n >> S;
        
        if (S%n<=b && a*n+b>=S)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}