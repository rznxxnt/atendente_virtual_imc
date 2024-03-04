#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Função para calcular o valor do IMC retorno
float imc(float peso, float altura) {
    return peso / (altura * altura);
}

//função para caracterizar o peso do usuario 
void category(float imc) {
    if (imc < 18.5){
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9){
        printf("Peso normal\n");
    } else if (imc >= 24.9 && imc < 29.9){
        printf("Acima do peso\n");
    } else {
        printf("Obesidade\n");
    }
}

int main(){

//função escolha usuario

int i;
int z;
char c[50] = "";
char resposta[50] = "";
float peso, altura;

 while (1) { // Loop infinito
    system("CLS");
    printf("Ola me chamo Ramon e irei ser seu atendente virtual...\n");
    printf("Em que posso lhe ajudar?\n\n");
    printf("1- Qual meu imc.\n");
    printf("2- Duvidas.\n");
    printf("3- Sair.\n\n");

    printf("Informe o numero da opcao que voce deseja:\n");
    scanf("%d", &i);


// Função principal que obtem peso e altura de uma pessoa e chama a função imc
// e depois informa em qual categoria uma pessoa se enquadra
    switch(i){
    case 1:
        printf("Voce selecionou a opcao (QUAL MEU IMC)");
        printf("\n\n");
        printf("Informe seu peso:\n");
        scanf("%f", &peso);
        printf("\n\n");
        printf("Informe sua altura:\n");
        scanf("%f", &altura);
        printf("\n\n");

        float imcValor = imc(peso, altura);
        printf("Seu IMC corresponde a: %.2f\n", imcValor);
        category(imcValor);

        printf("\n\n");
        printf("OBS: Dados informados, com base em estudos da OMS...\n\n");
        printf("Para informacoes pessoais mais direcionadas, consulte um nutricionista\n\n");


        system("PAUSE");
        break;

    case 2:
        printf("Voce selecionou a opcao (DUVIDAS)\n\n");

        printf("Qual sua duvida?\n\n");
        printf("1- O que e o IMC?\n");
        printf("2- Como faz o calculo do IMC?\n");
        printf("3- Quais sao as principais causas que influenciam no IMC?\n\n");
        scanf("%d", &z);
        printf("\n\n");

            switch(z){
                case 1:
                    printf("Voce selecionou a opcao (O QUE E O IMC)\n\n");
                    printf("Criado no seculo XIX pelo matematico Lambert Quetelet, o Indice de Massa Corporal,\n");
                    printf("conhecido pela sigla IMC, e um calculo simples que permite medir se alguem\n");
                    printf("esta ou nao com o peso ideal.\n");
            system("PAUSE");        
            break;  
            
                case 2:
                    printf("Voce selecionou a opcao (COMO FAZ O CALCULO DO IMC)\n\n");
                    printf("Basta voce dividir o seu peso pela altura duas vezes.\n");
                    printf("Vamos ver um exemplo. Digamos que voce tem altura de 1,70 m e pesa 65 Kg.\n");
                    printf("Neste caso para calcular IMC voce devera dividir duas vezes o numero 65 por 1,7.\n\n");
            system("PAUSE");
            break;
            
                case 3:
                    printf("Voce selecionou a opcao (Quais sao as principais causas que influenciam no IMC)\n\n");
                    printf("Varios fatores podem influenciar o IMC, entre eles a atividade fisica. A reducao da atividade fisica por um\n");
                    printf("longo periodo pode levar a um ganho de peso corporeo e, por consequencia, ao aumento do IMC.\n\n");
                 system("PAUSE");
                 break;
                 system("PAUSE");
                 break;
            }

        case 3:
            break;

    return 0;
    }
        printf("\n\nVoce gostou do atendimento?\n");
        scanf("%s", c);


        if(strcmp(c, "sim") == 0 || strcmp(c, "Sim") == 0){
            printf("Muito obrigado pela avaliacao\n");
        }
        else{
            printf("Desculpe iremos melhorar\n");
        }
        system("PAUSE");
        
}
	
}
