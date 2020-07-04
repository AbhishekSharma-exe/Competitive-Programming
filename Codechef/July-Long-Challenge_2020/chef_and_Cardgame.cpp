#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, c_score = 0, m_score = 0;
    long long sum_a = 0, sum_b = 0, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int c_score = 0, m_score = 0;
        long long sum_a = 0, sum_b = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            sum_a = 0, sum_b = 0;
            cin >> a >> b;
            while (a > 0)
            {
                sum_a = sum_a + (a % 10);
                a /= 10;
            }
            while (b > 0)
            {
                sum_b = sum_b + (b % 10);
                b /= 10;
            }
            if (sum_a > sum_b)
            {
                c_score++;
            }
            else if (sum_b > sum_a)
            {
                m_score++;
            }
            else if (sum_a == sum_b)
            {
                c_score++;
                m_score++;
            }
        }
        if (c_score > m_score)
        {
            cout << "0 " << c_score<<endl;
        }
        else if (c_score < m_score)
        {
            cout << "1 " << m_score<<endl;
        }
        else if (c_score == m_score)
        {
            cout << "2 " << c_score<<endl;
        }
    }

    return 0;
}