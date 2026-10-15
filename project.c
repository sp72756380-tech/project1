#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a positive integer");
    scanf("%d",&n);
    for(i=1; i<=20;i++)
    {
        if(i%2==0)
        {
            sum+=i;
            printf("sum=%d",sum);
        }
        else
        {
            printf("odd number");
        }
        
    }
    return 0;
}