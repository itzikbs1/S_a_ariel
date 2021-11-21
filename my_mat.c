#include <stdio.h>
#include "my_mat.h"
#define N 10



    int min(int a, int b){
        if(a < b)
        return a;
    return b;
    }
    void valueOfTheArray(int mat[N][N]){
        for (int i=0; i<N; i++){
            for(int j=0; j<N; j++){
            // printf("Enter element [%d ,%d] : ", i,j);
            scanf("%d", &mat[i][j]);  
            }
        }
    }

    void checkPath(int mat[N][N]){
        int i, j;
        // int[][] mat = arr;
        // printf("Enter i and j for first matrix: ");
        scanf("%d %d", &i, &j);
        valueOfTheArray(mat);
        if (mat[i][j] >= 0){
            printf("True");
        }
        printf("False");
    }

    void calculate(int mat[N][N]){
        // Matrix = arr;
    valueOfTheArray(mat);
    for (int k = 0; k < N; k++){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                mat[i][j] = min(mat[i][j], (mat[i][N] + mat[N][j]));
                    
                }
            }
        }   
    }

    void smallestPath(int mat[N][N]){
        int i, j;
        scanf("%d %d", &i, &j);
        calculate(mat);
        if (mat[i][j] >= 0){
            printf("%d", mat[N][N]);
        }
        else{
            printf("-1");
        }
    }