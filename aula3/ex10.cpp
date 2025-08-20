#include <iostream>

using namespace std;

int main() {

    float consumo, valor;
    cout << "Consumo de energia em kWh: " << endl;
    cin >> consumo;

    if(consumo > 200) {
        valor = consumo * 0.9;
    } else if(consumo <= 200 && consumo > 100) {
        valor = consumo * 0.7;
    } else {
        valor = consumo * 0.5;
    }

    cout << "O valor gasto de " << consumo << " KWh, ficara " << valor << " reais" << endl;
    cin >> valor;

    return 0;
}