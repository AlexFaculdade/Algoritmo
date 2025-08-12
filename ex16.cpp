#include <iostream>

using namespace std;

int main() {
    float cotacaoAtual, valorReais, valorConvertido;
    cout << "Digite o valor em real: " << endl;
    cin >> valorReais;
    cotacaoAtual = 5.41;
    valorConvertido = valorReais/cotacaoAtual;
    cout << "O valor: " << valorReais << " convertido em dólar é " << valorConvertido << endl;
    cin >> cotacaoAtual;
    return 0;
}