#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){


    long long int Value = 200;

    int a[Value][Value], b[Value][Value], c[Value][Value], T[Value][Value];
    int i, j, k;

    // First Matrix
   // printf(" First Matrix: \n");
    for (i = 0; i < Value; i++)
    {
        for (j = 0; j < Value; j++)
        {
            a[i][j] = rand() % 5;
        }
    }
    // for (i = 0; i < Value; i++)
    // {
    //     for (j = 0; j < Value; j++)
    //     {
    //         printf("%lld ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // Second Matrix
  //  printf("\n Second Matrix: \n");
    for (i = 0; i < Value; i++){
        for (j = 0; j < Value; j++)
        {
            b[i][j] = rand() % 5;
        }
    }

    // print second matrix
    //   for (i = 0; i < Value; i++)
    // {
    //     for (j = 0; j < Value; j++)
    //     {
    //         printf("%lld ", b[i][j]);
    //     }
    //     printf("\n");
    // }

    // transpose Second matrix
    for(int i = 0; i<Value; i++){
        for(int j=0; j<Value; j++){
            T[j][i] = b[i][j];
        }

    }
        // print transpose of second matrix
    //     printf("\n Transpose of Second Matrix: \n");
    //   for (i = 0; i < Value; i++)
    // {
    //     for (j = 0; j < Value; j++)
    //     {
    //         printf("%lld ", T[i][j]);
    //     }
    //     printf("\n");
    // }

    // Multiplication
    clock_t t;
    t = clock();
    for (i = 0; i < Value; i++)
    {
        for (j = 0; j < Value; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < Value; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }    
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds


    // printf("\nThe results is \n");
    // for (i = 0; i < Value; i++)
    // {
    //     for (j = 0; j < Value; j++)
    //     {
    //         printf("%lld ", c[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("\n Time taken is: %f seconds", time_taken);

    // Transpose experiments
        // Multiplication
    t = clock();
    for (i = 0; i < Value; i++)
    {
        for (j = 0; j < Value; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < Value; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * T[j][k];
            }
        }
    }    
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    // printf("\nThe results after transposing is \n");
    // for (i = 0; i < Value; i++)
    // {
    //     for (j = 0; j < Value; j++)
    //     {
    //         printf("%lld ", c[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("\n Time taken after transpose is: %f seconds", time_taken);


    return 0;
}
