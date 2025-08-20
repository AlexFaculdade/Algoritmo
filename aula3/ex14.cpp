#include <iostream>

using namespace std;

int main() {

    float valor, valorTotal;
    cout << "Valor da compra: " << endl;
    cin >> valor;
    if(valor >= 200) {
        cout << "Frete gratis, valor total: " << valor << endl;
    } else {
        valorTotal = valor+20;
        cout << "Sem frete gratis, frete: 20 reais," << " valor do produto: " << valor << ", valor total: " << valorTotal << endl;
    }

    cin >> valor;
    return 0; 
}