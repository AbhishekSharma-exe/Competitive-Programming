#include <iostream>
using namespace std;
int main()
{
    string p;
    int a = 0,t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> p;
        if (p[1] == '+')
        {   
            a++;
        }
        else
        {
            a--;
        }
    }
    cout << a;
    return 0;
}
