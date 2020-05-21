#include <stdio.h>
int main()
{
    int m, n, min, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &m);
        if (n > m)
        {
            min = m;
        }
        else
        {
            min = n;
        }

        if (m == 1 && n == 1)
        {
            printf("no");
        }

        if ((min == 1) || (n <= 2 && m <= 2))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}