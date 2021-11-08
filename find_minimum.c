#include<stdio.h>
int main()
{
    int i,n,arr[]={13,9,9,18,43};
    // printf(" Enter array size ");
    // scanf("%d",&n);
    int lenth=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    
    for(i=0;i<lenth;i++)
    {
       if(arr[i]<min)
       {
           min=arr[i];
       }
    }
  
     printf(" minimum %d ",min);
     return 0;

}