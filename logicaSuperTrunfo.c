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
        
        /* //menu para a escolha de 1 só opção para comparar!
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
            
            if (populacaoA01 != populacaoA02 && areaA01 != areaA02){
                populacaoA01 > populacaoA02 ? printf("\nA população da primeira cidade é maior ") : printf("\nA população da Segunda cidade é maior ");
                areaA01 > areaA02 ? printf("e a área da primeira cidade é maior!\n") : printf("e a Área da segunda cidade é maior!\n");
            }
            else if (populacaoA01 == populacaoA02 && areaA01 != areaA02){
                printf("\nAs duas cidades tem o mesmo número de habitantes ");
                areaA01 > areaA02 ? printf ("e a área da primeira cidade é maior.\n") : printf("e a área da segunda cidade é maior.\n");
            }
            else if (populacaoA01 != populacaoA02 && areaA01 == areaA02){
                populacaoA01 > populacaoA02 ? printf("\nA população da primeira cidade é maior ") : printf("A população da segunda cidade é maior ");
                printf("e as duas cidades tem o mesmo tamanho.\n");
            } else{
                printf("\nAs áreas e as populações das duas cidades são as mesmas!\n");
            }
            break;

            case 2:
            printf("\nVocê escolheu PIB e Pontos Turísticos!\n");
            printf("O PIB da primeira cidade é: %.2f\n", pibA01);
            printf("O PIB da segunda cidade é: %.2f\n", pibA02);
            printf("\nO número de pontos turísticos da primeira cidade é: %d\n", pontosA01);
            printf("O número de pontos turísticos da segunda cidade é: %d\n", pontosA02);

            if (pibA01 != pibA02 && pontosA01 != pontosA02){
                pibA01 > pibA02 ? printf("\nO PIB da primeira cidade é maior ") : printf("\nO PIB da segunda cidade é maior ");
                pontosA01 > pontosA02 ? printf("e o número de pontos turísticos da primeira cidade é maior.\n") : printf("e o número de pontos turísticos da segunda cidade é maior.\n");
            }
            else if (pibA01 == pibA02 && pontosA01 != pontosA02){
                printf("O PIB das duas cidades é o mesmo ");
                pontosA01 > pontosA02 ? printf("e o número de pontos turísticos da primeira cidade é maior.\n") : printf("e o número de pontos turísticos da segunda cidade é maior.\n");
            }
            else if (pibA01 != pibA02 && pontosA01 == pontosA02){
                pibA01 > pibA02 ? printf("O PIB da primeira cidade é maior ") : printf("O PIB da segunda cidade é maior ");
                printf("e o número de pontos turísticos das duas cidades é igual.\n");
            }
            else {
                printf("O PIB e o número de pontos turísticos das duas cidades é igual.\n");
            }
            break;

            case 3:
            printf("\nVocê escolheu Densidade populacional e PIB per capta!\n");
            printf("A Densidade Populacional da primeira cidade é: %.2f\n", densidadeA01);
            printf("A Densidade Populacional da segunda cidade é: %.2f\n", densidadeA02);
            printf("\nO PIB per capta da primeira cidade é: %d\n", percaptaA01);
            printf("O PIB per capta da segunda cidade é: %d\n", percaptaA02);
            
            if (densidadeA01 != densidadeA02 && percaptaA01 != percaptaA02){
                densidadeA01 > densidadeA02 ? printf("\nA densidade da primeira cidade é maior ") : printf("\nA densidade da segunda cidade é maior ");
                percaptaA01 > percaptaA02 ? printf("e o pib per capta da primeira cidade é maior.\n") : printf("e o pib per capta da segunda cidade é maior.\n");
            }
            else if (densidadeA01 == densidadeA02 && percaptaA01 != percaptaA02){
                printf("O PIB per capta das duas cidades é o mesmo ");
                percaptaA01 > percaptaA02 ? printf("e o PIB per capta da primeira cidade é maior.\n") : printf("e o PIB per capta da segunda cidade é maior.\n");
            }
            else if (densidadeA01 != densidadeA02 && percaptaA01 == percaptaA02){
                densidadeA01 > densidadeA02 ? printf("A densidade populacional da primeira cidade é maior ") : printf("A densidade populacional da segunda cidade é maior ");
            }
            else {
                printf("As duas cidades tem a mesma densidade populacioal e o mesmo PIB per capta.\n");
            }
            break;
            
            default: {
                printf("\nSelecione uma opção válida.\n");
            }
        
        }




    return 0;
}
