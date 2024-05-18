#include <stdio.h>

// DEFINE é utilizando em uma constante algo que nao vai mudar de valor vai ser sempre fixo, funciona similar
// a uma variavel a CONSTANTE é sempre DENOMINADA em LETRAS MAIUSCULAS
#define NUMERO_DE_TENTATIVAS 5

int main() {

    // BLOCO REFERENTE AO CABECALHO DE APRESENTACAO
    printf("--------------------------------------\n");
    printf("Bem vindo ao nosso jogo de adivinhacao\n");
    printf("--------------------------------------\n"); 

    // int é referente ao inteiro na declaracao de variaveis
    int numerosecreto = 42;

    int chute;
    
    // FOR é referente ao looping para fazer o looping funcionar é necessario declarar uma variavel int i = 1;
    // em seguinda tem que colocar a contagem na variavel ou seja a i<= 3; e adicionar a quantidade que ele quer que aumente,
    // durante cada rodada para acrescentar mais é a variavel seguindo de ++ EX: i++
    //for (int i = 1; i<= 3; i++){
    //printf("Tentativa %d de 3 \n", i);

    for (int i = 1; i<= NUMERO_DE_TENTATIVAS; i++){

    // %d é utilizado para adicionar o valor da variavel no printf
    //printf("o numero %d e o numero secreto.\n ", numerosecreto); 
    printf("Tentativa %d de %d \n", i, NUMERO_DE_TENTATIVAS);
    printf("Qual e o seu chute?\n ");
    // Scanf é utilizado para ler a resposta da pergunta e adicionar a uma variavel o valor nesse caso seria a variavel int chute;,
    // Para esse valor ser adicionado na VARIAVEL é necessario colocar o & antes do nome da variavel para adicionar o valor.
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);

    if (chute < 0){
        printf("Voce nao pode chutar numeros negativos!\n");
        // O i--; foi utilizado para reduzir uma tentativa do lopping que a gente iniciou assim evitando que o
        // usuario perca uma das suas 5 tentativas de acerto.
        i--;
        //Continue é utilizado para parar o continuidade da leitura do codigo e retorna para o LOOPING inicial e continua
        //a leitura do codigo novamente ao inves de parar tudo como o BREAK;
        continue;
    }
    

    // IF se refere ao SE e o ELSE se refere ao SENAO
    // == se refere a comparacao de valores
    // Quando se utilizar IF e Else nao tem necessidade de utilizar ;
    // É permitido o uso de VARIOS IF dentro de um ELSE

    // Outra forma de declarar o if seria int acertou = (chute == numerosecreto);
    // if(acertou)
    // Existe a opcao de usar ELSE IF para reduzir o processamento do CODIGO, quando o valor for encontrado nao ira
    // continuar testando os valores.
    if(chute==numerosecreto) {
        printf("Parabens voce acertou!!\n");
        //BREAK; é o comando utilizando para parar o LOOPING ou seja o FOR quando atingir a resposta desejada.
        break;
    }
    else {
        //outra forma de declarar o IF MAIOR seria criando outra variavel dentro do ELSE
        // int maior = (chute > numerosecreto);
        // if(maior)
        if (chute > numerosecreto) {
            printf("Seu chute foi maior que o numero secreto, tente novamente!\n");
        }
        // No caso nao seria necessario declarar o IF como menor afinal ja existe duas declaracoes
        // entao a ultima seria o oposto das outras EX:if{ print("Seu chute foi menor que o numero secreto, tente novamente\n")}
            if (chute < numerosecreto) {
            printf("Seu chute foi menor que o numero secreto, tente novamente\n");
                }
        
        
        }
    }
                printf("Fim de jogo!!");
}
