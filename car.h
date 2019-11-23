/* Jogo :Car Racing 
 Implementado  em linguagem C,para se divertir no terminal de comandos(console).

Autor: jefferson Douglas de Campos
Data : 22/11/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ROWS 25
#define COLUMNS 15
#define BAR 178


void createMatrix(char matrix[ROWS][COLUMNS]);
void printMatrix(char matrix[ROWS][COLUMNS]);