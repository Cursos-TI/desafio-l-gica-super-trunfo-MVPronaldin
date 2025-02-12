#include <stdio.h>
    int main (){
        int idade;

        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        if (idade >= 60){
            printf("Você é idoso!\n");
        }else if (idade >= 18 && idade < 60 ){
            printf("Você é adulto!\n");
        }else if (idade >= 12 && idade < 18){
            printf("Você é um adolescente!\n");
        }else{
            printf("Você ainda é uma criança!\n");
        }
        




        return 0;
    }