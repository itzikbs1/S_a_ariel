#include <stdio.h>
#include <math.h>
#include "my_mat.h"


int main(){
    
    char x;
    int i=1;
    
    while (i != 0){
    scanf("%c", &x);
     if (x == 'A'){
        getMat();
    }   
    if (x == 'B'){
        route();
    }
     if (x == 'C'){
        fastestRoute();
    }
    if (x == 'D'){
        i = 0;
    }
    }
    return 0;
}
