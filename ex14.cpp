#include <iostream>

using namespace std;

int main() {
    float nota1,nota2,nota3,peso1, peso2,peso3, mediaPonderada;
    cout << "Digite a nota1: " << endl;
    cin >> nota1;
    cout << "Digite a nota2: " << endl;
    cin >> nota2;
    cout << "Digite a nota3: " << endl;
    cin >> nota3;
    cout << "Digite a peso1: " << endl;
    cin >> peso1;
    cout << "Digite a peso2: " << endl;
    cin >> peso2;
    cout << "Digite a peso3: " << endl;
    cin >> peso3;
    int pesoTotal = peso1+peso2+peso3;
    mediaPonderada = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3)) /pesoTotal;
    cout << "A média ponderada e " << mediaPonderada << endl;
    cin >> mediaPonderada; 
    return 0;
}