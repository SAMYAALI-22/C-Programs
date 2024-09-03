#include<stdio.h>
int main()
{
    int a[50],c,s=0;
    float avg;
    char ch;
    for(c=0;c<s;c++)
    {
        printf("Enter age of student no. %d,c+1 :");
        scanf("%d,&a[c]");
        s=s+a[c];
    }
    avg=s/50.0;
    printf("avg age is %f",avg);
    printf("Do you wish to see students age ? (Y/N) ");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        printf("Pls enter serial no.:");
        scanf("%d",&c);
        if(c>5)
        {
            printf("----oops----oops----Invalid Serial no.----oops----oops----");
        }
        else
        {
            printf("age of student : %d ",a[c-1]);
        }
    }
    return 1;
}
