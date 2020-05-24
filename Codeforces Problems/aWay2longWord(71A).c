#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i, n, num;
    printf("enter the number of words:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the word:");
        scanf("%s", a);
        num=strlen(a);
        if (num > 10)
        {
                printf("%c%d%c\n",a[0],num-2,a[num-1]);
        
        }
        else
        {
            printf("%s",a);
        }
    }
    return 0;
}
