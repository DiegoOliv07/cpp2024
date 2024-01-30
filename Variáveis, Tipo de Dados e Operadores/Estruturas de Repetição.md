# Estruturas de Repetição em C++

As estruturas de repetição, também conhecidas como loops, são fundamentais na programação em C++. Elas permitem a execução repetida de um bloco de código enquanto uma condição é satisfeita. As principais estruturas de repetição em C++ são `while`, `do-while`, e `for`.

## O Loop `while`

O loop `while` executa um bloco de código enquanto uma condição especificada for verdadeira.

```cpp
#include <iostream>
using namespace std;

int main() {
    int contador = 0;

    while (contador < 5) {
        cout << "Contador: " << contador << endl;
        contador++;
    }

    return 0;
}
```

Neste exemplo, o bloco de código dentro do `while` é executado repetidamente enquanto a condição `(contador < 5)` for verdadeira.

## O Loop `do-while`

O loop `do-while` é semelhante ao `while`, mas garante que o bloco de código seja executado pelo menos uma vez, mesmo se a condição for falsa.

```cpp
#include <iostream>
using namespace std;

int main() {
    int contador = 0;

    do {
        cout << "Contador: " << contador << endl;
        contador++;
    } while (contador < 5);

    return 0;
}
```

Neste exemplo, o bloco de código é executado pelo menos uma vez antes de verificar a condição.

## O Loop `for`

O loop `for` é útil quando se conhece a quantidade exata de iterações que serão necessárias.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Iteração: " << i << endl;
    }

    return 0;
}
```

O `for` consiste em três partes: a inicialização (`int i = 0`), a condição (`i < 5`), e a atualização (`i++`). O bloco de código dentro do `for` é executado repetidamente até que a condição seja falsa.

## Controle de Fluxo: `break` e `continue`

Dentro de loops, o comando `break` é utilizado para interromper imediatamente o loop, enquanto `continue` pula para a próxima iteração.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // interrompe o loop quando i atinge 5
        }

        if (i % 2 == 0) {
            continue; // pula para a próxima iteração se i é par
        }

        cout << "Valor de i: " << i << endl;
    }

    return 0;
}
```