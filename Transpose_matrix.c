
// #include <stdio.h>

// int main()
// {
//     int arr1[7][7],i,j,r,c;
//     printf(" enter the matrix number \n");
//     scanf("%d%d",&r,&c);
//     printf(" enter the first matrix elements \n");
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//             scanf("%d",&arr1[i][j]);
//         }
//         printf("\n");
//     }
    
//     // Display matrix 
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//           printf("%d\t",arr1[i][j]);
//         }
//         printf("\n");
//     }
     
//     //  Transposes Matrix  
    
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//           printf("%d\t",arr1[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
    
// }

#include<stdio.h>
#include<math.h>

int main()
{
    int tra[10][10],i,j,r,c;
    printf("Enter matrix Size ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix Element's");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++);
        {
            scanf("%d\t",&tra[i][j]);
        }
        printf("\n");
    }
    
    // display of matrix

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++);
        {
            printf("%d\t",tra[i][j]);
        }
        printf("\n");
    }

    // Transpose Of matrix 
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++);
        {
            printf("%d\t",tra[j][i]);
        }
        printf("\n");
    }
    return 0;
}

