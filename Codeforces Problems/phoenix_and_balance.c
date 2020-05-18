#include<stdio.h>
#include<math.h>
int main()
{
    int  t,n,a;
    scanf("%d",&t);
    for (int  i = 0; i < t; i++)
    {
        scanf("%d",&n);
        n=(n/2)+1;
        a=pow(2,n)-2;

        printf("%d\n",a);
    }
      
    
    return 0;
}