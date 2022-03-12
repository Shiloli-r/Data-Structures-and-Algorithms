#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){


    long long int Value = 100;

    int a[Value][Value], b[Value][Value], c[Value][Value];
    int i, j, k;

    // First Matrix
    printf(" First Matrix: \n");
    for (i = 0; i < Value; i++)
    {
        for (j = 0; j < Value; j++)
        {
            a[i][j] = rand() % 50;
        }
    }
    for (i = 0; i < Value; i++)
    {
        for (j = 0; j < Value; j++)
        {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }

    // Second Matrix
    printf("\n Second Matrix: \n");
    for (i = 0; i < Value; i++)
    {
        for (j = 0; j < Value; j++)
        {
            b[i][j] = rand() % 50;
        }
    }
      for (i = 0; i < Value; i++)
    {
        for (j = 0; j < Value; j++)
        {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    time_t begin = time(NULL);
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
    time_t end = time(NULL);
    printf("\nThe results is \n");
    for (i = 0; i < Value; i++)
    {
        for (j = 0; j < Value; j++)
        {
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }

    printf("\n Time taken is: %f", (end - begin));

    return 0;
}
