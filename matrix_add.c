

// multiplexation of matrix
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[10][10], mult1[10][10],mult2[10][10],ta[10][10],tb[10][10],add[10][10], r, c, i, j, k;
    // system("cls");
    printf("enter the number of row=");
    scanf("%d", &r);
    printf("enter the number of column=");
    scanf("%d", &c);
    printf("enter the first matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("multiply of the matrix ab=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mult1[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mult1[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("transpose of matrix a and b\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            ta[i][j]=a[j][i];
            tb[i][j]=b[j][i];
        }
    }

printf("multiply of the matrix ta and tb=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mult2[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mult2[i][j] += ta[i][k] * tb[k][j];
            }
        }
    }

    printf("addition of both matrix mut1 and mut2 \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           add[i][j]=mult1[i][j]+mult2[i][j];
        }
    }


printf("AB+A'B'=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           printf("%d\t",add[i][j]);
        }
        printf("\n");
        
    }
}
    
