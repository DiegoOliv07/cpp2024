#include <iostream>

using namespace std;
int main()
{
    string nome;
    cout << "Digite seu nome: ";
    getline(cin, nome);

    int idade;
    cout <<  "Digite sua idade: ";
    cin >> idade;

    cout << "Ola " << nome << " Voce tem " << idade << " anos" << endl;

    return 0;
}