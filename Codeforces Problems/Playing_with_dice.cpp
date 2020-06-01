#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a, b, a_wins = 0, b_wins = 0, draw = 0;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(i - a) > abs(i - b))
        {
            b_wins++;
        }
        else if (abs(i - a) < abs(i - b))
        {
            a_wins++;
        }
        else if (abs(i - a) == abs(i - b))
        {
            draw++;
        }
    }
    cout << a_wins<<" "<< draw<<" "<< b_wins;
}