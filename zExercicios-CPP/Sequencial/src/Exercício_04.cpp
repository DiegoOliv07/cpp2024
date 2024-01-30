#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Digite um numero ";
    cin >> numero;

    if(numero % 2 == 0)
    {
        cout << "O numero " << numero << " e par!";
        return 0;

    }
    cout << "O numero " <<  numero <<  " e impar";
    return 0;

}