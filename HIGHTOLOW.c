#include<stdio.h>
int main()
{
    int arr[5],i,j,temp,c=0;
    for(i=0;i<5;i++)
    {
        printf("Enter element");
        scanf("%d",&arr[i]);
    }
    for(j=0;j<4;j++)
    {
    for(i=j+1;i<5;i++)
       {
        c=c+1;
        if(arr[i]>arr[j])
         {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
         }
       }
    }
     printf("sorted array is \n");
     for(i=0;i<5;i++)
        {
        printf("%d",arr[i]);
        }
        printf("Total checks are : %d",c);
        return 1;
}
