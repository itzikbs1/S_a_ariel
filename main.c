#include <stdio.h>
#include <math.h>
#include "my_mat.h"

#define N 10

int main(){
    
    char x;
    int mat[N][N];
    scanf("%c", &x);

    while (x != 'D')
    {
     if (x == 'A'){
        valueOfTheArray(mat);
    }   
    if (x == 'B'){
        checkPath(mat);
    }
     if (x == 'C'){
        smallestPath(mat);
    }
    }
    return 0;
}