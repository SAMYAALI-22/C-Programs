#include<stdio.h>
int main()
{
     int marks[4][3],c,r,s,avg[4];
     for(r=0;r<4;r++)
    {
        s=0;
        for(c=0;c<3;c++)
        {
            printf("Entermarks of student %d in subject %d",r+1,c+1);
            scanf("%d",& marks[r][c]);
            s=s+marks[r][c];
        }
        avg[r]=s/3;
    }
    for(r=0;r<4;r++)
    {
        if(avg[r]>80)
        printf("\n Grade Of Student Is A");
        else
        if(avg[r]>=60&&avg[r]<=80)
        printf("\n Grade Of Student Is B");
        else
        printf("\n Grade Of Student Is C");   
    }
}