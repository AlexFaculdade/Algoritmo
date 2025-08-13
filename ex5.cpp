#include <iostream>

using namespace std;

int main() {    
    int nota;
    float frequencia;
    cout << "Nota: " << endl;
    cin >> nota;
    cout << "Frequencia sem %" << endl;
    cin >> frequencia;
    frequencia = frequencia/100;
    if(nota >= 6 && frequencia >= 0.75) {
        cout << "Aprovado" << endl;
    } else if(nota >= 4 && frequencia >= 0.75) {
        cout << "Recuperacao" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    cin >> frequencia;

    return 0;
}