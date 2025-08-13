#include <iostream>

using namespace std;

int main() {
    float altura, peso, imc;

    cout << "Altura em m: " << endl;
    cin >> altura;
    cout << "Peso em Kg: " << endl;
    cin >> peso;
    imc = peso / (altura*altura);
    if(imc >= 30) {
        cout << "Seu IMC: " << imc << ", voce esta obeso" << endl;
    } else if(imc >= 25 && imc < 30) {
        cout << "Seu IMC: " << imc << ", voce esta com sobrepreso" << endl;
    } else if(imc >= 18.5 && imc < 25) {
        cout << "Seu IMC: " << imc << ", seu peso esta normal" << endl;
    } else if( imc < 18.5) {
        cout << "Seu IMC: " << imc << ", voce esta abaixo do peso" << endl;
    }

    cin >> altura;


    return 0;
}