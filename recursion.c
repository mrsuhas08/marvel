#include <stdio.h>
int sum(int x)
{
    int s=0;
    if(x==1)
    return x;
    s=x+sum(x-1);
    return s;
}
void main()
{
    int a,b,n;
    printf("input number: \n");
    scanf("%d",&n);
    a=n%10;
    b=sum(a);
    printf("Sum of digits: %d",b);
}
