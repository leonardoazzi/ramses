#include <stdio.h>

#define V 0
#define E 1
#define D 2

int main(){

    int dataVec[14] = {-1,-1,5,3,4,100,6,7,8,9,10,11,12,13};

    int *navVec[3];

    int i = 0;

    navVec[V] = &dataVec[i]; // V
    navVec[E] = &dataVec[i+1]; // E
    navVec[D] = &dataVec[i+2]; // D

    printf("Indice: %d \n", i);

    printf("V: %d \t E: %d \t D: %d \n", *navVec[V], *navVec[E], *navVec[D]);

    if(*navVec[0] < 0){
        i = *navVec[2]; // D

        navVec[V] = &dataVec[i]; // V
        navVec[E] = &dataVec[i+1]; // E
        navVec[D] = &dataVec[i+2]; // D 

        printf("Indice: %d \n", i);

        printf("V: %d \t E: %d \t D: %d \n", *navVec[V], *navVec[E], *navVec[D]);

    }

}

