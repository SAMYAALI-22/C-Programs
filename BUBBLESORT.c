#include<stdio.h>
int main()
{
int arr[5],i,temp,j,c=0;
for(i=0;i<5;i++)
   {
   printf("enter element no.%d",i+1);
   scanf("%d",&arr[i]);
   }
   for(j=0;j<5;j++)
      {
      for(i=0;i<4-j;i++)
         {
         c=c+1;
         if (arr[i+1]>arr[i])
            {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
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