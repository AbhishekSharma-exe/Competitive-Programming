#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, copyOfn, j = 0, flag = 0;
    cin >> n >> k;
    int arr[k];
    copyOfn = n;
    for (int i = 2; i <= n; i++)
    {
        while (1)
        {
            if (copyOfn % i != 0)
            {
                break;
            }
            if (j == k - 1)
            {
                flag = 1;
                arr[j] = copyOfn;
                break;
            }
            arr[j] = i;

            copyOfn /= i;
            j++;
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
        for (int i = 0; i < k; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }

    return 0;
}