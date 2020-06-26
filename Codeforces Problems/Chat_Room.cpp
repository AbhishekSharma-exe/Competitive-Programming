#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int j = 0;
    b = "hello";
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[j])
        {
            j++;
        }
        if (j == 5)
        {
            cout << "YES";
            break;
        }
    }
   
    if(j!=5)
    {
        cout << "NO";
    }
    return 0;
}