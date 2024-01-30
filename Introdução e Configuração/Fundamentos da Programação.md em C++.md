# Fundamentos da Programação em C++

## Fluxo de Controle

O Fluxo de Controle em C++ envolve estruturas como sequencial, condicional e iterativo.

### 1. Sequencial
Instruções são executadas em ordem sequencial.

```cpp
#include <iostream>
using namespace std;

int main() {
    instrucao1();
    instrucao2();
    instrucao3();
    return 0;
}
```

### 2. Condicional
Execução condicional usando `if`, `else`.

```cpp
#include <iostream>
using namespace std;

int main() {
    if (condicao) {
        // bloco de código se a condição for verdadeira
    } else {
        // bloco de código se a condição for falsa
    }
    return 0;
}
```

### 3. Iterativo
Loops com `while` para execução repetida.

```cpp
#include <iostream>
using namespace std;

int main() {
    while (condicao) {
        // bloco de código a ser repetido
    }
    return 0;
}
```

## Variáveis

Declaração de variáveis em C++.

```cpp
#include <iostream>
using namespace std;

int main() {
    int idade = 25;         // Variável do tipo inteiro
    float altura = 1.75;    // Variável do tipo ponto flutuante
    char letra = 'A';       // Variável do tipo caractere
    return 0;
}
```

## Tipos de Dados

Exemplos de tipos de dados em C++.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero = 10;            // Inteiro
    float decimal = 3.14;       // Ponto Flutuante
    char caractere = 'A';       // Caractere
    string texto = "Hello";     // String
    return 0;
}
```

## Operadores

Uso de operadores aritméticos, relacionais e lógicos em C++.

```cpp
#include <iostream>
using namespace std;

int main() {
    int resultado = 10 + 5;      // Adição
    bool comparacao = (x > y);   // Maior que
    bool logico = (a && b);      // "E" lógico
    return 0;
}
```

Esses conceitos são fundamentais em C++ para o desenvolvimento de algoritmos eficientes e estruturados. Compreender o fluxo de controle, variáveis, tipos de dados e operadores é crucial para programar de maneira eficaz nesta linguagem.