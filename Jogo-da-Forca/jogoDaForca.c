#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

void OS();//funcao → Sistema Operacional que esta utilizando
void opcao();//funcao → Escolher os Sistema Operacional que esta utilizando
void menu(int menuModelo);//funcao → Tela de Menu para os Sistema Operacional e Utilização
void novoJogo();//funcao → Novo jogo
void registroDaPalavra();//funcao → Resgistrar palavra e guardar
void rankDoJogo(char *jogador, int *erro, int tamanhoDaPalavra);//funcao → rank Do Jogo retoma jogar erros e tamanha da palavra
void mostrarAClassificacao();//funcao → Visualizar a classificação
void ajuda();//funcao → De ajuda para o jogador.
void limparOTerminal();//funcao → limpar a tela liberar memoria

int os;//Variáveis de opção do Sistema opreacional
char palavra[100];//variavel → Palavra que o jogador deve escrever.

int main(){// DECLARAÇÃO DA FUNÇÃO MENU INTERAGINDO COM A OPÇÃO MENU DE ESCOLHER O SISTEMA OPERACIONAL QUE ESTÁ UTILIZANDO
    menu(1); //Executando menu 1
    OS();
    while (1){ // repetição
        opcao(); //analise a função vez e a correspondida e retorna
    }
    return 0; // retorna a declaração
}

void OS(){// DECLARAÇÃO DA FUNÇÃO  VISUALIZANDO O MENU INTERAGINDO COM A OPÇÃO MENU DE ESCOLHER O SISTEMA OPERACIONAL QUE ESTÁ UTILIZANDO
    menu(3);//Executando menu 3
    printf("\nEscolha o Sistema Operacional que esta utilizando: ");// Exibindo texto para escolher o SO do menu 1 para digitar
    scanf("%d", &os); // digitar o numero inteiro que coresponte nos menus
    getchar();// ler um único caractere, mas não quer usar o scanf()

    if (os == 1){
        system("cls");// se digitar 1 é valido limpo a tela
    }
    else if (os == 2){ // se digitar 2 é valido limpo a tela
        system("clear");
    }
    else{
        printf("\nERRO NO OS\n");// e se digitar outro número não corresponde imprima a tela
        sleep(2); //Pausa de 2 sugundos
        exit(2); // Fecha em 2 segundos
    }
}

void opcao(){//DECLARAÇÃO DA FUNÇÃO SELECIONAR OPÇÃO APRESENTADO NO JOGO
    int opcao;// variavel opcao
    menu(2);// na tela
    printf("\nDigite a opcao desejada: ");//Exibindo texto para escolher a opsao do menu 2 de 1 a 4
    scanf("%d", &opcao);// digitar o numero inteiro que coresponte ao menu 2

    getchar();//ler um único caractere, mas não quer usar o scanf()
    sleep(1); //Pausa de 1 sugundos
    limparOTerminal();//limpar a tela liberar memoria das opções

    switch (opcao){//casos de valores possíveis das funções de 1 a 4

    case 1:novoJogo();// Caso tenha 1 vai abrir novo jogo
        break;//força a saída em novo jogo

    case 2:mostrarAClassificacao();// Caso tenha 2 vai abrir mostrar a classificação
        break;//força a saída em mostrar a classificação

    case 3:ajuda();// Caso tenha 3 vai abrir ajuda
        break;//força a saída de ajuda

    case 4:// Caso tenha 4 sai do jogo
        menu(15);//Palavra que o menu deve escrever.
        sleep(2);//Pausa de 2 sugundos para retunar
        exit(1);// saindo em 1 segundo
        break;//força a saída

    default:// exibe uma mensagem, caso nenhuma das alternativas anteriores seja verdadeira
        printf("\nOpção Inexistente!\n");
        sleep(1);//Pausa de 1 segundos para retunar
        break;//força a saída
    }
}

