# Estruturas Condicionais em C++

As estruturas condicionais são fundamentais na programação em C++, permitindo que um programa tome decisões com base em condições específicas. As principais estruturas condicionais em C++ são `if`, `else if`, `else`, e `switch`. Vamos explorar cada uma delas detalhadamente.

## A Estrutura `if`

A estrutura `if` é utilizada para executar um bloco de código somente se uma condição for verdadeira.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero = 10;

    if (numero > 0) {
        cout << "O número é positivo." << endl;
    }

    return 0;
}
```

Neste exemplo, o código dentro do bloco `if` só será executado se a condição `(numero > 0)` for verdadeira.

## A Estrutura `else`

A estrutura `else` é usada em conjunto com `if` para executar um bloco de código quando a condição do `if` é falsa.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero = -5;

    if (numero > 0) {
        cout << "O número é positivo." << endl;
    } else {
        cout << "O número é negativo ou igual a zero." << endl;
    }

    return 0;
}
```

Neste caso, o bloco de código dentro do `else` será executado se a condição `(numero > 0)` for falsa.

## A Estrutura `else if`

A estrutura `else if` é utilizada para verificar múltiplas condições em sequência.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero = 0;

    if (numero > 0) {
        cout << "O número é positivo." << endl;
    } else if (numero < 0) {
        cout << "O número é negativo." << endl;
    } else {
        cout << "O número é zero." << endl;
    }

    return 0;
}
```

Neste exemplo, o programa verifica a condição do primeiro `if`, se ela for falsa, verifica a condição do `else if`. Se nenhuma dessas condições for verdadeira, o bloco `else` é executado.

## A Estrutura `switch` e `case`

A estrutura `switch` é utilizada quando se deseja realizar diferentes ações com base no valor de uma variável.

```cpp
#include <iostream>
using namespace std;

int main() {
    int opcao = 2;

    switch (opcao) {
        case 1:
            cout << "Selecionou a opção 1." << endl;
            break;
        case 2:
            cout << "Selecionou a opção 2." << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
    }

    return 0;
}
```

A estrutura `switch` é especialmente útil quando há várias opções a serem consideradas. Cada `case` representa uma possível condição, e o bloco de código correspondente ao `case` cuja condição é satisfeita será executado. O bloco `default` é executado caso nenhum `case` seja correspondido.