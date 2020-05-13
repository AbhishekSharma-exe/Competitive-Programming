#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int count1=0,count2=0;
    printf("enter the string:");
    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]=='z')
            count1++;
        else      
            count2++;
    }    

     if (count2==2*(count1))
     {
         printf("YES");
     }
     else
     {
         printf("NO");
     }
             
    return 0;
}