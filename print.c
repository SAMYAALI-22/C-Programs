#include<stdio.h>
int main()
{
    int r,c,sp;
    for(r=1;r<=5;r++)
    {
        for(sp=0;sp<5-r;sp++)
        {
            printf(" ");
        }
        for(c=0;c<r;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
        return 1;
}
    