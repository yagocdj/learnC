#include <stdio.h>

int main(void)
{
    
    struct ficha_aluno  // tipo de dado
    {
        char nome[40];
        int numero;
        float nota;
    };  // definição do struct
    
    struct ficha_aluno aluno;

    printf("\n---------- Cadastro do aluno ----------\n\n\n");

    printf("Nome do aluno......:");
    fgets(aluno.nome, 40, stdin);

    printf("Digite o número do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n\n ---------- Lendo os dados da struct ----------\n\n");
    printf("Nome ..........: %s", aluno.nome);
    printf("Numero ........: %d \n", aluno.numero);
    printf("Nota ..........: %.2f \n", aluno.nota);
    
    return 0;
}