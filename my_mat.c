#include <stdio.h>
#include "my_mat.h"
#define n 10
#define MaxValue 10000

int m[n][n];

int findMin(int a, int b){
   if (a < b){
       return a;
   }
    return b;
}

void getMat(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&m[i][j]);
        }
    }
}
void route(){
    int i,j,k,x;
    int arr[n][n];
    scanf("%d %d" , &i, &j);
    for (k = 0; k < n; k++){
        for (x = 0; x < n; x++){
            arr[k][x] = m[k][x];
        }
    }
        if (m[k][x] == 0 && k != x){
            arr[k][x] = MaxValue;
        }
        for (int k = 0; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                arr[i][j] = findMin(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }
    if (arr[i][j] != MaxValue && i != j){
        printf("%s\n", "True");
    }else{
    printf("%s\n", "False");
}
}

void buildFastestRoutes(int y, int z){
    int k, x, i, j;
    int arr[n][n];
    for (k = 0; k < n; k++){
        for (x = 0; x < n; x++){
            arr[k][x] = m[k][x];
        }
    }
        if (m[k][x] == 0 && k != x){
            arr[k][x] = MaxValue;
        }
    for (int k = 0; k < n; k++){
            for (i = 0; i < n; i++){
                for (j = 0; j < n; j++){
                    arr[i][j] = findMin(arr[i][j], arr[i][k] + arr[k][j]);
                }
            }
        }
        if (y != z && arr[y][z] != MaxValue){
             printf("%d\n", arr[y][z]);
        }else{
            printf("-1\n");
        }
        
}

  void fastestRoute(){
        int i,j;
        scanf("%d" , &i);
        scanf("%d" , &j);
        buildFastestRoutes(i, j);
}
