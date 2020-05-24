#include<stdio.h>
#include<math.h>
int main()
{
    int t,l1,b1,l2,b2,a[4];

    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d",&l1,&b1);
        scanf("%d %d",&l2,&b2);
        if (l1>b1)
        {
            a[0]=l1;
            a[1]=b1;
        }
        else
        {
            a[0]=b1;
            a[1]=l1;
        }
        if (l2>b2)
        {
            a[2]=l2;
            a[3]=b2;
        }
        else
        {
            a[2]=b2;
            a[3]=l2;
        }
        if (a[0]==a[2]&&a[1]+a[3]==a[0])
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
