#include<stdio.h>
int main()
{
    int a,s,n;
    printf("Value of n:");
    scanf("%d",&n);
    a=1;
    s=0;
    while(a<=n)
    {
        s=s+a;
        a++;
    }
    printf("Sum is %d",s);
}