
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int **Matriz = MatrizEnteros("peliculasFavoritasESD135_2021.csv");
    for (int i = 0; i < 60; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d",Matriz[i][j]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

