#include <stdio.h>
#include <string.h>

int main() {
    char senhaDigitada[20];
    char senhaCorreta[20] = "bella";

    printf("=== Sistema Secreto do Math ===\n\n");
    printf("Digite a senha para continuar: ");
    scanf("%s", senhaDigitada);

    if (strcmp(senhaDigitada, senhaCorreta) == 0) {
        printf("\nParabens acesso liberado\n\n");

        printf("      *****       *****\n");
        printf("    *********   *********\n");
        printf("  ************* *************\n");
        printf(" *****************************\n");
        printf("  ***************************\n");
        printf("    ***********************\n");
        printf("      *******************\n");
        printf("        ***************\n");
        printf("          ***********\n");
        printf("            *******\n");
        printf("              ***\n");
        printf("               *\n");

        printf("\n-> Coracao do math eh todo seu Hahaha! <-\n");
    } else {
        printf("\nAcesso negado! Nome incorreto... :( \n");
    }

    return 0;
}


