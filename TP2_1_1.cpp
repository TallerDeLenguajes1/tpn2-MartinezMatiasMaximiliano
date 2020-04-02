/*
 ============================================================================
 Name        : tp2_1.cpp
 Author      : Martinez Matias Maximiliano
 Version     : 
 Copyright   :
 Description : Trabajo Practico 2 de Taller de Lenguajes 1
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 4 
#define M 5 

int f,c;
double mt[N][M];

int main(){
    for(f = 0;f<N; f++){
        for(f = 0;f<N; f++){
            printf("%lf   ", mt[f][c]);
            }
            printf("\n"); 
    }
    getchar();
    return 0;
} 