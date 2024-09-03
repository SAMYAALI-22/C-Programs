#include<stdio.h>
int main()
{
    int a[5],c,s;
    float avg;
    c=0;
    while(c<5)
    {
        printf("Enter age.");
        scanf("%d",&a);
        if(a<0)
        continue;
        s=s+a;
        c=c+1;
    }
    printf("avg age is %f",s/5.0);
    return 1;
}