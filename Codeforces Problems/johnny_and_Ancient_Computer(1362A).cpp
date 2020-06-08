#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c;
    int t,count=0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {   
        count=0;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0"<<endl;
            continue;
        }

        if (a > b)
        {
            while (a > b)
            {
                b = b * 2;
                count++;
            }
        }
        else
        {
            while (b > a)
            {
                a = a * 2;
                count++;
            }
        }

        if (a != b)
        {
            cout << "-1" << endl;
        }
        else
        {
            c = (count / 3 + min(1, count % 3));
            cout << c << endl;
        }
    }

    return 0;
}
