#include<stdio.h>
int main()
{
    int p[5],c[5],m[5],i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter score in PHYSICS :");
        scanf("%d",&p[i]);
        printf("Enter score in CHEMISTRY :");
        scanf("%d",&c[i]);
        printf("Enter score in MATHS :");
        scanf("%d",&m[i]);
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<5;i++)
        {
            printf("\n Score of student %d of sub %d is %d ",i+1,j+1,p[i],c[i],m[i]);
        }
    }
}