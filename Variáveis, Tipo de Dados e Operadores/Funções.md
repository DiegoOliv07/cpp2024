# Funções em C++

As funções são blocos de código reutilizáveis que realizam uma tarefa específica. Elas são essenciais para organizar e modularizar o código em C++. Vamos abordar a declaração e chamada de funções, bem como o uso de parâmetros e retorno de funções.

## Declaração e Chamada de Funções

### Declaração de Funções

A declaração de uma função inclui o tipo de retorno, o nome da função e, opcionalmente, os parâmetros que ela aceita.

```cpp
#include <iostream>
using namespace std;

// Declaração da função sem parâmetros e sem retorno
void saudacaoSimples();

// Declaração da função com parâmetros e retorno
int soma(int a, int b);
```

### Chamada de Funções

A chamada de uma função é feita pelo nome da função seguido pelos parênteses, que podem conter argumentos.

```cpp
int main() {
    // Chamada da função sem parâmetros e sem retorno
    saudacaoSimples();

    // Chamada da função com parâmetros e retorno
    int resultado = soma(3, 5);
    cout << "A soma é: " << resultado << endl;

    return 0;
}
```

## Parâmetros e Retorno de Funções

### Parâmetros de Funções

Os parâmetros são valores que uma função recebe para realizar suas operações. Eles são especificados na declaração da função.

```cpp
#include <iostream>
using namespace std;

// Função com parâmetros
void exibirMensagem(string mensagem) {
    cout << mensagem << endl;
}

int main() {
    // Chamada da função com parâmetros
    exibirMensagem("Olá, mundo!");

    return 0;
}
```

### Retorno de Funções

O retorno de uma função é o valor que ela fornece após sua execução. O tipo de retorno é especificado na declaração da função.

```cpp
#include <iostream>
using namespace std;

// Função com retorno
int dobrar(int numero) {
    return numero * 2;
}

int main() {
    // Chamada da função com retorno
    int resultado = dobrar(5);
    cout << "O dobro é: " << resultado << endl;

    return 0;
}
```