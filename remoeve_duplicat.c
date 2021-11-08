#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,arr[100];
    printf("Enter array size\n ");
    scanf("%d",&n);
    printf("Enter array element's\n");

    for ( i = 0; i <n; i++)
    {
        printf(" Array element's = ");
        scanf("%d",&arr[i]);/* code */
    }
    
    // find dublicate array element's

    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;i++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }

                n--;
                j--;

            }
        }
    }

    // after Delete duplicat element's
    for(i=0;i<n;i++)
    {
        printf(" \ndisplay element's %d",arr[i]);
    }
    return 0;
}