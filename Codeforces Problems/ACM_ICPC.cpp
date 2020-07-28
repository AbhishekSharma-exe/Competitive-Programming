#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6], sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 1)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 6; j++)
            {
                for (int k = j + 1; k < 6; k++)
                {
                    if (a[i]+a[j]+a[k]==sum/2)
                    {
                        cout<<"YES";
                        return 0;
                    }
                    
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}