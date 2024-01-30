# Sintaxe Básica do C++

## Estrutura de um Programa C++
Um programa em C++ consiste em uma ou mais partes chamadas funções. O ponto de início de execução do programa é marcado pela função `main`¹.

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis e sentenças
}
```

## Sentenças
Cada instrução em C++ é chamada de sentença. Sentenças simples terminam com ponto e vírgula, enquanto sentenças compostas são agrupadas por chaves¹.

```cpp
x = 3;  // Sentença simples

{ 
    i = 3; 
    cout << i << endl; 
    i + 1; 
}  // Sentença composta
```

## Variáveis
Uma variável é uma informação associada a um local específico na memória, com cada variável tendo um tipo específico, como `int`, `char` e `float`¹.

```cpp
int x;    // Variável do tipo int
char y;   // Variável do tipo char
float z;  // Variável do tipo float
```

## Funções
Funções são blocos de código que realizam tarefas específicas, podendo receber parâmetros e retornar valores.

```cpp
int soma(int a, int b) {
    return a + b;
}
```

## Orientação a Objetos
C++ é uma linguagem orientada a objetos, utilizando conceitos como classes e objetos para organizar o código⁶.

## Entrada e Saída de Dados
A entrada e saída de dados em C++ é frequentemente realizada usando a biblioteca `<iostream>`. A função `cin` é usada para entrada e `cout` para saída.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;

    // Entrada de dados
    cout << "Digite um número: ";
    cin >> numero;

    // Saída de dados
    cout << "Você digitou: " << numero << endl;

    return 0;
}
```