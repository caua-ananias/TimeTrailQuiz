#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Quiz desenvolvido pelo Aluno Cau� Ananias da Silva Ribeiro academico de Engenharia de Computa��o UFGD

typedef struct { // Define uma estrutura (struct) chamada Pergunta
    char pergunta[300]; // Cria uma Array (string) que pode armazenar at� 300 caracteres, utilizado para guardar a pergunta
    char resposta_correta; // Cria uma vari�vel de tipo char que armazena a resposta correta para a pergunta
} Pergunta; // Nome da struct

void brasilImperio(){ // Cria a fun��o com perguntas sobre o Imp�rio do Brasil
    system("cls"); //Limpa o cmd
    int pontuacao = 0; //Pontua��o que o jogador fez ao final do jogo
    int total_perguntas = 5;  // N�mero total de perguntas
    int i; //declara o contador de quest�es
    Pergunta perguntas[5] = { // Define uma estrutura em array com 5 espa�os para 5 quest�es
        {"Qual foi o imperador do Brasil durante a independ�ncia?\nA) Dom Jo�o VI\nB) Dom Pedro II\nC) Dom Pedro I\n", 'C'},
        {"Em que ano foi proclamada a independ�ncia do Brasil?\nA) 1808\nB) 1822\nC) 1889\n", 'B'},
        {"Qual foi o �ltimo imperador do Brasil?\nA) Dom Pedro II\nB) Dom Jo�o VI\nC) Dom Pedro I\n", 'A'},
        {"Quem aboliu a escravid�o em 1888?\nA) Maria Leopoldina da �ustria\nB) Princesa Isabel\nC) Dom Pedro II\n", 'B'},
        {"Que territ�rio era a Cisplatina e onde est� localizado hoje?\nA) Parte atual da Argentina\nB) Integrante atual do Paraguai\nC) Atual Uruguai\n", 'C'}
    };
      printf("Bem-vindo ao Quiz sobre a Hist�ria do Brasil Imperial!\n");

    for (i = 0; i < total_perguntas; i++) { //Cria o loop para a exibi��o das quest�es
        printf("\n%s", perguntas[i].pergunta); //Exibe a quest�o

        char resposta; // Cria a variavel para armazenar as respostas
        scanf(" %c", &resposta); // Atribui a variavel a resposta dada pelo jogador

        if (resposta == perguntas[i].resposta_correta) { // Mostra ao jogador se ele errou ou acertou
            printf("Resposta correta!\n");
            pontuacao++; //incrementa a pontua��o a cada acerto
        } else {
            printf("Resposta errada!\n");
        }
    }

    printf("\n=== Fim do Quiz ===\n");
    printf("Voc� acertou %d perguntas e errou %d perguntas.\n", pontuacao, total_perguntas - pontuacao); //Mostra a pontua��o do jogador
    printf("Aguarde 10 Segundos para continuar\n");
    sleep(10); //Pausa a execu��o por 10 segundos
    system("cls"); //Limpa o CMD

}

void brasilSegundaGuerra(){ // Cria a fun��o com perguntas sobre o Brasil na segunda guerra mundial
    system("cls");
    int pontuacao = 0;
    int total_perguntas = 5;
    int i;
    Pergunta perguntas[5] = {
        {"Qual foi o papel do Brasil na Segunda Guerra Mundial?\nA) O Brasil permaneceu neutro durante todo o conflito\nB) O Brasil lutou ao lado das for�as do Eixo\nC) O Brasil se juntou aos Aliados e enviou tropas para combater na Europa\n", 'C'},
        {"Em que ano o Brasil entrou oficialmente na Segunda Guerra Mundial?\nA) 1941\nB) 1942\nC) 1945\n",'B'},
        {"Qual foi o nome da for�a militar brasileira que lutou na Europa durante a guerra?\nA) For�a A�rea Brasileira (FAB)\nB) Marinha do Brasil\nC) For�a Expedicion�ria Brasileira (FEB)\n",'C'},
        {"Qual foi o principal teatro de opera��es onde a For�a Expedicion�ria Brasileira atuou?\nA) �frica\nB) �sia\nC) It�lia\n",'C'},
        {"Na Segunda Guerra Mundial, qual unidade do ex�rcito brasileiro se destacou em a��es de combate, incluindo a Batalha de Monte Castelo?\nA) 1 Divis�o de Infantaria Expedicion�ria\nB) 5 Divis�o Blindada\nC) 2 Brigada de Artilharia Antia�rea\n",'A'}
    };
      printf("Bem-vindo ao Quiz sobre o Brasil durante a Segunda Guerra mundial!\n");

    for (i = 0; i < total_perguntas; i++) {
        printf("\n%s", perguntas[i].pergunta);

        char resposta;
        scanf(" %c", &resposta);

        if (resposta == perguntas[i].resposta_correta) {
            printf("Resposta correta!\n");
            pontuacao++;
        } else {
            printf("Resposta errada!\n");
        }
    }

    printf("\n=== Fim do Quiz ===\n");
    printf("Voc� acertou %d perguntas e errou %d perguntas.\n", pontuacao, total_perguntas - pontuacao);
    printf("Aguarde 10 Segundos para continuar\n");
    sleep(10);
    system("cls");
}

