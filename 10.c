#include<stdio.h>
#include<math.h>

void func_value (double d);
void func_array1D (double d[]);
void func_array2D (double d[][5]);
void func_string (char s[]);

int main ()
{
//    int i,j;
//    int nums1[3][4];
//    int nums2[3][4] = {{8,16,9,52},
//        {3,15,27,6},
//        {14,25,2,10}
//    };
//    int nums3[3][4] = {8,16,9,52,
//                      3,15,27,6,
//                      14,25,2,10
//                     };
//    int nums4[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
//    printf("Values in array:\n");
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<4;j++)
//        {
//            printf("%10d ",nums3[i][j]);
//        }
//        printf("\n");
//    }

    /*Initialization of array*/
//    int A[100][100], i, j, rows, columns;
//    printf("Number of rows: ");
//    scanf("%d",&rows);
//    printf("Number of columns: ");
//    scanf("%d",&columns);
//    for(i=0; i<rows; i++)
//    {
//        for(j=0; j<columns; j++)
//        {
//            // printf("A[%d][%d]: ",i, j);
//            // scanf("%d",&A[i][j]);
//            A[i][j] = rand();
//        }
//    }
//    printf("Values in array A:\n");
//    for(i=0; i<rows; i++)
//    {
//        for(j=0; j<columns; j++)
//        {
//            printf("%10d ",A[i][j]);
//        }
//        printf("\n");
//    }

    /*Average of all array elements*/
//    int A[100][100], i, j, rows, columns;
//    float sum = 0;
//    printf("Number of rows: ");
//    scanf("%d",&rows);
//    printf("Number of columns: ");
//    scanf("%d",&columns);
//    for(i=0; i<rows; i++)
//    {
//        for(j=0; j<columns; j++)
//        {
//            A[i][j] = rand();
//        }
//    }
//    for(i=0; i<rows; i++)
//    {
//        for(j=0; j<columns; j++)
//        {
//            sum += A[i][j];
//        }
//    }
//    printf("Values in array A:\n");
//    for(i=0; i<rows; i++)
//    {
//        for(j=0; j<columns; j++)
//        {
//            printf("%10d ",A[i][j]);
//        }
//        printf("\n");
//    }
//    printf("Average of all values in array A: %f\n", sum/(rows*columns));

    /*Adding two matrix*/
//    int A[100][100], B[100][100], C[100][100];
//    int i, j, rowsA, columnsA, rowsB, columnsB;
//    printf("Number of rows in A: ");
//    scanf("%d",&rowsA);
//    printf("Number of columns in A: ");
//    scanf("%d",&columnsA);
//    printf("Number of rows in B: ");
//    scanf("%d",&rowsB);
//    printf("Number of columns in B: ");
//    scanf("%d",&columnsB);
//    if(rowsA != rowsB || columnsA != columnsB)
//    {
//        printf("Invalid matrix dimensions\n");
//        return 0;
//    }
//    for(i=0; i<rowsA; i++)
//    {
//        for(j=0; j<columnsA; j++)
//        {
//            // printf("A[%d][%d]: ",i, j);
//            // scanf("%d",&A[i][j]);
//            A[i][j] = rand()%10;
//        }
//    }
//    printf("\n");
//    for(i=0; i<rowsB; i++)
//    {
//        for(j=0; j<columnsB; j++)
//        {
//            // printf("B[%d][%d]: ",i, j);
//            // scanf("%d",&B[i][j]);
//            B[i][j] = rand()%10;
//        }
//    }
//    for(i=0; i<rowsA; i++)
//    {
//        for(j=0; j<columnsA; j++)
//        {
//            C[i][j] = A[i][j] + B[i][j];
//        }
//    }
//    printf("\nPrinting A:\n");
//    for(i=0; i<rowsA; i++)
//    {
//        for(j=0; j<columnsA; j++)
//        {
//            printf("%10d ",A[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\nPrinting B:\n");
//    for(i=0; i<rowsA; i++)
//    {
//        for(j=0; j<columnsA; j++)
//        {
//            printf("%10d ",B[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\nResult:\n");
//    for(i=0; i<rowsA; i++)
//    {
//        for(j=0; j<columnsA; j++)
//        {
//            printf("%10d ",C[i][j]);
//        }
//        printf("\n");
//    }

    /*Matrix multiplication*/
//    int A[100][100], B[100][100], C[100][100];
//    int i, j, k, rowsA, columnsA, rowsB, columnsB;
//    int sum;
//    printf("Number of rows in A: ");
//    scanf("%d",&rowsA);
//    printf("Number of columns in A: ");
//    scanf("%d",&columnsA);
//    printf("Number of rows in B: ");
//    scanf("%d",&rowsB);
//    printf("Number of columns in B: ");
//    scanf("%d",&columnsB);
//    if(columnsA != rowsB)
//    {
//        printf("Invalid matrix dimensions\n");
//        return 0;
//    }
//    for(i=0; i<rowsA; i++)
//    {
//        for(j=0; j<columnsA; j++)
//        {
//            printf("A[%d][%d]: ",i, j);
//            scanf("%d",&A[i][j]);
//        }
//    }
//    printf("\n");
//    for(i=0; i<rowsB; i++)
//    {
//        for(j=0; j<columnsB; j++)
//        {
//            printf("B[%d][%d]: ",i, j);
//            scanf("%d",&B[i][j]);
//        }
//    }
//    for(i=0; i<rowsA; i++)
//    {
//        for(j=0; j<columnsB; j++)
//        {
//            sum = 0;
//            for(k=0; k<columnsA; k++)
//                sum += A[i][k]*B[k][j];
//            C[i][j] = sum;
//        }
//    }
//    printf("Result:\n");
//    for(i=0; i<rowsA; i++)
//    {
//        for(j=0; j<columnsB; j++)
//        {
//            printf("%10d ",C[i][j]);
//        }
//        printf("\n");
//    }




// -------------------- Calling a function




    double d = 5;
    printf("Before calling d = %lf\n",d);
    func_value(d);
    printf("After calling d = %lf\n",d);


//    double d[5] = {1,2,3,4,5};
//    int i;
//    printf("Before calling:\n");
//    for (i=0; i < 5;i++)
//    {
//        printf("%lf  ", d[i]);
//    }
//    func_array1D(d);
//    printf("\nAfter calling:\n");
//    for (i=0; i < 5;i++)
//    {
//        printf("%lf  ", d[i]);
//    }


//    double d[3][5] = {{1,2,3,4,5},
//        {6,7,8,9,10},
//        {11,12,13,14,15}
//    };
//    int i,j;
//    printf("Before calling:\n");
//    for(i=0; i<3; i++)
//    {
//        for(j=0; j<5; j++)
//        {
//            printf("%lf   ",d[i][j]);
//        }
//        printf("\n");
//    }
//    func_array2D(d);
//    printf("\nAfter calling:\n");
//    for(i=0; i<3; i++)
//    {
//        for(j=0; j<5; j++)
//        {
//            printf("%lf   ",d[i][j]);
//        }
//        printf("\n");
//    }


//    char s[100] = "Welcome to C";
//    printf("Before calling:\n");
//    printf("%s\n", s);
//    func_string(s);
//    printf("\nAfter calling:\n");
//    printf("%s\n", s);

    return 0;
}

void func_value (double d)
{
    d = 100;
}
void func_array1D (double d[])
{
    d[3] = 100;

}
void func_array2D (double d[][5])
{
    d[1][4] = 100;
}
void func_string (char s[])
{
    strcat(s," and C++");
}
