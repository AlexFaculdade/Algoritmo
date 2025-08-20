#include <iostream>

using namespace std;

int main() {
    float horas, valorPago, horasExcedentes, total, valorExtra,valorNormal;
    cout << "Horas trabalhadas: " << endl;
    cin >> horas;
    cout << "Valor pago por hora: " << endl;
    cin >> valorPago;

    if(horas > 40) {
        horasExcedentes = horas-40;
        horas = 40;
    }
    valorExtra = horasExcedentes * (valorPago + (valorPago*0.5));
    valorNormal = horas*valorPago;
    total = valorNormal + valorExtra;
    if(horasExcedentes >0) {
        cout << "Voce recebera " << valorExtra << " reais pelas horas extras e " << valorNormal << " reais pelas horas normais" << ", no total " << total << " reais" << endl;
    } else {
        cout << "Voce recebera " << " reais no total" << endl;
    }

    cin >> horas;
    return 0;
}