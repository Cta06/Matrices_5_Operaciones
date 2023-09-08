// Created by Cta_Last

#include "Funciones Mat.h"
 int main(){
    int n, m, p, op, select;

     printf("Bienvenido al programa de operaciones con matrices\n");

     printf("\nIngrese el numero de filas y columnas que desesa en cada matriz:\n");
     scanf("%d %d", &n, &m);
     fflush(stdin);

     int matrizA[n][m];
     int matrizB[n][m];
     int matrizR[n][m];
     int vector[n];
     int matrizR_col[m];

     printf("\nMatriz A:\n");
     leerMat(n, m, matrizA);

     printf("\nMatriz B:\n");
     leerMat(n, m, matrizB);

     printf("\nElige la operacion que deseas realizar:\n");
     printf("\n1. Suma de matrices\n");
     printf("2. Resta de matrices\n");
     printf("3. Multiplicacion de matrices\n");
     printf("4. Multiplicacion de un vector por una matriz\n");
     printf("5. Suma de columnas\n");
     scanf("%d", &op);
     fflush(stdin);

     switch (op){
         case 1:
             sumaMat(n, m, matrizA, matrizB, matrizR);
             printf("\nResultado de la suma:\n");
             imprimirMat(n, m, matrizR);
             break;
         case 2:
             restaMat(n, m, matrizA, matrizB, matrizR);
             printf("\nResultado de la resta:\n");
             imprimirMat(n, m, matrizR);
             break;
         case 3:
             productoMat(n, m, matrizA, matrizB, matrizR);
             printf("\nResultado de la multiplicacion:\n");
             imprimirMat(n, m, matrizR);
             break;
         case 4:
             printf("Ingrese los valores del vector de %d filas:\n", n);
             for(int i=0; i<n; i++){
                 printf("Valor [%d]:", i);
                 scanf("%d", &vector[i]);
                 fflush(stdin);
             }

             printf("Ingresa una matriz de %d x %d\n", n, m);
             leerMat(n, m, matrizB);

             productoVecMat(n, m, vector, matrizB, matrizR);
             printf("\nResultado de la multiplicacion del vector por una matriz:\n");
             imprimirMat(n, m, matrizR);
             break;
         case 5:
             printf("\nElija la matriz de la cual desea realizar la suma de columnas:\n");
             printf("\n1. Matriz A\n");
             printf("2. Matriz B\n");
             scanf("%d", &select);
             fflush(stdin);

             if(select != 1 && select != 2){
                 printf("Opcion no valida.\n");
                 return 1;
             }

             sumaCol(n, m, matrizA, matrizB, matrizR_col, select);
             printf("\nSuma de columnas:\n");
             for(int j=0; j<m; j++){
                 printf("Columna %d: %d\n", j+1, matrizR_col[j]);
             }
             break;
         default:
             printf("\nOpcion no valida.\n");
     }

     return 0;
}