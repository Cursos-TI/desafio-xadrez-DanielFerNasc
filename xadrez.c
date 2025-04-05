#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Recurssividade par Movimentação da Torre com Recursividade
void moverTorre(int t){
    if (t > 0)
    {
        printf("Direita!\n"); //Regressivo
        moverTorre(t - 1);
    }
}

// Recurssividade par Movimentação da Rainha com Recursividade
void moverRainha(int r){
    if (r > 0)
    {
        printf("Esquerda!\n"); //Regressivo
        moverRainha(r - 1);
    }
}

// Recurssividade par Movimentação do Bispo com Recursividade e Loop Aninhado de FOR!
void moverBispo(int b){
    if (b > 0) 
    for (int i = 1; i <= b; i++)
    {
        for (int j = 0; j < (i - j); j++)
        {
            printf("Direita + ");
            j = i;
        }      
        printf("Cima!\n");
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //Declaração das Variáveis
    int cavalo = 1;
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // Movimentação da Torre com Recursividade
    printf("\nMovimentação da Torre\n");
    moverTorre(torre);

    // Movimentação da Rainha com Recursividade
    printf("\nMovimentação da Rainha\n");
    moverRainha(rainha);

    // Movimentação do Bispo com Recursividade e Loop Aninhado de FOR!
    printf("\nMovimentação da Bispo\n");
    moverBispo(bispo);

    // Movimento do Cavalo com Loop Aninhado e Múltiplas Variáveis
    printf("\nMovimentação do Cavalo\n");
    while (cavalo--)
    {
        for (int i = 1, j = 5; i <= (j -i); i++, j--)
        {
            printf("Cima!\n");
        }
        printf("Direita!\n");
    }

    return 0;
}
