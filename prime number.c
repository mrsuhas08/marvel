#include <stdio.h>
int main()
{
    int n,a=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n/2;
    for(i=2;i<=a;i++)
    {
        printf("%d ",n);
        if(n%i==0)
        {
           
            printf("is not a prime number");
            break;
        }
        else
        {
           
            printf(" is a prime number");
            break;
        }
    }
}
