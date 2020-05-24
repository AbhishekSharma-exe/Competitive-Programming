#include <stdio.h>
int main()
{
    int a[51], n, b,count=0, i;
    scanf("\n%d %d", &n, &b);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] >= a[b-1]&&a[i]!=0)
        {
            count++;
        }
    }
printf("%d",count);
    return 0;
}
