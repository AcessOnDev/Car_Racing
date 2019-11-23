/* Jogo :Car Racing 
 Implementado  em linguagem C,para se divertir no terminal de comandos(console).

Autor: jefferson Douglas de Campos
Data : 22/11/2019
*/

#include "car.h"

//Cria a Matriz com espaços em Branco
void createMatrix(char matrix[ROWS][COLUMNS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            matrix[i][j] = ' ';
        }
    }
}

void printMatrix(char matrix[ROWS][COLUMNS])
{
    int i, j;

    printf("\t\t\t\t\t");
    //Linha de cima
    for (j = 0; j < COLUMNS + 4; j++)
    {
        printf("*");
    }
    printf("\n");

    //Matriz do jogo
    for (i = 0; i < ROWS; i++)
    {
        printf("\t\t\t\t\t*%c", BAR);
        for (j = 0; j < COLUMNS; j++)
        {
            printf("%c", matrix[i][j]);
        }
        printf("%c*\n", BAR);
    }

    printf("\t\t\t\t\t");
    //Linha de baixo
    for (j = 0; j < COLUMNS + 4; j++)
    {
        printf("*");
    }
    printf("\n\n\n");  
    
}
