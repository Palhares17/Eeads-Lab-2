#include <stdio.h>

typedef struct {
    char nome[30];
    char dataDeNascimento[20];
    char CPF[20];
} conta;

void preencher(conta *pessoal) {
    printf("Nome:");
    scanf("%s", pessoal->nome);
    printf("Data de Nascimento:");
    scanf("%s", pessoal->dataDeNascimento);
    printf("CPF:");
    scanf("%s", pessoal->CPF);
}

void print(conta *pessoal) {
    printf("Nome: %s\n", pessoal->nome);
    printf("Data de Nascimento: %s\n",  pessoal->dataDeNascimento);
    printf("CPF: %s\n",  pessoal->CPF);
}

int main() {
    conta pessoal;

    preencher(&pessoal);
    print(&pessoal);
    return(0);
}