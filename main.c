#include <stdio.h>
#include <math.h>
#include "my_mat.h"

int main(){
    
    char x;
    int i=1;
    scanf("%c", &x);
    while (i != 0){
     if (x == 'A'){
        getMat(mat);
    }   
    if (x == 'B'){
        route(mat);
    }
     if (x == 'C'){
        fastestRoute(mat);
    }
    if (x == 'D'){
        i = 0;
    }
    scanf("%c", &x);
    }
    return 0;
}
