#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

//exibir tabuleiro
void ExibirTabuleiro(int tabuleiro[10][10]) {
    printf("=====  Tabuleiro  =====\n");
    printf("    A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        
        i<9?
        printf("%d-  ", i + 1) :
        printf("%d- ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    int tamanho = 3; // Tamanho dos navios
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0 (vazio)

    int navioH[] = {2, 1}; // Coordenadas do navio horizontal (linha 3, colunas 2 a 4)
    int navioV[] = {5, 4}; // Coordenadas do navio vertical (coluna 6, linhas 5,6,7)

    int navioDa[] = {6, 0}; // Coordenadas do navio diagonal crescente (linha 7, coluna 1 a linha 5 coluna 3)
    int navioDd[] = {0, 7}; // Coordenadas do navio diagonal decrescente (linha 1, coluna 8 a linha 3 coluna 10)

    // Posiciona um navio horizontalmente
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[navioH[0]][navioH[1]+i] = 3; // Navio horizontal na linha 3, coluna 2 a 4
    }
    // Posiciona um navio verticalmente
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[navioV[0]+i][navioV[1]] = 3; // Navio vertical na coluna 6, linhas 5 a 7
    }
    // Posiciona um navio diagonalmente (crescente)
    for(int i = 0, j=0; i < 3; i++, j++) {
        tabuleiro[navioDa[0]-i][navioDa[1]+j] = 3; // Navio diagonal da posição (7,1) a (5,3)
    }
    
    // // Posiciona um navio diagonalmente (decrescente)
    for(int i = 0, j=0; i < 3; i++, j++) {
        tabuleiro[navioDd[0]+i][navioDd[1]+j] = 3; // Navio diagonal da posição (1,8) a (3,10)
    }

    ExibirTabuleiro(tabuleiro);

    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
