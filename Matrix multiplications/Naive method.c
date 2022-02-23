#include <stdio.h>
#include <time.h> 
#include <stdlib.h>


int main(){
    int dimension = 4;
    
    int A[dimension][dimension], B[dimension][dimension], C[dimension][dimension];
    int i, j, k;

    // create a random matrix A
     for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
        {
            A[i][j] = rand() % 5;
        }
    }
    printf("\n Random Matrix A: \n");
     for(int i=0; i<dimension; i++){
        for(int j=0; j<dimension; j++){
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    // create a random matrix B
     for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
        {
            B[i][j] = rand() % 5;
        }
    }
     printf("\n Random Matrix B: \n");
     for(int i=0; i<dimension; i++){
        for(int j=0; j<dimension; j++){
            printf("%d  ", B[i][j]);
        }
        printf("\n");
    }

    /* Multiplication - measure time */
    clock_t t;
    t = clock();

    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < dimension; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    for(int i=0; i<dimension; i++){
        for(int j=0; j<dimension; j++){
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }

    printf("Time Taken: %f seconds", time_taken);


    return 0;
}
