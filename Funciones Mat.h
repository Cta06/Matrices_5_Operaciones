// Created by Cta_Last
#ifndef CLIONPROJECTS_FUNCIONES_MAT_H
#define CLIONPROJECTS_FUNCIONES_MAT_H
#include <stdio.h>

//Leer matriz
void leerMat(int n, int m, int matriz[][m]){
    printf("Ingresa los elementos de la matriz: \n");
    for(int i=0; i<n; i++) {
        for (int j = 0; j < m; j++){
            printf("Valor [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }
}

//Imprimir matriz
void imprimirMat(int n, int m, int matriz[][m]){
    for(int i=0; i<n; i++){
        printf("|");
        for(int j=0; j<m; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("|");
        printf("\n");
    }
}

//Suma de matrices
void sumaMat(int n, int m, int matrizA[][m], int matrizB[][m], int matrizR[][m]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

//Resta de matrices
void restaMat(int n, int m, int matrizA[][m], int matrizB[][m], int matrizR[][m]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            matrizR[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

//Multiplicación de matrices
void productoMat(int n, int m, int matrizA[][m], int matrizB[][m], int matrizR[][m]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            matrizR[i][j] = matrizA[i][j] * matrizB[i][j];
        }
    }
}

void productoVecMat(int n, int m, int vector[], int matrizB[][m], int matrizR[][m]) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            matrizR[i][j] = vector[i] * matrizB[i][j];
        }
    }
}

//Suma de columnas
void sumaCol(int n, int m, int matrizA[][m], int matrizB[][m], int matrizR[], int select){
    for(int j=0; j<m; j++){
        matrizR[j] = 0;
        if (select == 1){
            for(int i=0; i<n; i++){
                matrizR[j] += matrizA[i][j];
            }
        } else if (select == 2){
        for(int i=0; i<n; i++){
            matrizR[j] += matrizB[i][j];
            }
        }
    }
}

#endif