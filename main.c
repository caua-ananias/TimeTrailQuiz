#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Quiz desenvolvido pelo Aluno Cauã Ananias da Silva Ribeiro academico de Engenharia de Computação UFGD

typedef struct { // Define uma estrutura (struct) chamada Pergunta
    char pergunta[300]; // Cria uma Array (string) que pode armazenar até 300 caracteres, utilizado para guardar a pergunta
    char resposta_correta; // Cria uma variável de tipo char que armazena a resposta correta para a pergunta
} Pergunta; // Nome da struct

void brasilImperio(){ // Cria a função com perguntas sobre o Império do Brasil
    system("cls"); //Limpa o cmd
    int pontuacao = 0; //Pontuação que o jogador fez ao final do jogo
    int total_perguntas = 5;  // Número total de perguntas
    int i; //declara o contador de questões
    Pergunta perguntas[5] = { // Define uma estrutura em array com 5 espaços para 5 questões
        {"Qual foi o imperador do Brasil durante a independência?\nA) Dom João VI\nB) Dom Pedro II\nC) Dom Pedro I\n", 'C'},
        {"Em que ano foi proclamada a independência do Brasil?\nA) 1808\nB) 1822\nC) 1889\n", 'B'},
        {"Qual foi o último imperador do Brasil?\nA) Dom Pedro II\nB) Dom João VI\nC) Dom Pedro I\n", 'A'},
        {"Quem aboliu a escravidão em 1888?\nA) Maria Leopoldina da Áustria\nB) Princesa Isabel\nC) Dom Pedro II\n", 'B'},
        {"Que território era a Cisplatina e onde está localizado hoje?\nA) Parte atual da Argentina\nB) Integrante atual do Paraguai\nC) Atual Uruguai\n", 'C'}
    };
      printf("Bem-vindo ao Quiz sobre a História do Brasil Imperial!\n");

    for (i = 0; i < total_perguntas; i++) { //Cria o loop para a exibição das questões
        printf("\n%s", perguntas[i].pergunta); //Exibe a questão

        char resposta; // Cria a variavel para armazenar as respostas
        scanf(" %c", &resposta); // Atribui a variavel a resposta dada pelo jogador

        if (resposta == perguntas[i].resposta_correta) { // Mostra ao jogador se ele errou ou acertou
            printf("Resposta correta!\n");
            pontuacao++; //incrementa a pontuação a cada acerto
        } else {
            printf("Resposta errada!\n");
        }
    }

    printf("\n=== Fim do Quiz ===\n");
    printf("Você acertou %d perguntas e errou %d perguntas.\n", pontuacao, total_perguntas - pontuacao); //Mostra a pontuação do jogador
    printf("Aguarde 10 Segundos para continuar\n");
    sleep(10); //Pausa a execução por 10 segundos
    system("cls"); //Limpa o CMD

}

void brasilSegundaGuerra(){ // Cria a função com perguntas sobre o Brasil na segunda guerra mundial
    system("cls");
    int pontuacao = 0;
    int total_perguntas = 5;
    int i;
    Pergunta perguntas[5] = {
        {"Qual foi o papel do Brasil na Segunda Guerra Mundial?\nA) O Brasil permaneceu neutro durante todo o conflito\nB) O Brasil lutou ao lado das forças do Eixo\nC) O Brasil se juntou aos Aliados e enviou tropas para combater na Europa\n", 'C'},
        {"Em que ano o Brasil entrou oficialmente na Segunda Guerra Mundial?\nA) 1941\nB) 1942\nC) 1945\n",'B'},
        {"Qual foi o nome da força militar brasileira que lutou na Europa durante a guerra?\nA) Força Aérea Brasileira (FAB)\nB) Marinha do Brasil\nC) Força Expedicionária Brasileira (FEB)\n",'C'},
        {"Qual foi o principal teatro de operações onde a Força Expedicionária Brasileira atuou?\nA) África\nB) Ásia\nC) Itália\n",'C'},
        {"Na Segunda Guerra Mundial, qual unidade do exército brasileiro se destacou em ações de combate, incluindo a Batalha de Monte Castelo?\nA) 1 Divisão de Infantaria Expedicionária\nB) 5 Divisão Blindada\nC) 2 Brigada de Artilharia Antiaérea\n",'A'}
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
    printf("Você acertou %d perguntas e errou %d perguntas.\n", pontuacao, total_perguntas - pontuacao);
    printf("Aguarde 10 Segundos para continuar\n");
    sleep(10);
    system("cls");
}

void brasilColonia(){ //Cria a função com perguntas sobre o Brasil colonial
    system("cls");
    int pontuacao = 0;
    int total_perguntas = 5;
    int i;
     Pergunta perguntas[5] = {
        {"Qual foi o sistema de exploração econômica adotado no Brasil Colônia?\nA) Capitalismo\nB) Socialismo\nC) Sistema de plantation\n",'C'},
        {"Qual produto foi a principal base da economia colonial brasileira?\nA) Algodão\nB) Tabaco\nC) Açúcar\n",'C'},
        {"O Brasil Colônia foi uma colônia de qual país europeu?\nA) França\nB) Espanha\nC) Portugal\n",'C'},
        {"Durante o Brasil colonial, qual foi o significativo conflito que eclodiu devido às disputas por terras e mineração, envolvendo colonos portugueses e imigrantes em busca de ouro, culminando em hostilidades e rivalidades?\nA) Guerra dos Mascates\nB) Guerra dos Farrapos\nC) Guerra dos Emboabas\n", 'C'},
        {"Qual foi a medida colonial implementada pela Coroa Portuguesa para controlar a produção de açúcar no Brasil, estabelecendo um monopólio sobre o produto e gerando descontentamento entre os colonos?\nA) Lei das Sesmarias\nB) Alvará Régio\nC) Pacto Colonial\n", 'B'}
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
    printf("Você acertou %d perguntas e errou %d perguntas.\n", pontuacao, total_perguntas - pontuacao);
    printf("Aguarde 10 Segundos para continuar\n");
    sleep(10);
    system("cls");
}

void menu(){ //Cria a função menu, onde é apresentado para o jogador o jogo e suas opções

    int opcao, init; //Declara variaveis de opções

    printf("------------------------------\n      Time Trail Quiz\n------------------------------\n\n");
    printf("Seja Bem-vindo ao Time Trail Quiz!\nOnde testaremos o seu conhecimento sobre a Historia Brasileira!!\n\n----------------Regras----------------\nResponder apenas em letra maiscula\nAdemais não tem regra rsrs\n--------------------------------------\nDeseja começar agora?\n1. Sim\n2. Não\n");
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
                        brasilImperio(); //Chama a função para executar o quiz
                        break;
                    case 2:
                        brasilSegundaGuerra(); //Chama a função para executar o quiz
                        break;
                    case 3:
                        brasilColonia(); //Chama a função para executar o quiz
                        break;
                    case 0:
                        break; //Finaliza a execução
                    default:
                        printf("Opcão invalida, tente novamente!\n");
                        sleep(3); //Pausa a execução por 3 segundos antes de tentar novamente
                        system("cls");
                        break;
                    }
            } while(opcao != 0); //Loop para repetir o menu enquanto a escolha do jogador não for 0

        case 2:
            printf("Saindo...");
            break;

        default:
            printf("Alternativa invalida!\nTente novamente!!");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese"); //Implenta a possibilidade de utilizar acentos e ç
    menu(); //Chama a função menu
    return 0;
}
