/* Jogo :Car Racing -
 Implementado  em linguagem C,para se divertir no terminal de comandos(console).

Para iniciar basta executar o comando:
    start programa.exe.

Autor: jefferson Douglas de Campos
Data : 22/11/2019
*/

#include "car.h"
#include "display.h"


int main(){
   char matrix[ROWS][COLUMNS];

    //Criando Matrix Em Branco
    createMatrix(matrix);   

    //Apaga cursor da tela
    ShowConsoleCursor(0);
    system("cls");

    //Mostra a Matrix na tela
    printMatrix(matrix);

    system("pause");
    return 0;
}