#include <stdio.h>
#include "my_mat.h"
#define n 10
#define MaxValue 10000000

int m[n][n];

int findMin(int a, int b){
   if (a < b){
       return a;
   }
    return b;
}

  void copyArray(int a[n][n]){
    int k, x, i, j;
    for (int i = 0; i < n; i++){
       for (int j = 0; j < n; j++){
           a[i][j] = m[i][j];
           if (m[i][j] == 0 && i != j){
           a[i][j] = MaxValue;
        }
        }
    }
    for (k = 0; k < n; k++){
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                a[i][j] = findMin(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
    }

void getMat(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&m[i][j]);
        }
    }
}
void route(){
    int i, j;
    int arr[n][n];
    scanf("%d %d" , &i, &j);
    copyArray(arr);
    
    if (arr[i][j] != MaxValue && i != j){
        printf("%s", "True\n");
    }else{
    printf("%s", "False\n");
}
}

void buildFastestRoutes(int y, int z){
    int k, x, i, j;
    int arr[n][n];
    copyArray(arr);

    for (k = 0; k < n; k++){
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
        scanf("%d %d" , &i, &j);
        buildFastestRoutes(i, j);
}
