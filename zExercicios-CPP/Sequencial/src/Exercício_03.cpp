#include <iostream>

using namespace std;

float soma(float a, float b)
{
    return a+b;
}

float subtracao(float a, float b)
{
    return a-b;
}

float multi(float a, float b)
{
    return a*b;
}

float div(float a, float b)
{
    if(b != 0)
    {
        return a / b;
    }
    return 0;
}

int main()
{
    float valor1;
    cout << "Digite um valor 01 ";
    cin >> valor1;
    float valor2;
    cout << "Digite um valor 02 ";
    cin >> valor2;

    cout << "Soma: " << soma(valor1, valor2) << endl;
    cout << "Subtracao: "  << subtracao(valor1, valor2) << endl;
    cout << "Multiplicacao: " << multi(valor1, valor2) << endl;
    cout << "Divisao: " << div(valor1, valor2) << endl;
    return 0;
}