#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, a, n, l, r, x = 0;
    cin >> n;
    l = log10(n) + 1;
    int k = 9 * l;
    int array[k];
    if (n - k < 0)
    {
        r = 0;
    }
    else
    {
        r = n - k;
    }

    for (int i = r; i < n; i++)
    {
        sum = 0;
        a = i;
        while (a > 0)
        {
            int remainder = a % 10;
            sum += remainder;
            a /= 10;
        }
        sum = sum + i;
        if (sum == n)
        {
            array[x++] = i;
        }
    }

    cout << x << endl;
    for (int j = 0; j < x; j++)
    {
        cout << array[j] << endl;
    }

    return 0;
}