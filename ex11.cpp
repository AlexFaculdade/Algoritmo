#include <iostream>

using namespace std;

int main() {
    float produto, desconto, produtoDescontado;
    cout << "Qual o preco do produto: " << endl;
    cin >> produto;
    cout << "Qual o valor do desconto em decimal: " << endl;
    cin >> desconto;
    produtoDescontado = produto - (produto * desconto);
    cout << "O valor do produto descontado: " << produtoDescontado << endl;
    cin >> produto;
    return 0;
}