#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    int hashmap[26] = {0};
    string str;
    cin >> n >> k >> str;
    for (int i = 0; i < str.length(); i++)
    {
        hashmap[str[i] - 'a']++;
    }
    for (int j = 0; j < 26; j++)
    {
        if (hashmap[j] > k)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}