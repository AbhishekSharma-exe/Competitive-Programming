#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;
        int pos = n;
        for (int j = 0; j < n; j++)
            if (s[j] == '8')
            {
                pos = j;
                break;
            }

        if (n - pos >= 11)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}