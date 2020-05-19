#include<stdio.h>
int main()
{
    int n,count=0,x,y,z;
    scanf("\n%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if (x+y+z>=2)
        {
            count++;
        }
        
        
              
    }
    printf("%d",count);
    return 0;
}