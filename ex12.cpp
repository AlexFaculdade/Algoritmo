#include <iostream>

using namespace std;

int main() {
    float deposito, rendimentoMensal, valorTotal;
    rendimentoMensal = 0.1;
    cout << "Coloque o valor do deposito" << endl;
    cin >> deposito;
    valorTotal = deposito +  (deposito * rendimentoMensal);
    cout << "O valor com o rendimento é: " << valorTotal << endl;
    cin >> deposito;
    return 0;
} 