void menu(int menuModelo){//TELA DE MENU PARA OS SISTEMA OPERACIONAL E UTILIZAÇÃO
    switch (menuModelo){//switch para mostrar a as telas
    case 1://case de valores a ser exibido na tela de selecione do Sistema Operacional
        printf("\n\n");
        printf("         XXXXX    XXXXX     XXXX     XXXXX       XXXX       XXXXX     \n");
        printf("            XX   XX   XX   XX       XX   XX      XX   X    XX   XX    \n");
        printf("            XX   XX   XX   XX       XX   XX      XX    X   XX   XX    \n");
        printf("            XX   XX   XX   XX       XX   XX      XX    X   XXXXXXX    \n");
        printf("            XX   XX   XX   XX  XX   XX   XX      XX    X   XX   XX    \n");
        printf("        X   XX   XX   XX   XX   X   XX   XX      XX   X    XX   XX    \n");
        printf("         XXXX     XXXXX     XXXX     XXXXX       XXXX      XX   XX    \n");
        printf("\n");
        printf("               XXXXXXX    XXXXX    XXXXX      XXXX    XXXXX           \n");
        printf("               XX        XX   XX   XX   X    XX      XX   XX          \n");
        printf("               XX        XX   XX   XX   X   XX       XX   XX          \n");
        printf("               XXXXXXX   XX   XX   XXXXX    XX       XXXXXXX          \n");
        printf("               XX        XX   XX   XX X     XX       XX   XX          \n");
        printf("               XX        XX   XX   XX  X     XX      XX   XX          \n");
        printf("               XX         XXXXX    XX   X     XXXX   XX   XX          \n");
        printf("\n\n");
        break;

    case 2://case de valores a ser exibido na tela de selecione do jogo
        printf("\n\n");
        printf("         XXXXX    XXXXX     XXXX     XXXXX       XXXX       XXXXX     \n");
        printf("            XX   XX   XX   XX       XX   XX      XX   X    XX   XX    \n");
        printf("            XX   XX   XX   XX       XX   XX      XX    X   XX   XX    \n");
        printf("            XX   XX   XX   XX       XX   XX      XX    X   XXXXXXX    \n");
        printf("            XX   XX   XX   XX  XX   XX   XX      XX    X   XX   XX    \n");
        printf("        X   XX   XX   XX   XX   X   XX   XX      XX   X    XX   XX    \n");
        printf("         XXXX     XXXXX     XXXX     XXXXX       XXXX      XX   XX    \n");
        printf("\n");
        printf("               XXXXXXX    XXXXX    XXXXX      XXXX    XXXXX           \n");
        printf("               XX        XX   XX   XX   X    XX      XX   XX          \n");
        printf("               XX        XX   XX   XX   X   XX       XX   XX          \n");
        printf("               XXXXXXX   XX   XX   XXXXX    XX       XXXXXXX          \n");
        printf("               XX        XX   XX   XX X     XX       XX   XX          \n");
        printf("               XX        XX   XX   XX  X     XX      XX   XX          \n");
        printf("               XX         XXXXX    XX   X     XXXX   XX   XX          \n");
        printf("\n\n");

        printf("                    ************************************\n");
        printf("                    *        Menu de Utilizacao        *\n");
        printf("                    *                                  *\n");
        printf("                    *       1. Comecar Novo Jogo       *\n");
        printf("                    *       2. Listar Ranking          *\n");
        printf("                    *       3. Ajuda                   *\n");
        printf("                    *       4. Sair                    *\n");
        printf("                    *                                  *\n");
        printf("                    ************************************\n");
        break;

    case 3://case de valores a ser exibido na tela de selecione do Sistema Operacional
        printf("                    ************************************\n");
        printf("                    * Sistemas Operacionais Suportados *\n");
        printf("                    *                                  *\n");
        printf("                    *            1 - Android           *\n");
        printf("                    *            2 - iOS               *\n");
        printf("                    *                                  *\n");
        printf("                    ************************************\n");
        break;

    case 4://case de valores a ser exibido na tela para cadastrar palavra
        printf("                                    \n");
        printf("************************************\n");
        printf("*      Cadastrar Nova Palavra      *\n");
        printf("************************************\n");
        break;

    case 5://case de valores a ser exibido na tela da palavra cadastrada
        printf("************************************\n");
        printf("*        Palavra Cadastrada        *\n");
        printf("************************************\n");
        break;

    case 6://case para mostrar a forca
        printf("************************************\n");
        printf("*   _______                        *\n");
        printf("*  |/      |                       *\n");
        printf("*  |                               *\n");
        printf("*  |                               *\n");
        printf("*  |                               *\n");
        printf("*  |                               *\n");
        printf("*  |                               *\n");
        printf("* _|___                            *\n");
        printf("*                                  *\n");
        printf("************************************\n");
        break;

    case 7:// case para mostrar a forca
        printf("************************************\n");
        printf("*   _______                        *\n");
        printf("*  |/      |                       *\n");
        printf("*  |       O                       *\n");
        printf("*  |                               *\n");
        printf("*  |                               *\n");
        printf("*  |                               *\n");
        printf("*  |                               *\n");
        printf("* _|___                            *\n");
        printf("*                                  *\n");
        printf("************************************\n");
        break;

    case 8:// case para mostrar a forca
        printf("************************************\n");
        printf("*   _______                        *\n");
        printf("*  |/      |                       *\n");
        printf("*  |       O                       *\n");
        printf("*  |       |                       *\n");
        printf("*  |       |                       *\n");
        printf("*  |                               *\n");
        printf("*  |                               *\n");
        printf("* _|___                            *\n");
        printf("*                                  *\n");
        printf("************************************\n");
        break;

    case 9:// case para mostrar a forca
        printf("************************************\n");
        printf("*   _______                        *\n");
        printf("*  |/      |                       *\n");
        printf("*  |       O                       *\n");
        printf("*  |       |                       *\n");
        printf("*  |       |                       *\n");
        printf("*  |        \\                       *\n");
        printf("*  |                               *\n");
        printf("* _|___                            *\n");
        printf("*                                  *\n");
        printf("************************************\n");
        break;

    case 10:// case para mostrar a forca
        printf("************************************\n");
        printf("*   _______                        *\n");
        printf("*  |/      |                       *\n");
        printf("*  |       O                       *\n");
        printf("*  |       |                       *\n");
        printf("*  |       |                       *\n");
        printf("*  |      / \\                      *\n");
        printf("*  |                               *\n");
        printf("* _|___                            *\n");
        printf("*                                  *\n");
        printf("************************************\n");
        break;

    case 11:// case para mostrar a forca
        printf("************************************\n");
        printf("*   _______                        *\n");
        printf("*  |/      |                       *\n");
        printf("*  |       O                       *\n");
        printf("*  |      \\|                       *\n");
        printf("*  |       |                       *\n");
        printf("*  |      / \\                      *\n");
        printf("*  |                               *\n");
        printf("* _|___                            *\n");
        printf("*                                  *\n");
        printf("************************************\n");
        break;

    case 12:// case para mostrar a forca
        printf("************************************\n");
        printf("*   _______                        *\n");
        printf("*  |/      |                       *\n");
        printf("*  |       O                       *\n");
        printf("*  |      \\|/                      *\n");
        printf("*  |       |                       *\n");
        printf("*  |      / \\                      *\n");
        printf("*  |                               *\n");
        printf("* _|___                            *\n");
        printf("*                                  *\n");
        printf("************************************\n");
        break;

    case 13://case checando usuario não ganhou, e imprimindo na tela a resposta para cada caso.
        printf("************************************\n");
        printf("         VOCE FOI ENFORCADO!        \n");
        printf("            _______________         \n");
		printf("           /               \\       \n");
		printf("          /                 \\      \n");
		printf("        //                   \\/\\  \n");
		printf("        \\|   XXXX     XXXX   | /   \n");
		printf("           |   XXXX     XXXX  |/    \n");
		printf("         |   XXX       XXX   |      \n");
		printf("         |                   |      \n");
		printf("        \\__      XXX      __/      \n");
		printf("           |\\     XXX     /|       \n");
		printf("           | |           | |        \n");
		printf("           | I I I I I I I |        \n");
		printf("           |  I I I I I I  |        \n");
		printf("           \\_             _/       \n");
		printf("             \\_         _/         \n");
		printf("               \\_______/         \n\n");
        printf("              FIM DE JOGO           \n");
        printf("************************************\n");
        sleep(3);
        break;

    case 14://case checando usuario ganhou o jogo, e imprimindo na tela a resposta para cada caso.
        printf("************************************\n");
        printf("\n     Parabens, voce ganhou!\n\n");
		printf("            ___________      \n");
		printf("           '._==_==_=_.'     \n");
		printf("           .-\\:      /-.    \n");
		printf("          | (|:.     |) |    \n");
		printf("           '-|:.     |-'     \n");
		printf("             \\::.    /      \n");
		printf("              '::. .'        \n");
		printf("                ) (          \n");
		printf("              _.' '._        \n");
		printf("             '-------'       \n\n");
		sleep(3);
        break;

    case 15://case de valores Encerrando o Programa
        printf("************************************\n");
        printf("*      Encerrando o Programa       *\n");
        printf("************************************\n");
        break;

    case 16://case de valores dicas
        printf("************************************\n");
        printf("*    Como Jogar o Jogo da Forca    *\n");
        printf("************************************\n");
        printf("************************************\n");
        printf("*                                  *\n");
        printf("*   Primeiramente, um jogador deve *\n");
        printf("* registrar uma palavra para que o *\n");
        printf("* outro jogador tente adivinhar.   *\n");
        printf("*   Depois, o outro jogador insere *\n");
        printf("* uma letra, se a palavra escolhida*\n");
        printf("* conter essa letra, será revelada*\n");
        printf("* a posição da respectiva letra. *\n");
        printf("*   Caso o jogador insira uma letra*\n");
        printf("* que não está na palavra, ele   *\n");
        printf("* teraum erro.                     *\n");
        printf("*   O jogo acaba quando o jogador  *\n");
        printf("* completar a palavra ou atingir 7 *\n");
        printf("* erros.                           *\n");
        printf("*                                  *\n");
        printf("************************************\n");
        break;

        case 17://case de valores cadastrando nome do jogar
        printf("************************************\n");
        printf("*         Nome do Jogador          *\n");
        printf("************************************\n");
        break;

    default:// exibe uma mensagem, caso nenhuma das alternativas anteriores seja verdadeira
        printf("\nERRO NO DISPLAY\n");
        sleep(2);//Pausa de 2 segundos para retunar
        exit(5);// saindo em 5 segundo
        break;
    }
}

