#include <iostream>

using namespace std;

int main() {
    float imc, peso, altura;
    cout << "Digite o peso em Kg: " << endl;
    cin >> peso;
    cout << "Digite a altura m: " << endl;
    cin >> altura;

    imc = peso/(altura*altura);
    cout << "O IMC é: " << imc << endl;
    cin >> imc;

    return 0;
}