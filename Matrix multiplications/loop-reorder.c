/** Probably separating them into different files and running them separately will have a better/more predictable result **/

#include <stdio.h>
#include <time.h> 
#include <stdlib.h>


int main(){
    int dimension = 50;
    
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

    // create a random matrix B
     for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
        {
            B[i][j] = rand() % 5;
        }
    }

    /************************************ i - j - k ***********************************/
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


    printf("Time Taken (i-j-k): %f seconds \n", time_taken);
    /*************************************************************************************/


    /************************************ j - i - k ***********************************/
    t = clock();

    for (int j = 0; j < dimension; j++)
    {
        for (int i = 0; i < dimension; i++)
        {
            C[i][j] = 0;
            for (int k = 0; k < dimension; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds


    printf("Time Taken (j-i-k): %f seconds\n", time_taken);
    /*************************************************************************************/

    /************************************ k - j - i ***********************************/
    t = clock();

    for (int k = 0; k < dimension; k++)
    {
        for (int j = 0; j < dimension; j++)
        {
            C[i][j] = 0;
            for (int i = 0; i < dimension; i++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("Time Taken (k-j-i): %f seconds\n", time_taken);
    /*************************************************************************************/


    /************************************ j - k - i ***********************************/
    t = clock();

    for (int j = 0; j < dimension; j++)
    {
        for (int k = 0; k < dimension; k++)
        {
            C[i][j] = 0;
            for (int i = 0; i < dimension; i++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("Time Taken (j-k-i): %f seconds\n", time_taken);
    /*************************************************************************************/

    return 0;
}
