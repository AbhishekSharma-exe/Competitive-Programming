#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        a = a / 5;
        printf("%d", a);
    }
    else
    {
        a = a / 5;
        printf("%d", a + 1);
    }

    return 0;
}