void novoJogo(){ // PROCEDIMENTO PARA ZERAR VARIÁVEIS PARA UM NOVO JOGO
        int i, certo = 0, erro = 0, fim = 0, certoAux = 0, encontrado = 0; //variável para usar no for em novo jogo
        char letra, jogador[100], paralavraSecreta[100], paralavraSecretaAux[2];// Variavel do tipo string com uma varias posições
        menu(17);//string com uma varias posições
        printf("\nNome: ");// Imprimir e Inserir nume do jogador que contenha 17 posições

        fgets(jogador, 100, stdin);// ler e usa jogar e usa como se fosse gets no jogar

        sleep(1);//Pausa de 1 segundos para retonar

        registroDaPalavra();//Variavel funcao para geristrar guardar a palavra

        for (i = 0; i < strlen(palavra); i++){// verificar a palavra caractere existe na palavra secreta, caso exista, substituir o na posição
            paralavraSecreta[i] = '_';//Fazer os "_" da letra secreta.
        }

    while (fim == 0){//Repita ate chagar a 0 caso erre
        menu(erro + 6);//Numero de acertos 6+1
        printf("\n");//Digitar letra

        for (i = 0; i < strlen(palavra); i++){//retorna o tamanho, em caracteres, de uma string

            printf("%c ", paralavraSecreta[i]);// Ou mostra as letras que acertou da palavra
        }
        printf("\n");
        printf("\nInsira uma letra: "); //Digitar a letra
        scanf("%c", &letra);// Variavel do tipo levar

        getchar();//verificar a entrada a letra

        for (i = 0; i < strlen(palavra); i++){//retorna o tamanho, em caracteres, de uma string
            if (toupper(letra) == palavra[i]){// se for a correta Converte a letra digitada minúsculo em maiúsculo se for igual
                paralavraSecreta[i] = toupper(letra);// Converte a letra digitada minúsculo em maiúsculo se for igual
                palavra[i] = tolower(palavra[i]); // a palavra sera sempre minúsculo
                certo++;
            } else if (tolower(letra) == palavra[i]){//ou se a letra digitada estiver na palavra mostre ela
                encontrado++;
            }
        }

        if (certo == 0){//se terminar todos os a certos a 0 encontre a palavra
            if (encontrado == 0){
                erro++;
                printf("\nLETRA INCORRETA\n");// Caso a letra esteja errada Imprimi
            } else{
                printf("\nLETRA JA ENCONTRADA\n");// Caso a letra ja foi encontrada
                encontrado = 0;// Atribui o numero de vezez 0 a encontrado
            }

            if (erro == 7){// Erros nao pode passar de 7x
                fim = 1;//Atribui  numero fim a 1
                limparOTerminal();
                menu(12);//string com uma varias posições

                printf("\n");//pula uma linha

                menu(13);
                for (i = 0; i < strlen(palavra); i++){//verificar a palavra caractere existe na palavra secreta, caso exista, substituir o na posição
                    palavra[i] = toupper(palavra[i]);// Converte a palavra certa minúsculo em maiúsculo se for igual
                }
                printf("\nA Palavra era: %s\n", palavra);//Imprimi a palavra caso no fim
                rankDoJogo(jogador, &erro, strlen(palavra));// e joga a palavra para o rank
                printf("Pressione \"enter\" para continuar\n");
                getchar();//verificar a entrada
                sleep(10);
            }
        }
        else{//executado se acetar
            certoAux += certo;// O certoAux deve ser maior e igual
            certo = 0;// O → certo execulta ate a letras a ultima corretas
            printf("\nLETRA CORRETA\n");// Imprimi a litra correta
            if (certoAux == strlen(palavra)){
                fim = 1;//Atribui numero fim a 1
                limparOTerminal();

                menu(14);

                printf("\nA Palavra era: %s\n", palavra);//imprimi a palavra correta

                rankDoJogo(jogador, &erro, strlen(palavra));// E grava no rank

                printf("Pressione \"enter\" para continuar\n");//imprimi e volta para o menu
                getchar();//verificar a entrada
            }
        }
        sleep(1);
        limparOTerminal();
    }
}

