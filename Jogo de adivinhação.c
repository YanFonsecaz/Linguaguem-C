#include <stdio.h>


int main() {

    // BLOCO REFERENTE AO CABECALHO DE APRESENTACAO
    printf("--------------------------------------\n");
    printf("Bem vindo ao nosso jogo de adivinhacao\n");
    printf("--------------------------------------\n"); 

    // int é referente ao inteiro na declaracao de variaveis
    int numerosecreto = 42;

    int chute;

    int ganhou = 0;

    int tentativas = 0;

    int pontos = 1000;
    
    // WHILE é referente ao enquanto (enquanto x for 0 era continuar o LOOPING ate o enquanto for 1 entao sera parado o LOOPING).

    while (ganhou == 0){

    // %d é utilizado para adicionar o valor da variavel no printf
    //printf é utilizado para escrever o texto na tela; 
    printf("Tentativa %d\n", tentativas + 1);
    printf("Qual e o seu chute?\n ");
    // Scanf é utilizado para ler a resposta da pergunta e adicionar a uma variavel o valor nesse caso seria a variavel int chute;,
    // Para esse valor ser adicionado na VARIAVEL é necessario colocar o & antes do nome da variavel para adicionar o valor.
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);

    if (chute < 0){
        printf("Voce nao pode chutar numeros negativos!\n");
        
        //Continue é utilizado para parar o continuidade da leitura do codigo e retorna para o LOOPING inicial e continua
        //a leitura do codigo novamente ao inves de parar tudo como o BREAK;
        continue;
    }
    
    int acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;

    // IF se refere ao SE e o ELSE se refere ao SENAO
    // == se refere a comparacao de valores
    // Quando se utilizar IF e Else nao tem necessidade de utilizar ;
    // É permitido o uso de VARIOS IF dentro de um ELSE

    // Outra forma de declarar o if seria int acertou = (chute == numerosecreto);
    // if(acertou)
    // Existe a opcao de usar ELSE IF para reduzir o processamento do CODIGO, quando o valor for encontrado nao ira
    // continuar testando os valores.
    if(acertou) {
        printf("Parabens voce acertou!!\n");
        //ganhou = 1 é utilizado como um BREAK fazendo com que o LOOPING DO WHILE seja para adicionando o valor 1 ao ganhou.
        ganhou = 1;
    }
            // ELSE IF é utilizado para fazer a verificacao se é Verdadeiro ou Falso porem assim que encontrando o valor, faz com que o
            // programa nao leia o resto do codigo fazendo voltar o pro LOOPING OU ENCERRANDO ELE.
    else if (maior){
            printf("Seu chute foi maior que o numero secreto, tente novamente!\n");
    } 
            else{
            printf("Seu chute foi menor que o numero secreto, tente novamente\n");
                }
        
         tentativas++;

            int pontosperdidos = (chute - numerosecreto) / 2;
         pontos = pontos - pontosperdidos;    
}

                printf("Fim de jogo!!\n");
                printf("Total de pontos foi de %d\n", pontos );
}
