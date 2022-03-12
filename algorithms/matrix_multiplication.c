#include <stdio.h>
#define N 2
#define P 3
#define M 2


int main()
{
    int A[N][P] = {{1, 2, 3}, {4, 5, 6}},
        B[P][M] = {{7, 8}, {9, 10}, {11, 12}},
        C[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < P; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }


    return 0;
}