void registroDaPalavra(){ //RESITRO DA PALAVRA DA FORCA E BANCO DE DADOS
    FILE *bD;//Ponterio para o arquivo rank
    bD = fopen("bD.txt", "a");//Recebe os paramentros do arquivos a ser aberto
    if (bD == NULL){//se for nulo
        printf("\nERRO NO BANCO DE DADOS\n");//Imprime caso de erro no banco de dados
    }
    else{
        fprintf(bD, "%s\n", palavra);// Grava a palavra no arquivo

        fclose(bD);//fecahdo arquivo
    }

    int i; //variável para usar no for
    menu(4); //menu escolhido para imprimir
    printf("\nInsira uma palavra (sem acentos): ");
    fgets(palavra, 100, stdin);// ler a palavra e usa como se fosse gets no jogo
    strtok(palavra, "\n");//pula uma linha
    for (i = 0; i < strlen(palavra); i++){//retorna o tamanho, em caracteres, da string palavra
        palavra[i] = toupper(palavra[i]);
    }
    menu(5);//menu escolhido para imprimir
    sleep(1);
    limparOTerminal();
}

void rankDoJogo(char *jogador, int *erro, int tamanhoDaPalavra){//GRAVAR RANK DO JOGO
    FILE *rank;//Ponterio para o arquivo rank
    rank = fopen("rank.txt", "a");//Recebe os paramentros do arquivos a ser aberto

    if (rank == NULL){//se for nulo
        printf("\nERRO NA ATUALIZACAO DO RANK\n");//Imprime caso de erro no banco de dados
        sleep(2);
        exit(1);
    }
    else{
        fprintf(rank, "%s\n", jogador);// Se for grava a palavra no arquivo
        fprintf(rank, "%d\n", *erro);// Se for grava a palavra no arquivo
        fprintf(rank, "%d\n", tamanhoDaPalavra);// Se for grava a palavra no arquivo

        fclose(rank);//fecahdo arquivo
    }
    printf("\nRanking Atualizado\n\n");//Imprime se der tudo certo
}

