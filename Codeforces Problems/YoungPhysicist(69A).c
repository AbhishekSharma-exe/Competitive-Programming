#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[3 * n], x = 0, y = 0, z = 0;
    for (int i = 0; i < (n * 3); i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < (n * 3);)
    {
        x = x + a[i];
        i = i + 3;
    }
    for (int i = 1; i < (n * 3);)
    {
        y = y + a[i];
        i = i + 3;
    }
    for (int i = 2; i < (n * 3);)
    {
        z = z + a[i];
        i = i + 3;
    }
    ((x == 0) && (y == 0) && (z == 0)) ? (printf("YES")) : printf("NO");

    return 0;
}
