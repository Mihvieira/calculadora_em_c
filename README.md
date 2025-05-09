# Calculadora em C

Este projeto implementa uma calculadora simples em linguagem C, utilizando uma `struct` para encapsular os dados e ponteiros para funções para definir os comportamentos das operações matemáticas. A calculadora suporta as operações básicas: soma, subtração, multiplicação e divisão.

## Estrutura do Código

O código é organizado da seguinte forma:

### 1. **Struct Calculadora**
A `struct Calculadora` encapsula os seguintes dados:
- `num1` e `num2`: Os dois números que serão utilizados nas operações.
- `operador`: O operador matemático (`+`, `-`, `*`, `/`) que define a operação a ser realizada.
- `resultado`: O resultado da operação após o cálculo.
- Ponteiros para funções:
  - `somar`: Ponteiro para a função que realiza a soma.
  - `subtrair`: Ponteiro para a função que realiza a subtração.
  - `multiplicar`: Ponteiro para a função que realiza a multiplicação.
  - `dividir`: Ponteiro para a função que realiza a divisão.

### 2. **Funções de Operações**
As funções `somar`, `subtrair`, `multiplicar` e `dividir` realizam as operações matemáticas básicas. Cada função recebe dois números como parâmetros e retorna o resultado da operação.

### 3. **Função `executar_operacao`**
Esta função utiliza o operador fornecido pelo usuário para determinar qual operação será executada. Ela chama o ponteiro de função correspondente na `struct Calculadora`.

### 4. **Função Principal (`main`)**
A função principal:
- Inicializa os ponteiros para funções na `struct Calculadora`.
- Solicita ao usuário os dois números e o operador.
- Calcula o resultado chamando a função `executar_operacao`.
- Exibe o resultado ao usuário.

## Como Funciona

1. O programa solicita ao usuário:
   - O primeiro número (`num1`).
   - O operador (`+`, `-`, `*`, `/`).
   - O segundo número (`num2`).

2. Com base no operador fornecido, a função `executar_operacao` chama o ponteiro de função correspondente (`somar`, `subtrair`, `multiplicar` ou `dividir`).

3. O resultado da operação é armazenado no campo `resultado` da `struct Calculadora` e exibido ao usuário.

## Exemplo de Uso

### Entrada:
Digite o primeiro número: 10 Digite o operador (+, -, *, /): * Digite o segundo número: 5

### Saída:

Resultado: 50.00

## Tratamento de Erros

- **Divisão por zero**: Caso o usuário tente dividir por zero, o programa exibe uma mensagem de erro e encerra a execução.
- **Operador inválido**: Caso o operador fornecido não seja válido, o programa exibe uma mensagem de erro e encerra a execução.

## Vantagens da Implementação

- **Modularidade**: As funções de operação são separadas, facilitando a manutenção e a extensão do código.
- **Flexibilidade**: O uso de ponteiros para funções permite associar diferentes comportamentos à `struct Calculadora`.
- **Simulação de orientação a objetos**: Embora C não suporte orientação a objetos nativamente, o uso de ponteiros para funções simula esse comportamento.

## Compilação e Execução

Para compilar e executar o programa, use os seguintes comandos no terminal:

```bash
gcc  -o calculadora
./calculadora
```

## Contribuições
Sinta-se à vontade para contribuir com melhorias ou novas funcionalidades para este projeto. Sugestões e pull requests são bem-vindos!
