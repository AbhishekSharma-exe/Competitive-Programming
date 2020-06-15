#include <iostream>

using namespace std;
int main()
{
    int a;
    string b;
    cin >> b;
    a = b.length();
    for (int i = 0; i < b.length(); i++)
    {
        for (int j = i + 1; j < b.length(); j++)
        {
            if (b[i] == b[j])
            {
                a--;
                break;
            }
        }
    }
    
    if (a % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}