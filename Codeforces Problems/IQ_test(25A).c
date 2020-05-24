#include <stdio.h>
int main()
{
    int n, count1 = 0, count2 = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
        if (a[i] % 2 == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (count1 > count2)
        {
            if (a[i] % 2 != 0)
            {
                printf("%d", i + 1);
            }
            continue;
        }
        else
        {
            if (a[i] % 2 == 0)
            {
                printf("%d", i + 1);
            }
        }
    }

    return 0;
}
