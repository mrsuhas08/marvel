#include <stdio.h>
int lcm(int n, int m)
{
    static int s=1;
    if((s%n==0) && (s%m==0))
    {
       return s;
    }
    s++;
    lcm(n,m);
}
int main()
{
    int a,n,m;
    printf("input first number: ");
    scanf("%d",&n);
    printf("input second number: ");
    scanf("%d",&m);
    a = lcm(n,m);
    printf("LCM of %d and %d = %d", n, m, a);
}
