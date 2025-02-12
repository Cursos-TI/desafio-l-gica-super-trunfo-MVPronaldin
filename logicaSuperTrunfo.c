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

        printf("\nA cidade mais populosa é: \n");
        if (populacaoA01 > populacaoA02){
            printf("a Primeira Cidade!\n");
            resultadopopulacao = populacaoA01 - populacaoA02;
            printf("e tem %d pessoas a mais do que a outra cidade.\n", resultadopopulacao);
        }
        if (populacaoA01 < populacaoA02){
            printf("a Segunda Cidade\n");
            resultadopopulacao = populacaoA02 - populacaoA01;
            printf("e tem %d pessoas a mais do que a outra cidade.\n", resultadopopulacao);
        }
        if (populacaoA01 == populacaoA02){
            printf("as duas cidades tem o mesmo número de habitantes!\n");
        }
        

    return 0;
}