void mostrarAClassificacao(){//MOSTRA CLASSIFICACAO
    FILE *rank;//Ponterio do arquivo rank
    char c, line[100];////funcao → rank Do Jogo retoma o rank  e tamanha da palavra
    int lineCount = 0, i;//Interio que com contagem a 0 e i
    rank = fopen("rank.txt", "r");//Recebe os paramentros do arquivos a ser aberto
    if (rank == NULL){//se for nulo
        printf("\nNao Foi Possivel Encontrar o Ranking\n\n");//Imprime caso de erro se nao existir aquivo
    }

    else{
        printf("\nPOSICAO  -  JOGADOR  -  ERROS  -  TAMANHO DA PALAVRA\n\n");//Imprime
        rewind(rank);// lê o primeiro caractere e automaticamente já se posiciona para próxima nome
        c = fgetc(rank);// lê o primeiro caractere e automaticamente já se posiciona para próxima palavra
        while (c != EOF){
            if (c == '\n'){// Saia do loop se recebermos EOF ("fim do arquivo")
                lineCount++;
            }
            c = fgetc(rank);// lê o primeiro caractere e automaticamente já se posiciona para próxima nome
        }

        rewind(rank);// lê o primeiro caractere e automaticamente já se posiciona para próxima palavra
        for (i = 0; i < lineCount / 3; i++){//Se for grava
            printf("  %d°", i + 1);//Imprime a possição 1 + i referente ao acertos

            printf("    -  ");//Imprime a um traço

            fgets(line, 100, rank);//lê o primeiro caractere e automaticamente já se posiciona no proximo do rank
            strtok(line, "\n");//Devolve um ponteiro para a proximo do rank na string apontada
            printf("%s", line);//Imprime a linha do arquivo do rank

            printf("  -  ");//Imprime a um traço

            fgets(line, 100, rank);//lê o primeiro caractere e automaticamente já se posiciona no proximo do rank
            strtok(line, "\n");//Devolve um ponteiro para a proximo do rank na string apontada
            printf("%s", line);//Imprime a linha do arquivo do rank

            printf("  -  ");//Imprime a um traço

            fgets(line, 100, rank);//lê o primeiro caractere e automaticamente já se posiciona no proximo do rank
            strtok(line, "\n");//Devolve um ponteiro para a proximo do rank na string apontada
            printf("%s", line);//Imprime a linha do arquivo do rank

            printf("\n");//Imprime e pula uma linha
        }

        printf("\n");//Imprime e pula uma linha
        fclose(rank);//fecahdo arquivo
    }

    printf("Pressione \"enter\" para continuar\n");//imprimi e volta para o menu
    getchar();
    limparOTerminal();
}

void ajuda(){//MENU AJUDA
    menu(16);//menu escolhido para imprimir

    printf("\nPressione \"enter\" para continuar\n");//imprimi e volta para o menu
    getchar();// ler um único caractere, mas não quer usar o scanf()
    limparOTerminal();//limpa do terminal
}

void limparOTerminal(){//LIMPA OS AQUIVOS
    if (os == 1){//se digitar um limpo
        system("cls");
    }
    else if (os == 2){//se digitar um limpo
        system("clear");
    }
}


