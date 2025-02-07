#include <stdio.h>
int main()
{
    char l, A, M, mat, simp;
    float B, C;
    int i, j, m, n, k;
    printf("\n A SIMPLE CALCULATOR!!!!\n");
    printf("\nEnter 'A' for simple calculation and 'M' for matrix :\n ");
    scanf(" %c", &l);
    if (l == 'A')
    {
        printf("\n 'a' for ADDITION \n");
        printf("\n 'b' for SUBTRACTION \n ");
        printf("\n 'c' for DIVISION \n ");
        printf("\n 'd' for MULTIPLICATION \n ");

        printf("\n 'f' for PERCENTAGE\n ");
        printf(" ENTER THE FUNCTION YOU WANT TO PERFORM:\n ");
        scanf(" %c", &simp);
        switch (simp)
        {
        case 'a':
            printf("enter two number:");
            scanf("%f%f", &B, &C);
            printf("%f + %f = %f ", B, C, B + C);
            break;
        case 'b':
            printf("enter two number:");
            scanf("%f%f", &B, &C);
            printf("%f - %f = %f ", B, C, B - C);
            break;
        case 'c':
            printf("enter two number:");
            scanf("%f%f", &B, &C);
            printf("%f / %f = %f ", B, C, B / C);
            break;
        case 'd':
            printf("enter two number:");
            scanf("%f%f", &B, &C);
            printf("%f * %f = %f ", B, C, B * C);
            break;

        case 'f':
            printf("Total number :");
            scanf("%f", &C);
            printf("You scored : ");
            scanf("%f", &B);
            printf(" PERCENTAGE = %.2f%%", (B / C) * 100);
        }
    }
    else if (l == 'M')
    {
        printf("\n'g' for matrix multiplication\n ");
        printf("\n'h' for matrix addition \n ");
        printf(" ENTER THE FUNCTION YOU WANT TO PERFORM:\n ");
        scanf(" %c", &mat);
        switch (mat)
        {
        case 'h':

            
            printf("enter the number of rows of matrix: ");
            scanf("%d", &m);
            printf("enter the number of column of matrix: ");
            scanf("%d", &n);
            if (m <= 0 || n <= 0)
            {
                printf("INVALID!");
            }
            else
            {
                int arr1[m][n];
                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        printf("enter the value of %d , %d element of first array : ", i, j);
                        scanf("%d", &arr1[i][j]);
                    }
                }
                int arr2[m][n];
                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        printf("enter the value of %d , %d element of second array  : ", i, j);
                        scanf("%d", &arr2[i][j]);
                    }
                }
                printf("\nSum of the matrices is:\n");
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        printf(" %d", arr1[i][j] + arr2[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 'g':
            
            printf("enter the number of rows of matrix: ");
            scanf("%d", &m);
            printf("enter the number of column of matrix: ");
            scanf("%d", &n);
            if (m <= 0 || n <= 0)
            {
                printf("INVALID!");
            }
            else
            {
                int arr1[m][n];
                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        printf("enter the value of %d , %d element of first array : ", i, j);
                        scanf("%d", &arr1[i][j]);
                    }
                }
                int arr2[n][k];
                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < k; j++)
                    {
                        printf("enter the value of %d , %d element of second array  : ", i, j);
                        scanf("%d", &arr2[i][j]);
                    }
                }
                printf("\nmultiplication of the matrices is:\n");
                int result[m][k];
                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < k; j++)
                    {
                        result[i][j] = 0;
                        for (int p = 0; p < n; p++)
                        {
                            result[i][j] += arr1[i][p] * arr2[p][j];
                            printf("\n");
                        }
                    }
                }
            }
            break;
        }
    }
    return 0;
}