void brasilColonia(){ //Cria a fun��o com perguntas sobre o Brasil colonial
    system("cls");
    int pontuacao = 0;
    int total_perguntas = 5;
    int i;
     Pergunta perguntas[5] = {
        {"Qual foi o sistema de explora��o econ�mica adotado no Brasil Col�nia?\nA) Capitalismo\nB) Socialismo\nC) Sistema de plantation\n",'C'},
        {"Qual produto foi a principal base da economia colonial brasileira?\nA) Algod�o\nB) Tabaco\nC) A��car\n",'C'},
        {"O Brasil Col�nia foi uma col�nia de qual pa�s europeu?\nA) Fran�a\nB) Espanha\nC) Portugal\n",'C'},
        {"Durante o Brasil colonial, qual foi o significativo conflito que eclodiu devido �s disputas por terras e minera��o, envolvendo colonos portugueses e imigrantes em busca de ouro, culminando em hostilidades e rivalidades?\nA) Guerra dos Mascates\nB) Guerra dos Farrapos\nC) Guerra dos Emboabas\n", 'C'},
        {"Qual foi a medida colonial implementada pela Coroa Portuguesa para controlar a produ��o de a��car no Brasil, estabelecendo um monop�lio sobre o produto e gerando descontentamento entre os colonos?\nA) Lei das Sesmarias\nB) Alvar� R�gio\nC) Pacto Colonial\n", 'B'}
    };
      printf("Bem-vindo ao Quiz sobre o Brasil colonia!\n");

    for (i = 0; i < total_perguntas; i++) {
        printf("\n%s", perguntas[i].pergunta);

        char resposta;
        scanf(" %c", &resposta);

        if (resposta == perguntas[i].resposta_correta) {
            printf("Resposta correta!\n");
            pontuacao++;
        } else {
            printf("Resposta errada!\n");
        }
    }
    printf("\n=== Fim do Quiz ===\n");
    printf("Voc� acertou %d perguntas e errou %d perguntas.\n", pontuacao, total_perguntas - pontuacao);
    printf("Aguarde 10 Segundos para continuar\n");
    sleep(10);
    system("cls");
}

void menu(){ //Cria a fun��o menu, onde � apresentado para o jogador o jogo e suas op��es

    int opcao, init; //Declara variaveis de op��es

    printf("------------------------------\n      Time Trail Quiz\n------------------------------\n\n");
    printf("Seja Bem-vindo ao Time Trail Quiz!\nOnde testaremos o seu conhecimento sobre a Historia Brasileira!!\n\n----------------Regras----------------\nResponder apenas em letra maiscula\nAdemais n�o tem regra rsrs\n--------------------------------------\nDeseja come�ar agora?\n1. Sim\n2. N�o\n");
    scanf("%d", &init);
    system("cls");

    switch(init){ //Cria um desvio de acordo com o que o tema que o usuario quer jogar.

        case 1:
            do{
                printf("------------------------------\n      Time Trail Quiz\n------------------------------\n\n");
                printf("Escolha o tema que deseja jogar\n1. Historia Imperial\n2. Brasil na Segunda Guerra\n3. Brasil colonia\n0. Sair\n");
                scanf("%d", &opcao);
                switch (opcao){
                    case 1:
                        brasilImperio(); //Chama a fun��o para executar o quiz
                        break;
                    case 2:
                        brasilSegundaGuerra(); //Chama a fun��o para executar o quiz
                        break;
                    case 3:
                        brasilColonia(); //Chama a fun��o para executar o quiz
                        break;
                    case 0:
                        break; //Finaliza a execu��o
                    default:
                        printf("Opc�o invalida, tente novamente!\n");
                        sleep(3); //Pausa a execu��o por 3 segundos antes de tentar novamente
                        system("cls");
                        break;
                    }
            } while(opcao != 0); //Loop para repetir o menu enquanto a escolha do jogador n�o for 0

        case 2:
            printf("Saindo...");
            break;

        default:
            printf("Alternativa invalida!\nTente novamente!!");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese"); //Implenta a possibilidade de utilizar acentos e �
    menu(); //Chama a fun��o menu
    return 0;
}
