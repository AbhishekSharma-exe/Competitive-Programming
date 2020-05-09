#include<stdio.h>
int main()
{
    int d,r[10],x[10],t=0;
    printf("Enter the days he went to doc.:");
    scanf("%d",&d);
    printf("enter the radius:");
    for (int i = 0; i <d; i++)
    {
        scanf("%d",&r[i]);
    }
    printf("enter grams of horlicks:");
    for (int i = 0; i < d; i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i = 0; i < d; i++)
    {
        if ((2*(22/7)*r[i])<=(100*x[i]))
        {
            t++;
        }
        
    }
    printf("\n%d",t);
    return 0;
}