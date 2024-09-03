#include<stdio.h>
int main()
{
    float N,D,s;
    int n,c;
    s=0;
    printf("enter value of n:");
    scanf("%d",&n);
    N=1;
    D=3;
    c=0;
    while(c<n)
    {
        c=c+1;
        if(c%2==0)
        {
        s = s - N/D;
        }
        else
        s = s + N/D;
        N=N+2;
        D=D+2;
    }
    printf("Sum is %f",s);
    return 1;
}