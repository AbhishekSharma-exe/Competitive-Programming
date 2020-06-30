#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[101], b[101];
    cin >> a;
    int k = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '+')
        {
            continue;
        }
        else
        {
            b[k] = a[i];
            k++;
        }
    }
    b[k] = '\0';
    int n = strlen(b);
    sort(b, b + n);
    cout<<b[0];
    for (int i = 1; i < n; i++)
    {
        cout<<"+"<<b[i];
    }
    

    return 0;
}