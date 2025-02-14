#include <stdio.h>

int main() {

        char codigoA01[4], codigoA02[4];
        char nomeA01[20], nomeA02[20];
        int populacaoA01, populacaoA02;
        float areaA01, areaA02;
        float pibA01, pibA02;
        int pontosA01, pontosA02;
        float densidadeA01, densidadeA02;
        float percaptaA01, percaptaA02;
        int resultadopopulacao;
        int opcao, resultadoarea, resultadopercapta;
        int comparacaodupla, areapop;


        printf("Digite o código da primeira cidade a ser comparada:\n");
        scanf("%3s", codigoA01);
        printf("Digite o nome da primeira cidade a ser comparada::\n");
        scanf("%s", nomeA01);
        printf("Digite a população da primeira cidade a ser comparada::\n");
        scanf("%d", &populacaoA01);
        printf("Digite a área da primeira cidade a ser comparada::\n");
        scanf("%f", &areaA01);
        printf("Digite o pib da primeira cidade a ser comparada::\n");
        scanf("%f", &pibA01);
        printf("Digite o número de pontos turísticos da primeira cidade a ser comparada::\n");
        scanf("%d", &pontosA01);

        printf("\nDigite o código da segunda cidade a ser comparada:\n");
        scanf("%3s", codigoA02);
        printf("Digite o nome da segunda cidade a ser comparada:\n");
        scanf("%s", nomeA02);
        printf("Digite a população da segunda cidade a ser comparada:\n");
        scanf("%d", &populacaoA02);
        printf("Digite a área(m2) da segunda cidade a ser comparada:\n");
        scanf("%f", &areaA02);
        printf("Digite o pib da segunda cidade a ser comparada:\n");
        scanf("%f", &pibA02);
        printf("Digite o número de pontos turísticos da segunda cidade a ser comparada:\n");
        scanf("%d", &pontosA02);
        
        densidadeA01 = populacaoA01 / areaA01;
        percaptaA01 = pibA01 / populacaoA01;
        densidadeA02 = populacaoA02 / areaA02;
        percaptaA02 = pibA02 / populacaoA02;

        printf("Os dados da primeira carta são:\n");
        printf("\nCódigo: %3s\nNome: %s\nPopulaçao: %d\nÁrea: %.1f\nPIB: %.1f\nNúmero de pontos turísticos: %d\nDensidade demográfica(km2): %.1f\nPIB per capta: %.1f\n", codigoA01, nomeA01, populacaoA01, areaA01, pibA01, pontosA01, densidadeA01, percaptaA01);
        printf("\nOs dados da segunda carta são:\n");
        printf("\nCódigo: %3s\nNome: %s\nPopulaçao: %d\nÁrea: %.1f\nPIB: %.1f\nNúmero de pontos turísticos: %d\nDensidade demográfica(km2): %.1f\nPIB per capta: %.1f\n", codigoA02, nomeA02, populacaoA02, areaA02, pibA02, pontosA02, densidadeA02, percaptaA02);
        
        /* //menu para a escolha de 1 só opção para comparar
        printf("\nPara saber qual a cidade mais populosa digite 1");
        printf("\nPara saber qual cidade é maior digite 2");
        printf("\nPara saber qual cidade é mais rica digite 3");
        printf("\nEscolha o que deseja comparar: ");
        scanf("%d", &opcao);

        switch (opcao){
        
            case 1:
        printf("\nA cidade mais populosa é: \n");
        if (populacaoA01 > populacaoA02){
            printf("a Primeira Cidade!\n");
            resultadopopulacao = populacaoA01 - populacaoA02;
            printf("e tem %d pessoas a mais do que a outra cidade.\n", resultadopopulacao);
        }
        else if (populacaoA01 < populacaoA02){
            printf("a Segunda Cidade\n");
            resultadopopulacao = populacaoA02 - populacaoA01;
            printf("e tem %d pessoas a mais do que a outra cidade.\n", resultadopopulacao);
        }
        else {
            printf("as duas cidades tem o mesmo número de habitantes!\n");
        }
            break;
            case 2:
        printf("\nA maior cidade é: \n");
        if (areaA01 > areaA02){
            printf("a Primeira Cidade!\n");
            resultadoarea = areaA01 - areaA02;
            printf("e tem %d pessoas a mais que a segunda cidade.\n", resultadoarea);
        }
        else if (areaA01 < areaA02){
            printf("a Segunda Cidade!\n");
            resultadoarea = areaA02 - areaA01;
            printf("e tem %d pessoas a mais que a primeira cidade.\n", resultadoarea);
        }
        else {
            printf("as duas cidades tem o mesmo número de pessoas.\n");
        }
            break;
            case 3:
        if (percaptaA01 > percaptaA02){
            printf("A Primeira cidade!\n");
            resultadopercapta = percaptaA01 - percaptaA02;
            printf("e tem %d a mais de PIB per capta.", resultadopercapta);
        }
        else if (percaptaA01 < percaptaA02){
            printf("A Segunda cidade!\n");
            resultadopercapta = percaptaA02 - percaptaA01;
            printf("e tem %d a mais de PIB per capta.", resultadopercapta);
        }
        else {
            printf("as duas cidades tem o mesmo PIB per capta.\n");
        }
        break;
    }*/
        printf("\nO que você deseja comparar?\n");
        printf("Digite 1 para População e Área.\n");
        printf("Digite 2 para PIB e Pontos turísticos.\n");
        printf("Digite 3 para Densidade Populacional e Pib Per Capta.\n");
        scanf("%d", &comparacaodupla);

        switch (comparacaodupla){
            case 1:
            printf("\nVocê escolheu População e Área!\n");
            printf("A população da primeira cidade é: %d\n", populacaoA01);
            printf("A população da segunda cidade é: %d\n", populacaoA02);
            printf("\nA área da primeira cidade é: %.2f\n", areaA01);
            printf("A área da segunda cidade é: %.2f\n", areaA02);
            
            
        }



    return 0;
}
