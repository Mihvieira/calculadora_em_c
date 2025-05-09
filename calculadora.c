#include <stdio.h>
#include <stdlib.h>

// Definição da struct Calculadora com ponteiros para funções
typedef struct {
    double num1;
    double num2;
    char operador;
    double resultado;

    // Ponteiros para funções
    double (*somar)(double, double);
    double (*subtrair)(double, double);
    double (*multiplicar)(double, double);
    double (*dividir)(double, double);
} Calculadora;

// Funções para as operações
double somar(double num1, double num2) {
    return num1 + num2;
}

double subtrair(double num1, double num2) {
    return num1 - num2;
}

double multiplicar(double num1, double num2) {
    return num1 * num2;
}

double dividir(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro! Divisão por zero não é permitida.\n");
        exit(1); // Termina o programa com código de erro
    }
}

// Função para executar a operação com base no operador
double executar_operacao(Calculadora *calc) {
    switch (calc->operador) {
        case '+':
            return calc->somar(calc->num1, calc->num2);
        case '-':
            return calc->subtrair(calc->num1, calc->num2);
        case '*':
            return calc->multiplicar(calc->num1, calc->num2);
        case '/':
            return calc->dividir(calc->num1, calc->num2);
        default:
            printf("Operador inválido!\n");
            exit(1); // Termina o programa com código de erro
    }
}

// Função principal
int main() {
    Calculadora minhaCalculadora;

    // Inicializando os ponteiros para funções
    minhaCalculadora.somar = somar;
    minhaCalculadora.subtrair = subtrair;
    minhaCalculadora.multiplicar = multiplicar;
    minhaCalculadora.dividir = dividir;

    printf("Digite o primeiro número: ");
    scanf("%lf", &minhaCalculadora.num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &minhaCalculadora.operador);

    printf("Digite o segundo número: ");
    scanf("%lf", &minhaCalculadora.num2);

    minhaCalculadora.resultado = executar_operacao(&minhaCalculadora);

    printf("Resultado: %.2lf\n", minhaCalculadora.resultado);

    return 0;
}
