//codigo de movimentação de peças de xadrez
#include <stdio.h>

   int main(){

// Definição de variáveis

   int opcao;
   int direcaoTorre, direcaoBispo, direcaoRainha, direcaoCavalo;
   int casa = 1;

// Exibição do menu de opções

   printf("***Movimentação de peças de xadrez***\n");
   printf("Escolha uma peça:\n");
   printf("--------------------------------------------\n");
   printf("1. Torre\n");
   printf("2. Bispo\n");
   printf("3. Rainha\n");
   printf("4. Cavalo\n");
   printf("--------------------------------------------\n");
    scanf("%d", &opcao);

// Verificação da opção escolhida
    switch(opcao){
        case 1: 
        printf("Você escolheu a Torre!\n"); // Exibe a opção escolhida
        printf("A Torre se move em linha reta.\n");
        printf("Escolha a direção:\n");
        printf("1. Cima\n");
        printf("2. Baixo\n");
        printf("3. Direita\n");
        printf("4. Esquerda\n");
        scanf("%d", &direcaoTorre);

        switch(direcaoTorre){ //Switch para verificar a direção escolhida
            case 1:
                printf("A Torre se move 5 casas para cima.\n");
                // A variável casa é inicializada com 1 e incrementada até 5
                printf("------------------------------------------\n");
                do {
                    printf("Cima.\n");
                    casa++;
                } while(casa <= 5);
                printf("------------------------------------------\n");
                break;
            case 2:
                printf("A Torre se move 5 casas para baixo.\n");
                // A variável casa é inicializada com 1 e incrementada até 5
                printf("------------------------------------------\n");
                do {
                    printf("Baixo.\n");
                    casa++;
                } while(casa <= 5);
                printf("------------------------------------------\n");
                break;
            case 3:
                printf("A Torre se move 5 casas para a direita.\n");
                // A variável casa é inicializada com 1 e incrementada até 5
                printf("------------------------------------------\n");
                do {
                    printf("Direita.\n");
                    casa++;
                } while(casa <= 5);
                printf("------------------------------------------\n");
                break;
            case 4:
                printf("A Torre se move 5 casas para a esquerda.\n");
                // A variável casa é inicializada com 1 e incrementada até 5
                printf("------------------------------------------\n");
                do {
                    printf("Esquerda.\n");
                    casa++;
                } while(casa <= 5);
                printf("------------------------------------------\n");
                break;
            default:
                // Caso o usuário insira uma opção inválida
                printf("Direção inválida.\n");
                printf("------------------------------------------\n");
                break;
        }
        break;
        case 2: 
        printf("Você escolheu o Bispo!\n"); // Exibe a opção escolhida
        printf("O Bispo se move em diagonal.\n");
        printf("Escolha a direção:\n");
        printf("1. Cima Esquerda\n");
        printf("2. Cima Direita\n");
        printf("3. Baixo Direita\n");
        printf("4. Baixo Esquerda\n");
        scanf("%d", &direcaoBispo);

        switch(direcaoBispo){ //Switch para verificar a direção escolhida
            case 1:
                printf("O Bispo se move 5 casas para cima e para a esquerda.\n");
                // A variável casa é inicializada com 1 e incrementada até 5
                printf("------------------------------------------\n");
                for (casa = 1; casa <= 5; casa++){
                    printf("Cima Esquerda.\n");
                }
                printf("------------------------------------------\n");
                break;
            case 2:
                printf("O Bispo se move 5 casas para cima e para a direita.\n");
                // A variável casa é inicializada com 1 e incrementada até 5
                printf("------------------------------------------\n");
                for (casa = 1; casa <= 5; casa++){
                    printf("Cima Direita.\n");
                }
                printf("------------------------------------------\n");
                break;
            case 3:
                printf("O Bispo se move 5 casas para baixo e para a direita.\n");
                // A variável casa é inicializada com 1 e incrementada até 5
                printf("------------------------------------------\n");
                for (casa = 1; casa <= 5; casa++){
                    printf("Baixo Direita.\n");
                }
                printf("------------------------------------------\n");
                break;
            case 4:
                printf("O Bispo se move 5 casas para baixo e para a esquerda.\n");
                // A variável casa é inicializada com 1 e incrementada até 5
                printf("------------------------------------------\n");
                for (casa = 1; casa <= 5; casa++){
                    printf("Baixo Esquerda.\n");
                }
                printf("------------------------------------------\n");
                break;
            default:
                printf("Direção inválida.\n");
                // Caso o usuário insira uma opção inválida
                printf("------------------------------------------\n");
                break;    
        }
        break;
        case 3:
            printf("Você escolheu a Rainha!\n"); // Exibe a opção escolhida
            printf("A Rainha se move em linha reta e em diagonal.\n");
            printf("Escolha a direção:\n");
            printf("1. Cima\n");
            printf("2. Baixo\n");
            printf("3. Direita\n");
            printf("4. Esquerda\n");
            printf("5. Cima Esquerda\n");
            printf("6. Cima Direita\n");
            printf("7. Baixo Direita\n");
            printf("8. Baixo Esquerda\n");
            scanf("%d", &direcaoRainha);

            switch(direcaoRainha){ //Switch para verificar a direção escolhida
                case 1:
                    printf("A rainha se move 8 casas para cima.\n");
                    // A variável casa é inicializada com 1 e incrementada até 8
                    printf("------------------------------------------\n");
                    while (casa <= 8){
                        printf("Cima.\n");
                        casa++;
                    }
                    printf("------------------------------------------\n");
                    break;
                case 2:
                    printf("A rainha se move 8 casas para baixo.\n");
                    // A variável casa é inicializada com 1 e incrementada até 8
                    printf("------------------------------------------\n");
                    while (casa <= 8){
                        printf("Baixo.\n");
                        casa++;
                    }
                    printf("------------------------------------------\n");
                    break;
                case 3:
                    printf("A rainha se move 8 casas para a direita.\n");
                    // A variável casa é inicializada com 1 e incrementada até 8
                    printf("------------------------------------------\n");
                    while (casa <= 8){
                        printf("Direita.\n");
                        casa++;
                    }
                    printf("------------------------------------------\n");
                    break;
                case 4:
                    printf("A rainha se move 8 casas para a esquerda.\n");
                    // A variável casa é inicializada com 1 e incrementada até 8
                    printf("------------------------------------------\n");    
                    while (casa <= 8){
                        printf("Esquerda.\n");
                        casa++;
                    }
                    printf("------------------------------------------\n");
                    break;  
                case 5:
                    printf("A rainha se move 8 casas para cima e para a esquerda.\n");
                    // A variável casa é inicializada com 1 e incrementada até 8
                    printf("------------------------------------------\n");
                    while (casa <= 8){
                        printf("Cima Esquerda.\n");
                        casa++;
                    }
                    printf("------------------------------------------\n");
                    break;
                case 6:
                    printf("A rainha se move 8 casas para cima e para a direita.\n");
                    // A variável casa é inicializada com 1 e incrementada até 8
                    printf("------------------------------------------\n");
                    while (casa <= 8){
                        printf("Cima Direita.\n");
                        casa++;
                    }
                    printf("------------------------------------------\n");
                    break;
                case 7:
                    printf("A rainha se move 8 casas para baixo e para a direita.\n");
                    // A variável casa é inicializada com 1 e incrementada até 8
                    printf("------------------------------------------\n");
                    while (casa <= 8){
                        printf("Baixo Direita.\n");
                        casa++;
                    }
                    printf("------------------------------------------\n");
                    break;
                case 8:
                    printf("A rainha se move 8 casas para baixo e para a esquerda.\n");
                    // A variável casa é inicializada com 1 e incrementada até 8
                    printf("------------------------------------------\n");
                    while (casa <= 8){
                        printf("Baixo Esquerda.\n");
                        casa++;
                    }
                    printf("------------------------------------------\n");
                    break;
                default:
                    printf("Direção inválida.\n");
                    // Caso o usuário insira uma opção inválida
                    printf("------------------------------------------\n");
                    break;                                
            }
            break;
        case 4:
            printf("Voce escolheu o Cavalo!\n"); // Exibe a opção escolhida
            printf("O Cavalo se move em L.\n");
            printf("Escolha a direção:\n");
            printf("1. Cima Direita\n");
            printf("2. Cima Esquerda\n");
            printf("3. Baixo Direita\n");
            printf("4. Baixo Esquerda\n");
            scanf("%d", &direcaoCavalo);

            switch(direcaoCavalo){
                case 1:
                    printf("O cavalo se move 2 casas para cima e 1 para a direita.\n");
                    // A variável casa é inicializada com 1 e incrementada até 2
                    printf("------------------------------------------\n");
                    while (casa <= 2)
                    {
                       for(casa = 1; casa <= 2; casa++){
                        printf("Cima.\n");
                       }
                       printf("Direita.\n");
                    }
                    printf("------------------------------------------\n");
                    break;
                case 2:
                    printf("O cavalo se move 2 casas para cima e 1 para a esquerda.\n");
                    // A variável casa é inicializada com 1 e incrementada até 2
                    printf("------------------------------------------\n");
                    while (casa <= 2)
                    {
                       for(casa = 1; casa <= 2; casa++){
                        printf("Cima.\n");
                       }
                       printf("Esquerda.\n");
                    }
                    printf("------------------------------------------\n");
                    break;
                case 3:
                    printf("O cavalo se move 2 casas para baixo e 1 para a direita.\n");
                    // A variável casa é inicializada com 1 e incrementada até 2
                    printf("------------------------------------------\n");
                    while (casa <= 2)
                    {
                       for(casa = 1; casa <= 2; casa++){
                        printf("Baixo.\n");
                       }
                       printf("Direita.\n");
                    }
                    printf("------------------------------------------\n");
                    break;
                case 4:
                    printf("O cavalo se move 2 casas para baixo e 1 para a esquerda.\n");
                    // A variável casa é inicializada com 1 e incrementada até 2
                    printf("------------------------------------------\n");
                    while (casa <= 2)
                    {
                       for(casa = 1; casa <= 2; casa++){
                        printf("Baixo.\n");
                       }
                       printf("Esquerda.\n");
                    }
                    printf("------------------------------------------\n");
                    break;
                default:
                    printf("Direção inválida.\n");
                    // Caso o usuário insira uma opção inválida
                    printf("------------------------------------------\n");
                    break;                
            }
            break;
        default:
            printf("Opção inválida.\n");
            // Caso o usuário insira uma opção inválida
            printf("------------------------------------------\n");
            break;
    }

    printf("Obrigado por jogar!!\n");
    printf("------------------------------------------\n");
    
            return 0;
        }   
                            