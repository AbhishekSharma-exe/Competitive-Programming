#include <stdio.h>
int main()
{
    int n, x;
    
    scanf("%d %d",&n,&x);
    
    
    for (int i = 0; i < x; i++)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n--;
        }
    }
    printf("%d", n);

    return 0;
}
