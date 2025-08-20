#include <iostream>

using namespace std;

int main() {
    float valor;
    cout << "Valor produto: " << endl;
    cin >> valor;
    if(valor >= 100) {
        valor = valor - (valor*0.05);
    }

    cout << "O valor do produto é: "<< valor << endl;
    cin >> valor;
    return 0;
}