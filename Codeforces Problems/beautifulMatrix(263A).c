#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[5][5], x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]);
            if (a[i][j]==1)
            {
               x=abs(i-2);
               y=abs(j-2);
            }
            
        }   
            
    
        
    }
    printf("%d",x+y);
    return 0;
}
