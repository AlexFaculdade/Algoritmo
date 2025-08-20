#include <iostream>

using namespace std;

int main() {
    float velocidade;

    cout << "Velocidade: " << endl;
    cin >> velocidade;

    if(velocidade > 110) {
        cout << "Velocidade acima do limite" << endl;
    } else if(velocidade >= 80 && velocidade <= 110) {
        cout << "Velocidade dentro do limite" << endl;
    } else {
        cout << "Velocidade abaixo do recomendado" << endl;
    }

    cin >> velocidade;


    return 0;
}