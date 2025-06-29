#include <stdio.h>  
#include <string.h>  

#define TAM 10  // Tamanho do grid (10x10)

int main() {
    
    char grid[TAM][TAM];  // Matriz que representa o grid das palavras cruzadas
    char palavra[20];     // para armazenar a palavra digitada pelo usuário
    int x, y, dir;        // Variáveis para posição (x,y) e direção (0=horizontal, 1=vertical)
    
    // Inicializa o grid com pontos (representando espaços vazios)
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            grid[i][j] = '.';  // Preenche cada célula com um ponto
        }
    }
    
    // Loop principal do programa
    while(1) {
        // Mostra o grid atual
        printf("\n");  //  para organizar a visualização
        for(int i = 0; i < TAM; i++) {
            for(int j = 0; j < TAM; j++) {
                printf("%c ", grid[i][j]);  // Imprime cada caractere do grid
            }
            printf("\n");  // Pula linha após cada linha do grid
        }
        
        // Pede ao usuário para digitar uma palavra ou sair
        printf("\nDigite a palavra (ou 'sair'): ");
        scanf("%s", palavra);  // Lê a palavra digitada
        
        // Verifica se o usuário quer sair
        if(strcmp(palavra, "sair") == 0) {
            break;  // Sai do loop while
        }
        
        // Pede a posição onde a palavra será colocada
        printf("Posicao (linha coluna): ");
        scanf("%d %d", &x, &y);  // Lê as coordenadas
        
        // Pede a direção da palavra
        printf("Direcao (0=horizontal, 1=vertical): ");
        scanf("%d", &dir);  // Lê a direção
        
        // Tenta colocar a palavra no grid
        int ok = 1;         // Flag para verificar se a operação foi bem sucedida
        int tam = strlen(palavra);  // Obtém o tamanho da palavra
        
        // Verifica se a palavra cabe na posição e direção especificadas
        if((dir == 0 && y + tam > TAM) || (dir == 1 && x + tam > TAM)) {
            printf("Nao cabe!\n");  // Avisa se não couber
            continue;               // Volta ao início do loop
        }
        
        // Se couber, coloca a palavra no grid
        for(int i = 0; i < tam; i++) {
            if(dir == 0) {  // Se for horizontal
                grid[x][y+i] = palavra[i];  // Preenche na horizontal
            } else {        // Se for vertical
                grid[x+i][y] = palavra[i];   // Preenche na vertical
            }
        }
    }
    
    // Mensagem final quando o usuário sai
    printf("\nTerminou!\n");
    return 0;  // Fim do programa
}